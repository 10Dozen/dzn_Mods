
// Settings
["dzn_flares_mortar_enabled", "CHECKBOX", "Enabled for Mortars", "tS Flares", true, true] call CBA_Settings_fnc_init;
["dzn_flares_mortar_intensity", "SLIDER", "[Mortar] Intensity", "tS Flares", [1, 100, 25, 0], true] call CBA_Settings_fnc_init;
["dzn_flares_mortar_range", "SLIDER", "[Mortar] Range (m)", "tS Flares", [100, 1500, 400, 0], true] call CBA_Settings_fnc_init;
["dzn_flares_mortar_intensityDeviation", "SLIDER", "[Mortar] Intensity deviation %", "tS Flares", [0, 100, 10, 0], true] call CBA_Settings_fnc_init;

["dzn_flares_howitzer_enabled", "CHECKBOX", "Enabled for Howitzers", "tS Flares", true, true] call CBA_Settings_fnc_init;
["dzn_flares_howitzer_intensity", "SLIDER", "[Howitzer] Intensity", "tS Flares", [1, 100, 25, 0], true] call CBA_Settings_fnc_init;
["dzn_flares_howitzer_range", "SLIDER"	, "[Howitzer] Range (m)", "tS Flares", [100, 1500, 600, 0], true] call CBA_Settings_fnc_init;
["dzn_flares_howitzer_intensityDeviation", "SLIDER", "[Howitzer] Intensity deviation %", "tS Flares", [0, 100, 10, 0], true] call CBA_Settings_fnc_init;


// Functions
dzn_fnc_setFlareEffectGlobal = {
	_this remoteExec ["dzn_fnc_setFlareEffect", 0];
};

dzn_fnc_setFlareEffect = {
	params["_o","_type"];
	
	private _color = [1,1,1];
	private _range = 0;
	private _intensity = 0;
	private _enabled = false;
	
	switch toLower(_type) do {
		case "mortar": {
			_color = [1,1,1];
			_range = dzn_flares_mortar_range;
			_intensity = dzn_flares_mortar_intensity;
			_deviation = dzn_flares_mortar_intensityDeviation;
			_enabled = dzn_flares_mortar_enabled;
		};
		case "howitzer": {
			_color = [1,1,1];
			_range = dzn_flares_howitzer_range;
			_intensity = dzn_flares_howitzer_intensity;
			_deviation = dzn_flares_howitzer_intensityDeviation;
			_enabled = dzn_flares_howitzer_enabled;
		}
	};
	
	if !(_enabled) exitWith {};
	
	waitUntil { getPos _o select 2 > 240 };	
	waitUntil { sleep 1; getPos _o select 2 < 240 };
	
	private _flare = "#lightpoint" createVehicleLocal (getPosVisual _o);  	
	_flare setLightAmbient _color;  
	_flare setLightColor _color;
	_flare setLightIntensity _intensity;
	_flare setLightUseFlare false;
	_flare setLightAttenuation [_range, 1, 100, 0, 50, (_range - 10)]; 
	_flare setLightDayLight false;

	_flare attachTo [_o, [0,0,0]];
	
	while { !isNull _o } do {
		sleep ((random 0.01) + 0.05);
		_flare setLightIntensity (_intensity + random (_intensity*_deviation/100));
		_flare setLightAttenuation [_range, 1, 100, 0, 50, (_range - 10)];
	};
	
	deleteVehicle _flare;
};

// this addEventHandler ["Fired",{ [_this select 6, 'mortar'] spawn dzn_fnc_setFlareEffect; }];
