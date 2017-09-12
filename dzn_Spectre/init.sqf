[] spawn {	
	dzn_fnc_spectre_k6_3_switchVisor = {
		private _h = headgear player;		
		if !(_h in ["H_Titan_Helmet", "H_Titan_Helmet_O"]) exitWith {};	
		
		removeHeadgear player;
		if (_h == "H_Titan_Helmet") then {
			player addHeadgear "H_Titan_Helmet_O";
		} else {
			player addHeadgear "H_Titan_Helmet";			
		};		
	};

	private _action_Close = [
		"dzn_spectre_k6_3_action_close"
		, "Close helmet visor"
		, ""
		, {call dzn_fnc_spectre_k6_3_switchVisor}
		, { (headgear player) == "H_Titan_Helmet_O" }
	] call ace_interact_menu_fnc_createAction;	
	[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_Close] call ace_interact_menu_fnc_addActionToClass;
	
	private _action_Open = [
		"dzn_spectre_k6_3_action_open"
		, "Open helmet visor"
		, ""
		, {call dzn_fnc_spectre_k6_3_switchVisor}
		, { (headgear player) == "H_Titan_Helmet" }
	] call ace_interact_menu_fnc_createAction;
	[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_Open] call ace_interact_menu_fnc_addActionToClass;	
};