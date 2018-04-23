/*
 *	Individual & Squad Rallypoint
 *
 *	Player will be able to place rallypoint and then teleport to it position.
 *	If player's squad leader set rallypoint - player can also teleport to group leader's rallypoint
*/

dzn_CG_RallyPointClass = "Misc_Backpackheap";

dzn_CG_fnc_moveToRallypoint = {
	private _pos = if (_this) then {
		player getVariable ["dzn_CG_RallypointPosition", [0,0,0]];
	} else {
		(leader group player) getVariable ["dzn_CG_RallypointPosition", [0,0,0]];
	};
	
	if (_pos isEqualTo [0,0,0]) exitWith {
		hint parseText format ["<t size='1.5' color='#FFD000' shadow='1'>Rallypoint</t>
			<br /><br />%1 rallypoint is NOT AVAILABLE"
			, if (_this) then { "My" } else { "Squad" }
		];
	};
	
	1000 cutText ["Re-deploying","BLACK OUT",1];
	player allowDamage false;
	sleep 2; 
	moveOut player;
	player setVelocity [0,0,0];
	player setPos _pos;
	player allowDamage true; 
	1000 cutText ["Re-deploying","BLACK IN",1];
};

dzn_CG_fnc_setRallypoint = {
	private _pos = getPos player;
	player setVariable ["dzn_CG_RallypointPosition", _pos, true];
	
	if ( isNull (player getVariable ["dzn_CG_Rallypoint", objNull]) ) then {
		player setVariable ["dzn_CG_Rallypoint", dzn_CG_RallyPointClass createVehicle _pos];
		
		createMarkerLocal ["dzn_CG_RallypointMrk", _pos];
		"dzn_CG_RallypointMrk" setMarkerShape "ICON";
		"dzn_CG_RallypointMrk" setMarkerTypeLocal "mil_pickup";
		"dzn_CG_RallypointMrk" setMarkerAlphaLocal 0.5;
		"dzn_CG_RallypointMrk" setMarkerColorLocal "ColorUNKNOWN";
		"dzn_CG_RallypointMrk" setMarkerTextLocal "Rallypoint";
	} else {
		(player getVariable "dzn_CG_Rallypoint") setPos _pos;
		"dzn_CG_RallypointMrk" setMarkerPos _pos;
	};
	
	hint parseText format ["<t size='1.5' color='#FFD000' shadow='1'>Rallypoint</t>
		<br /><br />Set at grid %1"
		, mapGridPosition _pos
	];
};

dzn_CG_fnc_isRallypointExist = {
	[
		!(player getVariable ["dzn_CG_RallypointPosition", []] isEqualTo [])
		,!((leader group player) getVariable ["dzn_CG_RallypointPosition", []] isEqualTo [])
	]
};


[] spawn {
	waitUntil { time > 5 };
	
	// Adding ACE actions if ACE running
	if (!isNil "ace_interact_menu_fnc_addActionToClass") then {
		[typeof player,1,["ACE_SelfActions"], [
			"dzn_CG_RallypointNode"
			, "Rallypoint", "", {}, {}
		] call ace_interact_menu_fnc_createAction] call ace_interact_menu_fnc_addActionToClass;
		
		[typeof player,1,["ACE_SelfActions","dzn_CG_RallypointNode"], [
			"dzn_CG_SetRallypointNode"
			, "Set Rallypoint", ""
			, { call dzn_CG_fnc_setRallypoint }
			, { true }
		] call ace_interact_menu_fnc_createAction] call ace_interact_menu_fnc_addActionToClass;
		
		[typeof player,1,["ACE_SelfActions","dzn_CG_RallypointNode"], [
			"dzn_CG_GoToMyRallypointNode"
			, "Deploy to My Rallypoint", ""
			, { true spawn dzn_CG_fnc_moveToRallypoint }
			, { (call dzn_CG_fnc_isRallypointExist) select 0 }
		] call ace_interact_menu_fnc_createAction] call ace_interact_menu_fnc_addActionToClass;
		
		[typeof player,1,["ACE_SelfActions","dzn_CG_RallypointNode"], [
			"dzn_CG_GoToSquadRallypointNode"
			, "Deploy to Squad Rallypoint", ""
			, { false spawn dzn_CG_fnc_moveToRallypoint }
			, { (call dzn_CG_fnc_isRallypointExist) select 1 }
		] call ace_interact_menu_fnc_createAction] call ace_interact_menu_fnc_addActionToClass;
	};	
};

