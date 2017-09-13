
dzn_gx_helmetsWithVisors = [
	["H_Titan_Helmet_O","H_Titan_Helmet"]
	,["rhs_altyn", "rhs_altyn_visordown"] 
	,["rhs_altyn_bala", "rhs_altyn_visordown"] 

];

dzn_fnc_gx_checkHelmetWithVisorOpened = {
	private _id = if (_this) then { 0 } else { 1 };
	private _h = headgear player;
	
	!((dzn_gx_helmetsWithVisors select { _h == (_x select _id) }) isEqualTo [])
};

dzn_fnc_gx_helmet_switchVisor = {
	private _h = headgear player;
	private _hToReplace = "";
	if (
		!isNil {player getVariable "dzn_gx_helmet"}
		&& { player getVariable "dzn_gx_helmet" == _h }
	)
		then {
		_hToReplace = player getVariable "dzn_gx_lastHelmet";
	} else {
		_hToReplace = ([] + ((dzn_gx_helmetsWithVisors select { _h in _x }) select 0) - [_h]) select 0;	
	};
	
	removeHeadgear player;
	player addHeadgear _hToReplace select 0;
	
	player setVariable ["dzn_gx_lastHelmet", _h];
	player setVariable ["dzn_gx_helmet", _hToReplace];
};
	
[] spawn {
	private _action_Close = [
		"dzn_gx_action_closeVisor"
		, "Close helmet visor"
		, ""
		, { hintSilent "Helmet visor closed"; call dzn_fnc_gx_helmet_switchVisor }
		, { true call dzn_fnc_gx_checkHelmetWithVisorOpened }
	] call ace_interact_menu_fnc_createAction;	
	
	
	private _action_Open = [
		"dzn_gx_action_openVisor"
		, "Open helmet visor"
		, ""
		, { hintSilent "Helmet visor opened"; call dzn_fnc_gx_helmet_switchVisor }
		, { false call dzn_fnc_gx_checkHelmetWithVisorOpened }
	] call ace_interact_menu_fnc_createAction;
	
	[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_Close] call ace_interact_menu_fnc_addActionToClass;
	[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_Open] call ace_interact_menu_fnc_addActionToClass;	
};


/*
dzn_fnc_gx_switchESS = {
	if (headgear player == "rhs_altyn_novisor_ess") then {
		removeHeadgear player;
		player addHeadgear "rhs_altyn_novisor";
		player addGoggles "TRYK_US_ESS_Glasses";
	} else {
		removeHeadgear player;
		removeGoggles player;
		player addHeadgear "rhs_altyn_novisor_ess";
	};
	


};
*/
