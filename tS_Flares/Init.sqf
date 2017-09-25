
// Settings
["dzn_flares_mortar_enabled", "CHECKBOX", "Enabled for Mortars", "tS Flares", true, true] call CBA_Settings_fnc_init;
["dzn_flares_mortar_intensity", "SLIDER", "[Mortar] Intensity", "tS Flares", [1, 100, 25, 0], true] call CBA_Settings_fnc_init;
["dzn_flares_mortar_range", "SLIDER", "[Mortar] Range (m)", "tS Flares", [100, 1500, 400, 0], true] call CBA_Settings_fnc_init;
["dzn_flares_mortar_intensityDeviation", "SLIDER", "[Mortar] Intensity deviation %", "tS Flares", [0, 100, 10, 0], true] call CBA_Settings_fnc_init;

["dzn_flares_howitzer_enabled", "CHECKBOX", "Enabled for Howitzers", "tS Flares", true, true] call CBA_Settings_fnc_init;
["dzn_flares_howitzer_intensity", "SLIDER", "[Howitzer] Intensity", "tS Flares", [1, 100, 25, 0], true] call CBA_Settings_fnc_init;
["dzn_flares_howitzer_range", "SLIDER"	, "[Howitzer] Range (m)", "tS Flares", [100, 1500, 600, 0], true] call CBA_Settings_fnc_init;
["dzn_flares_howitzer_intensityDeviation", "SLIDER", "[Howitzer] Intensity deviation %", "tS Flares", [0, 100, 10, 0], true] call CBA_Settings_fnc_init;

// ["dzn_flares_debug", "CHECKBOX", "[DEBUG] Enabled", "tS Flares", false, false] call CBA_Settings_fnc_init;

// Functions
dzn_fnc_flares_setFlareEffectGlobal = {
	params["_eh", "_type"];
	
	private _shell = _eh select 5;
	
	if !(_shell isKindOf "FlareCore") exitWith {};

	[[_shell, _type], "dzn_fnc_flare_setFlareEffect", true, true] spawn BIS_fnc_MP;
};

dzn_fnc_flare_setFlareEffect = {
	params["_o","_type"];

	private _enabled = false;
	private _color = [1,1,1];
	private _range = 0;
	private _intensity = 0;
	private _deviation = 0;
	
	switch toLower(_type) do {
		case "mortar": {
			_enabled = dzn_flares_mortar_enabled;
			_color = [1,1,1];
			_range = dzn_flares_mortar_range;
			_intensity = dzn_flares_mortar_intensity;
			_deviation = dzn_flares_mortar_intensityDeviation;
		};
		case "howitzer": {
			_enabled = dzn_flares_howitzer_enabled;
			_color = [1,1,1];
			_range = dzn_flares_howitzer_range;
			_intensity = dzn_flares_howitzer_intensity;
			_deviation = dzn_flares_howitzer_intensityDeviation;
		};
	};
	
	if !(_enabled) exitWith {};
	
	waitUntil { velocity _o select 2 < 0 };
	waitUntil { sleep 1; getPos _o select 2 < 240 };
	
	private _flare = "#lightpoint" createVehicleLocal (getPosVisual _o);
	_flare setLightAmbient _color;  
	_flare setLightColor _color;
	_flare setLightIntensity _intensity;
	_flare setLightUseFlare true;
	_flare setLightAttenuation [_range, 1, 100, 0, 50, (_range - 10)]; 
	_flare setLightDayLight false;
	_flare attachTo [_o, [0,0,0]];
	
	private _h = getPos _o select 2;
	_range = _range / 2 / 240;

	while { _h > 1  } do {
		// if (dzn_flares_debug) then { hint format ["H: %1 , R: %2", _h, 2*_h*_range]; };

		sleep ((random 0.01) + 0.05);
		_flare setLightIntensity (_intensity + random (_intensity*_deviation/100));
		_flare setLightAttenuation [2.5*_h*_range, 1, 0, 4.31918e-005, 50, 2.5*_h*_range + 50]; 
		
		_h = getPos _o select 2;
		if (_h <= 1) exitWith { deleteVehicle _flare; };
	};
	
	deleteVehicle _flare;
};
