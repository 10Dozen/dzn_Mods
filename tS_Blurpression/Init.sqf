if !(hasInterface) exitWith {};

// Settings
["dzn_blurpress_Enabled", "CHECKBOX", "Enabled", "tS Blurpression", true, true] call CBA_Settings_fnc_init;
["dzn_blurpress_Radius", "SLIDER", "Radius affected", "tS Blurpression", [1, 25, 5, 0], true] call CBA_Settings_fnc_init;
dzn_blurpress_renew = true;

// Functions
dzn_fnc_blurpress_supressEffect = {
	dzn_blurpress_EffectID = round(random(100));
	
	if (dzn_blurpress_renew) then {		
		dzn_blurpress_PP_blur = ppEffectCreate ["RadialBlur", 100];
		dzn_blurpress_PP_blur ppEffectEnable true;
		dzn_blurpress_PP_blur ppEffectForceInNVG true;
		dzn_blurpress_PP_blur ppEffectAdjust [0.05, 0.05, 0.35, 0.35];
		dzn_blurpress_PP_blur ppEffectCommit 1;
		dzn_blurpress_renew = false;		
	} else {
		dzn_blurpress_PP_blur ppEffectAdjust [0.05, 0.05, 0.25, 0.25];
		dzn_blurpress_PP_blur ppEffectCommit 0.2;	
	};
	
	private _effectLastID = dzn_blurpress_EffectID;	
	
	sleep 1.5;
	if (_effectLastID == dzn_blurpress_EffectID) then {
		dzn_blurpress_PP_blur ppEffectAdjust [0.05, 0.05, 0.35, 0.35];
		dzn_blurpress_PP_blur ppEffectCommit 0.5;	
	};	
	sleep 0.8;
	
	// When ID was changed, it means function was called during the timeout, so we shouldn't delete effect now;
	if (_effectLastID == dzn_blurpress_EffectID) then {
		private _PP_Id = dzn_blurpress_PP_blur;
		ppEffectDestroy _PP_Id; 
		dzn_blurpress_renew = true;
	};
};

// Init
[] spawn {
	dzn_blurpress_latestRounds = [];
	player addEventHandler ["Fired", {
		if (count dzn_blurpress_latestRounds > 10) then {
			for "_i" from 0 to 4 do { dzn_blurpress_latestRounds deleteAt 0; };
		};
		
		dzn_blurpress_latestRounds pushBack (_this select 6);
	}];

	while { true } do {
		if (!dzn_blurpress_Enabled) exitWith {};
		
		if (
			( { 
				_x isKindOf "BulletBase"
				&& { !(_x in dzn_blurpress_latestRounds) }
			} count (nearestObjects [(getPos player), [], dzn_blurpress_Radius])) > 0
		) then {
			[] spawn dzn_fnc_blurpress_supressEffect;
		};
	};
};
