// Functions

tS_ACE_Cookoff_Jammer_fnc_addDamageHandler = {
	_this addEventHandler [
		"HandleDamage"
		, {
			params ["_vehicle", "", "_damage", "_source", "_ammo", "_hitIndex", "_shooter", "_hitpoint"];
			if (damage _vehicle >= 1) exitWith {};

			if (_hitIndex == -1) then { _hitpoint = "#structural"; };

			switch toLower(_hitpoint) do {
				case "hitengine";
				case "hitfuel": {
					[_vehicle,_damage] call tS_ACE_Cookoff_Jammer_fnc_setOnFire;
					_damage
				};

				case "hithull";
				case "#structural": {
					private _structuralDamage = _damage + (_vehicle getVariable "ace_cookoff_overallStructuralDamage");

					_vehicle setVariable [
						"ace_cookoff_overallStructuralDamage"
						, _structuralDamage
						, true
					];

					if (_structuralDamage > (_vehicle getVariable "ace_cookoff_structuralDamageMax")) then {
						// _vehicle setDamage 1;
						_vehicle call tS_ACE_Cookoff_Jammer_fnc_setDisabled;
					};

					_damage min 0.89
				};

				default {
					// _vehicle setHitPointDamage [_hitpoint, _damage];
					_damage
				};
			}
		}
	];
};

tS_ACE_Cookoff_Jammer_fnc_setDisabled = {
    // Make unit disabled (to simulate hull/transmission destruction)
	private _vehicle = _this;

	if (_vehicle getVariable ["ace_cookoff_disabled", false]) exitWith {};

	_vehicle setFuel 0.00001;
	_vehicle setVariable ["ace_cookoff_disabled", true, true];

	[_vehicle, 50] spawn tS_ACE_Cookoff_Jammer_fnc_leaveVehicle;
	[_vehicle, 5, "disabled"] spawn tS_ACE_Cookoff_Jammer_fnc_informPlayers;
};

tS_fnc_log = {
    params["_thread", "_msg", ["_params",[]], ["_restart", false]];
    if (isNil "OnFireThread" || _restart) then {
        OnFireThread = [time];
    };

    OnFireThread pushBack format ["%1 (+%2) [%3] %4 //Params: %5", time, time - (OnFireThread select 0), _thread, _msg, _params];
};

tS_ACE_Cookoff_Jammer_fnc_setOnFire = {
    // Check unit damage to Engine/Fuel and start fire on vehicle
	params ["_vehicle", "_damage"];

	if (
		(
			_damage > 0.9
			|| _vehicle getHitPointDamage "HitFuel" > 0.9
			|| _vehicle getHitPointDamage "HitEngine" > 0.9
		)
		&& !(_vehicle getVariable ["ace_cookoff_infire",false])
	) then {
		_vehicle setVariable ["ace_cookoff_infire", true, true];
		_vehicle setVariable ["ace_cookoff_fireStarted", time, true];
		_vehicle setVariable ["ace_cookoff_allowCrewDamage", false, true];
		[_vehicle] spawn tS_ACE_Cookoff_Jammer_fnc_damageCrewLoop;

		private _timeout = floor random tS_ACE_Cookoff_Jammer_timeoutRange;

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

        ["Main", "Initialized", [time, _timeout, time+_timeout]] call tS_fnc_log;
		// Thread to spawn visual Fire effect
		[_vehicle, _timeout] spawn {
			params["_v","_t"];
			["Fire_Effect", "Started w. ", _this] call tS_fnc_log;

			private _pos = _v modelToWorld (
				(["motor","engine"] apply { _v selectionPosition _x }) select { !(_x isEqualTo [0,0,0]) } select 0
			);
			_pos = _v worldToModel [_pos select 0, _pos select 1, 1 min (_pos select 2)];

			// If engine and fuel are separeted - flame will come to fueltank. If not - flame will move to [0,0,0] of the model
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

            ["Fire_Effect", "Loop start // Path ->", _path] call tS_fnc_log;

			private _soundSource = createSoundSource ["Sound_Fire", _v, [], 0];
			{
				sleep (_x select 1);
				["Fire_Effect", "Loop, particle added after timeout", [_x select 1]] call tS_fnc_log;

				if (_forEachIndex != 0) then {
					private _p = _path select (_forEachIndex - 1);
					[
						_v, _p select 0, _t - (_p select 1)
						, [0.5,0.5,0.5], [2, 20, 2, 1, 2, 5.4]
					] call tS_ACE_Cookoff_Jammer_fnc_setEffectFire;
				};

				[_v, _x select 0, _t - (_x select 1)] call tS_ACE_Cookoff_Jammer_fnc_setEffectFire;

				if ((_forEachIndex + 1) == count _path) then {
					sleep (_t);
					deleteVehicle _soundSource;
				};
			} forEach _path;

			["Fire_Effect", "Done"] call tS_fnc_log;
		};

		// Thread to Destroy vehicle
		[_vehicle, _timeout] spawn {
			params["_v","_t"];
			["Destroy", "Started w.", _this] call tS_fnc_log;

			sleep (_t/2);
			if !(_v getVariable "ace_cookoff_allowCrewDamage") then { _v setVariable ["ace_cookoff_allowCrewDamage", true, true]; };

            ["Destroy", "Damage to crew allowed after", [_t/2]] call tS_fnc_log;

			sleep (_t/2);
			[_v, [0,0,-1.25], 240, [0.5,0.5,0.5], [4, 20, 4, 1, 4, 5.4]] call tS_ACE_Cookoff_Jammer_fnc_setEffectFire;

             ["Destroy", "Fire effect after", [_t/2]] call tS_fnc_log;

			sleep 5;
			_v setDamage 1;
			_v setDamage 0;
			_v setDamage 1;

			 ["Destroy", "Wreck. Thread done"] call tS_fnc_log;
		};

		// Thread to manage crew
		[_vehicle, _timeout] spawn {
			params["_v","_t"];
			["Crew", "started w.", _this] call tS_fnc_log;

            // Inform crew after 0.5T
			[_v, _t/2, "fire"] spawn tS_ACE_Cookoff_Jammer_fnc_informPlayers;
			["Crew", "Notification thread started with timeout", [_t/2]] call tS_fnc_log;

            // Disembark AI crew after 0.25T
            sleep (0.25*_t);
			[_v, 75] spawn tS_ACE_Cookoff_Jammer_fnc_leaveVehicle;
			["Crew", " Leave vehicle for AI after", [0.25*_t]] call tS_fnc_log;

            // Start PP effects for player crew after 0.33T
			sleep (0.33*_t - 0.25*_t);
			["Crew", " Smoke PP effect after", [0.33*_t - 0.25*_t]] call tS_fnc_log;
            _v spawn {
                private _v = _this;
                while {alive _v} do {
                    sleep 1;
                    {
                        [] remoteExec ["tS_ACE_Cookoff_Jammer_fnc_showCrewSmokeEffect", _x];
                    } forEach ((crew _v) select { isPlayer _x && !(_x getVariable ["ace_cookoff_ppSmokeAssigned",false]) });
                };
            };
            ["Crew", "Done"] call tS_fnc_log;
		};
	};
};

