#include "macro.hpp";

#define	DEBUG	false

// Functions
GVAR(fnc_public) = {
	// Public functions that may be remoteExecuted by mod
	publicVariable SVAR(fnc_addDamageHandler);
	publicVariable SVAR(fnc_setDisabled);
	publicVariable SVAR(fnc_setOnFire);
	publicVariable SVAR(fnc_leaveVehicle);
	publicVariable SVAR(fnc_informPlayers);
	publicVariable SVAR(fnc_damageCrewLoop);
	publicVariable SVAR(fnc_setEffectFire);
	publicVariable SVAR(fnc_showCrewSmokeEffect);
	publicVariable SVAR(timeoutRange);
};

GVAR(fnc_addDamageHandler) = {
	_this addEventHandler [
		"HandleDamage"
		, {
			params ["_vehicle", "", "_damage", "_source", "_ammo", "_hitIndex", "_shooter", "_hitpoint"];
			if (damage _vehicle >= 1) exitWith {};

			if (_hitIndex == -1) then { _hitpoint = "#structural"; };

			switch toLower(_hitpoint) do {
				case "hitengine";
				case "hitfuel": {
					[_vehicle,_damage] call GVAR(fnc_setOnFire);
					_damage
				};

				case "hithull";
				case "#structural": {
					private _structuralDamage = _damage + (_vehicle getVariable "dzn_VOF_overallStructuralDamage");

					_vehicle setVariable [
						"dzn_VOF_overallStructuralDamage"
						, _structuralDamage
						, true
					];

					if (_structuralDamage > (_vehicle getVariable "dzn_VOF_structuralDamageMax")) then {
						_vehicle call GVAR(fnc_setDisabled);
					};

					_damage min 0.89
				};

				default {
					_damage
				};
			}
		}
	];
};

GVAR(fnc_setDisabled) = {
	// Make unit disabled (to simulate hull/transmission destruction)
	private _vehicle = _this;

	if (_vehicle getVariable ["ace_cookoff_disabled", false]) exitWith {};

	_vehicle setFuel 0.00001;
	_vehicle setVariable ["ace_cookoff_disabled", true, true];

	[_vehicle, 50] spawn GVAR(fnc_leaveVehicle);
	[_vehicle, 5, "disabled"] spawn GVAR(fnc_informPlayers);
};

