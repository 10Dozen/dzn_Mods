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
					if (
						_damage > 0.9 
						&& !(_vehicle getVariable ["ace_cookoff_infire",false])
					) then {
						_vehicle call ace_cookoff_fnc_engineFire;
						_vehicle setVariable ["ace_cookoff_infire", true, true];
						_vehicle setVariable ["ace_cookoff_fireStarted", time, true];
						_vehicle spawn {
							private _timeout = floor random tS_ACE_Cookoff_Jammer_timeoutRange;
							
							private _crew = crew _this;
							{
								if !(isPlayer _x) then {
									(group _x) leaveVehicle _this;
									moveOut _x;
								};
								
								_x doMove (_this getPos [random (360), 75]);								
							} forEach _crew;
							
							waitUntil {
								sleep 1; 
								(_this getVariable "ace_cookoff_fireStarted") + _timeout < time
							};
							
							_this setDamage 1;				
						};
					};
					
					_damage
				};
				
				case "hithull";
				case "#structural": {
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



tS_ACE_Cookoff_Jammer_fnc_setEffectFire = {
	params[
		"_obj"
		, ["_attachPoint", [0,0,0]]
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

	[_emitter, _light, 30] spawn {
		params["_emitter","_light","_timeout"];
		
		Plog pushBack ["Timeout", _this];
		
		sleep _timeout;
		deleteVehicle _emitter;
		deleteVehicle _light;
	};
};
