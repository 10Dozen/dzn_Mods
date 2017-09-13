if !(hasInterface) exitWith {};

// Settings
["dzn_blurpress_Enabled", "CHECKBOX", "Enabled", "tS Blurpression", true, true] call CBA_Settings_fnc_init;
["dzn_blurpress_Radius", "SLIDER", "Radius affected", "tS Blurpression", [1, 25, 5, 0], true] call CBA_Settings_fnc_init;

// Functions
dzn_fnc_blurpress_supressEffect = {
	dzn_blurpress_EffectID = round(random(100));
	
	if (isNil "dzn_blurpress_PP_blur") then {
		dzn_blurpress_PP_blur = ppEffectCreate ["RadialBlur", 100];
		dzn_blurpress_PP_blur ppEffectEnable true;
		dzn_blurpress_PP_blur ppEffectForceInNVG true;
	};
   	dzn_blurpress_PP_blur ppEffectAdjust [0.05, 0.05, 0.35, 0.35];
   	dzn_blurpress_PP_blur ppEffectCommit 1;

	dzn_blurpress_EffectLastID = dzn_blurpress_EffectID;
	
	sleep 2;
	// When ID was changed, it means function was called during the timeout, so we shouldn't delete effect now;
	if (dzn_blurpress_EffectLastID == dzn_blurpress_EffectID) then {
		ppEffectDestroy PP_blur;  
	};
};

// Init 
[] spawn {
	while { true } do {
		if (!dzn_blurpress_Enabled) exitWith {};
		sleep 0.01;
		
		if (
			( count (nearestObjects [(getPos player), ["BulletBase"], dzn_blurpress_Radius]) ) > 0
		) then {
			[] spawn dzn_fnc_blurpress_supressEffect;
		};
	};
};
