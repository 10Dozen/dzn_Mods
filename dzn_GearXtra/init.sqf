dzn_gx_helmetsWithVisors = [
	["H_Titan_Helmet_O","H_Titan_Helmet"]
	,["%RHS_Altyn_O%", "%RHS_Altyn%"] // PLACEHOLDERS!!!

];

dzn_fnc_gx_checkHelmetWithVisorOpened = {
	private _id = if (_this) then { 0 } else { 1 };
	private _h = headgear player;
	
	!((dzn_gx_helmetsWithVisors select { _h == (_x select _id) }) isEqualTo [])
};

dzn_fnc_gx_helmet_switchVisor = {
	private _h = headgear player;
	private _hToReplace = dzn_gx_helmetsWithVisors select { _h in _x }; // [ ["H_Titan_Helmet_O","H_Titan_Helmet"] ]
	
	if (_hToReplace isEqualTo []) exitWith {};
	
	_hToReplace = ([] + (_hToReplace select 0) - [_h]) select 0; 
			
	removeHeadgear player;
	player addHeadgear _hToReplace select 0;
};
	
[] spawn {
	private _action_Close = [
		"dzn_gx_action_closeVisor"
		, "Close helmet visor"
		, ""
		, { call dzn_fnc_gx_helmet_switchVisor }
		, { true call dzn_fnc_gx_checkHelmetWithVisorOpened }
	] call ace_interact_menu_fnc_createAction;	
	
	
	private _action_Open = [
		"dzn_gx_action_openVisor"
		, "Open helmet visor"
		, ""
		, { call dzn_fnc_gx_helmet_switchVisor }
		, { false call dzn_fnc_gx_checkHelmetWithVisorOpened }
	] call ace_interact_menu_fnc_createAction;
	
	[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_Close] call ace_interact_menu_fnc_addActionToClass;
	[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_Open] call ace_interact_menu_fnc_addActionToClass;	
};
