// CBA Settings
#define		TITLE		"tS ACE Cookoff Jammer"
#define		SETNAME(X)	format["tS_ACE_Cookoff_Jammer_%1", X]


[
	SETNAME("Enabled")
	, "CHECKBOX"
	, ["Enabled", "Restart is needed"]
	, TITLE
	, true
	, true
] call CBA_Settings_fnc_init;

[
	SETNAME("TimeoutMin")
	, "SLIDER"
	, ["Burning out timeout (min)", "Disabled if > then Max"]
	, TITLE
	, [5, 240, tS_ACE_Cookoff_Jammer_timeoutRange select 0, 0]
	, true
	, {
		if (_this <= (tS_ACE_Cookoff_Jammer_timeoutRange select 2)) then {
			tS_ACE_Cookoff_Jammer_timeoutRange = [
				_this
				, floor( (_this + (tS_ACE_Cookoff_Jammer_timeoutRange select 2))/2 )
				, tS_ACE_Cookoff_Jammer_timeoutRange select 2
			];
		};
	}
] call CBA_Settings_fnc_init;
[
	SETNAME("TimeoutMax")
	, "SLIDER"
	, ["Burning out timeout (min)", "Disabled if < then Min"]
	, TITLE
	, [5, 240, tS_ACE_Cookoff_Jammer_timeoutRange select 2, 0]
	, true
	, {
		if ((tS_ACE_Cookoff_Jammer_timeoutRange select 0) <= _this) then {
			tS_ACE_Cookoff_Jammer_timeoutRange = [
				tS_ACE_Cookoff_Jammer_timeoutRange select 0
				, floor( ((tS_ACE_Cookoff_Jammer_timeoutRange select 0) + _this)/2 )
				, _this
			];
		};
	}
] call CBA_Settings_fnc_init;

[
	SETNAME("NonCookingList")
	, "EDITBOX"
	, ["Non-cooking off vehicles", "APC vehicles that should not cookoff"]
	, TITLE
	, tS_ACE_Cookoff_Jammer_nonCookingVehicles joinString ", "
	, true
	, { tS_ACE_Cookoff_Jammer_nonCookingVehicles = _this splitString ", "; }
] call CBA_Settings_fnc_init;

[
	SETNAME("CookingList")
	, "EDITBOX"
	, ["Cooking off vehicles", "APCs of the same family as non-cooking off ones that can cookoff (e.g. BTR-82A)"]
	, TITLE
	, tS_ACE_Cookoff_Jammer_cookingVehicles joinString ", "
	, true
	, { tS_ACE_Cookoff_Jammer_cookingVehicles = _this splitString ", "; }
] call CBA_Settings_fnc_init;
