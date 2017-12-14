// CBA Settings
#define		TITLE		"tS ACE Cookoff Jammer"
#define		SETNAME(X)	format["tS_ACE_Cookoff_Jammer_%1", X]


[SETNAME("Enabled"), "CHECKBOX", "Enabled", TITLE, true, true] call CBA_Settings_fnc_init;

[SETNAME("TimeoutMin"), "SLIDER", ["Burning out timeout (min)", "Disabled if > then Max"], TITLE, [5, 240, 45, 0], true
	, {
		if (_this <= (tS_ACE_Cookoff_Jammer_timeoutRange select 1)) then {
			tS_ACE_Cookoff_Jammer_timeoutRange = [_this, tS_ACE_Cookoff_Jammer_timeoutRange select 1];
		};
	}
] call CBA_Settings_fnc_init;
[SETNAME("TimeoutMax"), "SLIDER", ["Burning out timeout (min)", "Disabled if < then Min"], TITLE, [5, 240, 45, 0], true
	, {
		if ((tS_ACE_Cookoff_Jammer_timeoutRange select 0) <= _this) then {
			tS_ACE_Cookoff_Jammer_timeoutRange = [tS_ACE_Cookoff_Jammer_timeoutRange select 0, _this];
		};
	}
] call CBA_Settings_fnc_init;

[SETNAME("NonCookingList"), "EDITBOX", ["Non-cooking off vehicles", "APC vehicles that should not cookoff"], TITLE
	, str(tS_ACE_Cookoff_Jammer_nonCookingVehicles), true
	, { tS_ACE_Cookoff_Jammer_nonCookingVehicles = call compile _this; }
] call CBA_Settings_fnc_init;
[SETNAME("CookingList"), "EDITBOX", ["Cooking off vehicles", "APCs of the same family as non-cooking off ones that can cookoff (e.g. BTR-82A)"], TITLE
	, str(tS_ACE_Cookoff_Jammer_CookingVehicles), true
	, { tS_ACE_Cookoff_Jammer_CookingVehicles = call compile _this; }
] call CBA_Settings_fnc_init;

