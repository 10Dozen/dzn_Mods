#define		TITLE		"dzn Multi-mod Magazine Repack"
#define		SETNAME(X)	format["dzn_MMR_%1", X]

// Addon Settings
[
	SETNAME("EnabledNote")
	, "CHECKBOX"
	, ["Enable as Note", "Add topic at briefing screen with button. Restart is needed."] /* ["Enabled", "Restart is needed"] */
	, TITLE
	, true
	, true
] call CBA_Settings_fnc_init;

[
	SETNAME("EnabledHotekey")
	, "CHECKBOX"
	, ["Enable as Hotkey", "Enables usage of the assigned hotkey"] /* ["Enabled", "Restart is needed"] */
	, TITLE
	, true
	, true
] call CBA_Settings_fnc_init;

[
	SETNAME("EnabledACEAction")
	, "CHECKBOX"
	, ["Enable as ACE Self-interaction", "Adds ACE Self-Interaction action"] /* ["Enabled", "Restart is needed"] */
	, TITLE
	, true
	, true
] call CBA_Settings_fnc_init;

[
	SETNAME("Mapping")
	, "EDITBOX"
	, ["Magazines Mapping",  "Mapping of the magazine classes to it's conversion options, in format [@MagazineClassToCovert, @MagazineClass1, @MagazineClass2, ..., @@MagazineClassN]"]   /* ["Non-cooking off vehicles", "Vehicles that should not cookoff, in format [@Class, @StructuralDamage], e.g. ['CUP_btr_base', 15]"] */
	, TITLE
	, str(dzn_MMR_Map) select [1, count str(dzn_MMR_Map) -2]
	, true
	, {
	    dzn_MMR_Map = call compile format ["[%1]", _this];
	}
] call CBA_Settings_fnc_init;

[
	SETNAME("Mapping2")
	, "EDITBOX"
	, ["Magazines Mapping (Additional)",  "Additional field for mapping"]   /* ["Non-cooking off vehicles", "Vehicles that should not cookoff, in format [@Class, @StructuralDamage], e.g. ['CUP_btr_base', 15]"] */
	, TITLE
	, ""
	, true
	, {
	    dzn_MMR_Map = dzn_MMR_Map + call compile format ["[%1]", _this];
	}
] call CBA_Settings_fnc_init;

// Keybinding
[
	TITLE
	,"dzn_mmr_actionKey"
	, "Repack magazines"
	, { 
		if (!dzn_MMR_EnabledHotekey) exitWith {}; 
		call dzn_MMR_fnc_Action;
	}
	, {}
] call CBA_fnc_addKeybind;