GVAR(fnc_setOnFire) = {
    // Check unit damage to Engine/Fuel and start fire on vehicle
	params ["_vehicle", "_damage"];

	if (
		(
			_damage > 0.9
			|| _vehicle getHitPointDamage "HitFuel" > 0.9
			|| _vehicle getHitPointDamage "HitEngine" > 0.9
		)
		&& !(_vehicle getVariable ["dzn_VOF_infire",false])
	) then {
		_vehicle setVariable ["dzn_VOF_infire", true, true];
		_vehicle setVariable ["dzn_VOF_fireStarted", time, true];
		_vehicle setVariable ["dzn_VOF_allowCrewDamage", false, true];
		[_vehicle] spawn GVAR(fnc_damageCrewLoop);

		private _timeout = floor random GVAR(timeoutRange);

		/*
		 *  Timeline:
		 *  0.25T           - engine fire
		 *  0.25T           - AI crew leave vehicle
		 *  0.33T           - smoke effect for crew
		 *  0.5T            - crew take damage from fire
		 *  0.46...0.5T     - 2nd stage fire
		 *  0.39...0.7T     - 3rd stage fire
		 *  1T              - vehicle large fire
		 *  1T+5s           - vehicle destroyed
		 */

		// Thread to spawn visual Fire effect
		[_vehicle, _timeout] spawn {
			params["_v","_t"];

			private _pos = _v modelToWorld (
				(["motor","engine"] apply { _v selectionPosition _x }) select { !(_x isEqualTo [0,0,0]) } select 0
			);
			_pos = _v worldToModel [_pos select 0, _pos select 1, 1 min (_pos select 2)];

			// If engine and fuel are separated - flame will come to fueltank. If not - flame will move to [0,0,0] of the model
			private _dY = if ( abs((_v selectionPosition "motor" select 1) - (_v selectionPosition "palivo" select 1)) > 1.85 ) then {
				(_v selectionPosition "motor" select 1) - (_v selectionPosition "palivo" select 1)
			} else {
				(_pos select 1)
			};
			private _width = abs(boundingBoxReal _v select 0 select 0) - 1;
			private _path = [
				[ _pos, _t/4 ]
				, [ [selectRandom[1,-1]*random(_width), (_pos select 1) / 2, _pos select 2], (_t/(4 + random (2))) ]
				, [ [selectRandom[1,-1]*random(_width), 0, _pos select 2], (_t/(5 + random (2))) ]
			];

			private _soundSource = createSoundSource ["Sound_Fire", _v, [], 0];
			{
				sleep (_x select 1);

				if (_forEachIndex != 0) then {
					private _p = _path select (_forEachIndex - 1);
					[_v, _p select 0, _t - (_p select 1), [0.5,0.5,0.5], [2, 20, 2, 1, 2, 5.4]] remoteExec [SVAR(fnc_setEffectFire), 0];
				};
				
				[_v, _x select 0, _t - (_x select 1)] remoteExec [SVAR(fnc_setEffectFire), 0];

				if ((_forEachIndex + 1) == count _path) then {
					sleep (_t);
					deleteVehicle _soundSource;
				};
			} forEach _path;
		};

		// Thread to Destroy vehicle
		[_vehicle, _timeout] spawn {
			params["_v","_t"];

			sleep (_t/2);
			if !(_v getVariable "dzn_VOF_allowCrewDamage") then { _v setVariable ["dzn_VOF_allowCrewDamage", true, true]; };

			sleep (_t/2);
			[_v, [0,0,-1.25], 240, [0.5,0.5,0.5], [4, 20, 4, 1, 4, 5.4]] remoteExec [SVAR(fnc_setEffectFire), 0];

			sleep 5;
			_v setDamage 1;
			_v setDamage 0;
			_v setDamage 1;
		};

		// Thread to manage crew
		[_vehicle, _timeout] spawn {
			params["_v","_t"];

			// Inform crew after 0.5T
			[_v, _t/2, "fire"] spawn GVAR(fnc_informPlayers);

			// Disembark AI crew after 0.25T
			sleep (0.25*_t);
			[_v, 75] spawn GVAR(fnc_leaveVehicle);
			
			// Start PP effects for player crew after 0.33T
			sleep (0.33*_t - 0.25*_t);
			_v spawn {
				private _v = _this;
				while {alive _v} do {
					sleep 1;
					{
						[] remoteExec [SVAR(fnc_showCrewSmokeEffect), _x];
					} forEach ((crew _v) select { isPlayer _x && !(_x getVariable ["dzn_VOF_ppSmokeAssigned",false]) });
				};
			};
		};
	};
};

GVAR(fnc_leaveVehicle) = {
	// Force AI to leave vehicle after critical damage was taken
	params["_v", ["_d", 75]];

	private _crew = crew _v;
	{
		if !(isPlayer _x) then {
			(group _x) leaveVehicle _v;
			moveOut _x;

			_x doMove (_v getPos [random (360), _d]);
		};

		sleep random(15)/10;
	} forEach _crew;

	sleep 5;
	_crew apply { _x doMove (_v getPos [random (360), _d]); true };
};

GVAR(fnc_informPlayers) = {
	// Shows hint to inform crew about fire/vehicle disabled
	params["_v","_t","_reason"];
	private _text = "";
	private _sound = "";
	switch _reason do {
		case "fire": {
			_text = parseText format ["<t color='#ff0000' size='2'>%1</t>", localize "STR_VOF_fire"];
			_sound = "Fire";
		};
		case "disabled": {
			_text = parseText format ["<t color='#eeee00' size='1.5'>%1</t>", localize "STR_VOF_transmissionDamage"];
			_sound = "";
		};
	};

	sleep _t;
	{
		if (isPlayer _x) then {
			_text remoteExec ["hint", _x];
			if (_sound != "") then { [_v, [_sound,25,1.5]] remoteExec ["say3d", _x]; };
		};
	} forEach (crew _v);
};

GVAR(fnc_damageCrewLoop) = {
	params["_v",["_damage", 0.05], ["_loopTime",1]];

	waitUntil { _v getVariable ["dzn_VOF_allowCrewDamage", false] };
	while { alive _v } do {
		sleep _loopTime;

		if (isNil "ace_medical_fnc_addDamageToUnit") then {
			{ _x setDamage ((damage _v)+_damage) } forEach (crew _v);
		} else {
			{ 
				[
					_x, _damage, selectRandom ["head", "body", "hand_l", "hand_r", "leg_l", "leg_r"]
				] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];			
			} forEach (crew _v);
		}
	};
};