tS_ACE_Cookoff_Jammer_fnc_leaveVehicle = {
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

tS_ACE_Cookoff_Jammer_fnc_informPlayers = {
	// Shows hint to inform crew about fire/vehicle disabled
	params["_v","_t","_reason"];
	private _text = "";
	private _sound = "";
	switch _reason do {
		case "fire": {
			_text = parseText "<t color='#ff0000' size='2'>ПОЖАР!</t>";
			_sound = "Fire";
		};
		case "disabled": {
			_text = parseText "<t color='#eeee00' size='1.5'>ПОЛОМКА ТРАНСМИССИИ!</t>";
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

tS_ACE_Cookoff_Jammer_fnc_damageCrewLoop = {
	params["_v",["_damage", 0.05], ["_loopTime",1]];

	waitUntil { _v getVariable ["ace_cookoff_allowCrewDamage", false] };
	while { alive _v } do {
		sleep _loopTime;

		if (isNil "ace_medical_fnc_addDamageToUnit") then {
			{ _x setDamage ((damage _v)+_damage) } forEach (crew _v);
		} else {
			{ [_x, _damage, selectRandom ["head", "body", "hand_l", "hand_r", "leg_l", "leg_r"]] call ace_medical_fnc_addDamageToUnit } forEach (crew _v);
		}
	};
};

tS_ACE_Cookoff_Jammer_fnc_setEffectFire = {
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

tS_ACE_Cookoff_Jammer_fnc_showCrewSmokeEffect = {
	if (vehicle player == player || player getVariable ["ace_cookoff_ppSmokeAssigned", false]) exitWith {};
	private _v = vehicle player;
	private _pp = ppEffectCreate ["colorCorrections", 1501];
	private _c = 0;

	player setVariable ["ace_cookoff_ppSmokeAssigned", true];

	while { _v != player && alive player } do {
		_c = (floor random(50))/100;
		_pp ppEffectEnable true;
		_pp ppEffectAdjust [1.0, 1.0, 0.0, [_c, _c, _c, 0.6], [0.0, 1.0, 1.0, 1.0], [0.4, 0.587, 0.114, 0.0]];
		_pp ppEffectCommit 2;

		if (vehicle player == player) exitWith {};
		sleep 3;
	};

	player setVariable ["ace_cookoff_ppSmokeAssigned", false];
	_pp ppEffectAdjust [1.0, 1.0, 0.0, [0, 0, 0, 0], [0.0, 1.0, 1.0, 1.0], [0.4, 0.587, 0.114, 0.0]];
	_pp ppEffectCommit 2;
	sleep 3;

	ppEffectDestroy _pp;
};

