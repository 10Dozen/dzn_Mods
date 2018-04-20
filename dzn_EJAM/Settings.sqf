#define		TITLE		"dzn Extended Jamming"
#define		SETNAME(X)	format["dzn_EJAM_%1", X]

// Addon Settings
[
	SETNAME("handleMag")
	, "CHECKBOX"
	, ["Handle Magazine detachment", "Handles magazine detachement on weapon in game"]
	, TITLE
	, true
	, true
] call CBA_Settings_fnc_init;


// Keybinding
[
	TITLE
	,"dzn_ejam_actionKey"
	, "Inspect weapon"
	, { [] spawn dzn_EJAM_fnc_ShowUnjamMenu;	}
	, {}
] call CBA_fnc_addKeybind;