GVAR(fnc_setEffectFire) = {
	// Add flame effect on vehicle
	params[
		"_obj"
		, ["_attachPoint", [0,0,-1]]
		, ["_timeout", 30]
		, ["_color", [0.5,0.5,0.5]]
		, ["_particleSettings", [2, 20, 1, 1, 1, 5.4]]
		, ["_allowDamage", true]
	];

	// Variables
	private _colorRed = _color select 0;
	private _colorGreen = _color select 1;
	private _colorBlue = _color select 2;

	private _particleLifeTime = _particleSettings select 0;
	private _particleDensity = _particleSettings select 1;
	private _particleSize = _particleSettings select 2;
	private _particleSpeed = _particleSettings select 3;
	private _effectSize = _particleSettings select 4;
	private _orientation = _particleSettings select 5;

	private _damage = if (_allowDamage) then { 1 } else { 0 };

	private _emitter = "#particlesource" createVehicle [10,10,10];
	_emitter attachTo [_obj, _attachPoint];

	_emitter setParticleParams [
		["\A3\data_f\ParticleEffects\Universal\Universal",16,10,32]
		,"","billboard",1,_particleLifeTime
		,[0,0,0],[0,0,0.4*_particleSpeed]
		,0,0.0565,0.05,0.03,[0.9*_particleSize,0],
		[
			[1*_colorRed,1*_colorGreen,1*_colorBlue,-0]
			,[1*_colorRed,1*_colorGreen,1*_colorBlue,-1]
			,[1*_colorRed,1*_colorGreen,1*_colorBlue,-1]
			,[1*_colorRed,1*_colorGreen,1*_colorBlue,-1]
			,[1*_colorRed,1*_colorGreen,1*_colorBlue,-1]
			,[1*_colorRed,1*_colorGreen,1*_colorBlue,0]
		],
		[1], 0.01, 0.02, "", "", "",_orientation,false,-1,[[3,3,3,0]]
	];
	_emitter setParticleRandom [_particleLifeTime/4, [0.15*_effectSize,0.15*_effectSize,0], [0.2,0.2,0], 0.4, 0, [0,0,0,0], 0, 0, 0.2];

	if (_damage > 0) then {_emitter setParticleFire [0.6*_damage, 0.25*_damage, 0.1];};
	_emitter setDropInterval (1/_particleDensity);

	_smokeEmitter = "#particlesource" createVehicleLocal [0,0,0];
	_smokeEmitter setParticleClass "ObjectDestructionSmoke1_2Smallx";
	_smokeEmitter attachTo [_obj, _attachPoint];

	//--- light
	private _lightSize = (_particleSize + _effectSize)/2;

	private _light = createVehicle ["#lightpoint", (getPos _emitter), [], 0, "CAN_COLLIDE"];
	_light attachTo [_obj, _attachPoint];
	// _light setPos [(getPos _emitter) select 0, (getPos _emitter) select 1,((getPos _emitter) select 2) + 0.5];
	_light setLightBrightness 1.0;
	_light setLightColor [1,0.65,0.4];
	_light setLightAmbient [0.15,0.05,0];
	_light setLightIntensity (50 + 400*_lightSize);
	_light setLightAttenuation [0,0,0,1];
	_light setLightDayLight false;

	[_emitter, _light, _smokeEmitter, _timeout] spawn {
		params["_emitter","_light","_smokeEmitter","_timeout"];

		sleep _timeout;
		deleteVehicle _emitter;
		deleteVehicle _smokeEmitter;
		deleteVehicle _light;
	};
};

GVAR(fnc_showCrewSmokeEffect) = {
	if (vehicle player == player || player getVariable ["dzn_VOF_ppSmokeAssigned", false]) exitWith {};
	private _v = vehicle player;
	private _pp = ppEffectCreate ["colorCorrections", 1501];
	private _c = 0;

	player setVariable ["dzn_VOF_ppSmokeAssigned", true];

	while { _v != player && alive player } do {
		_c = (floor random(50))/100;
		_pp ppEffectEnable true;
		_pp ppEffectAdjust [1.0, 1.0, 0.0, [_c, _c, _c, 0.6], [0.0, 1.0, 1.0, 1.0], [0.4, 0.587, 0.114, 0.0]];
		_pp ppEffectCommit 2;

		if (vehicle player == player) exitWith {};
		sleep 3;
	};

	player setVariable ["dzn_VOF_ppSmokeAssigned", false];
	_pp ppEffectAdjust [1.0, 1.0, 0.0, [0, 0, 0, 0], [0.0, 1.0, 1.0, 1.0], [0.4, 0.587, 0.114, 0.0]];
	_pp ppEffectCommit 2;
	sleep 3;

	ppEffectDestroy _pp;
};
