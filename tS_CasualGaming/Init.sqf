if !(hasInterface) exitWith {};



tS_fnc_setAutoHealSettings = {
	if (typename _this == "BOOL") then {
		tS_AutoHealEnabled = _this;
	} else {
		tS_AutoHealTimer = _this;
	};
	hint parseText format ["<t size='1.5' color='#FFD000' shadow='1'>tS Auto-Heal</t>
		<br /><br />%1
		<br />%2 seconds"
		, if (tS_AutoHealEnabled) then { "ON" } else { "OFF" }
		, tS_AutoHealTimer
	];
};
	
tS_fnc_setRespawnTime = {
	setPlayerRespawnTime _this;
	hint parseText format ["<t size='1.5' color='#FFD000' shadow='1'>tS Respawn Time</t>
		<br /><br />Set to %1 seconds"
		, _this
	];
};

if (isNil "tSF_fnc_ACEActions_addAction") then {
tSF_fnc_ACEActions_addAction = {
	params ["_type","_name","_id","_node","_code","_cond"];
	
	private _action = [
		_id
		,_name
		, ""
		,_code
		,_cond	
	] call ace_interact_menu_fnc_createAction;
	
	private _path = [];
	private _actionType = 0;
	private _classes = [] ;
	
	if (typename _type == "STRING" && {toLower _type == "self"} ) then {
		_path = ["ACE_SelfActions"];	
		_classes = [typeof player];
		_actionType = 1;
	};
	
	if (typename _type == "ARRAY") then {
		_path = ["ACE_MainActions"];	
		_classes = _type;
		_actionType = 0;
	};	
	
	if (_node != "") then { _path pushBack _node; };
	
	{
		call compile format [
			"[_x, _actionType, _path, _action] call %1;"
			, if (typename _x == "STRING") then {
				"ace_interact_menu_fnc_addActionToClass"
			} else {
				"ace_interact_menu_fnc_addActionToObject"
			}
		];
	} forEach _classes;
};
};

tS_fnc_addRallypointActions = {
	if !(isNil "tS_RP_Action_Core" || isNil "tS_RP_Action_Set" || isNil "tS_RP_Action_Get") exitWith {};

	tS_RP_Action_Core = ["SELF","Rallypoint","ts_rp","",{},{ true }] call tSF_fnc_ACEActions_addAction;
	
	tS_RP_Action_Set = [
		"SELF"
		,"Set RP"
		,"ts_rp_set"
		,"ts_rp"
		,{ call tS_fnc_setRallypoint; }
		,{ leader group player == player }
	] call tSF_fnc_ACEActions_addAction;
	
	tS_RP_Action_Get = [
		"SELF"
		,"Move to Rallypoint"
		,"ts_rp_move"
		,"ts_rp"
		,{ [] spawn tS_fnc_moveToRallypoint; }
		,{ !isNull ( (leader group player) getVariable ["tS_RallypointObject", objNull] ) }
	] call tSF_fnc_ACEActions_addAction;
};

tS_fnc_setRallypoint = {
	if ( isNull (player getVariable ["tS_RallypointObject", objNull]) ) then {	
		private _o = tS_RallyPointClass createVehicle (getPos player);
		player setVariable ["tS_RallypointObject", _o, true];
	} else {
		(player getVariable "tS_RallypointObject") setPos (getPos player);
	};
	
	hint parseText format ["<t size='1.5' color='#FFD000' shadow='1'>Rallypoint</t>
		<br /><br />Set at grid %1"
		, mapGridPosition (player getVariable "tS_RallypointObject")
	];
};

tS_fnc_moveToRallypoint = {
	1000 cutText ["","BLACK OUT",1];
	player allowDamage false;
	sleep 2; 
	moveOut player;
	player setVelocity [0,0,0];
	player setPos (getPos ((leader group player) getVariable "tS_RallypointObject"));
	player allowDamage true; 
	1000 cutText ["","BLACK IN",1];
};

tS_fnc_showModel = {
	tS_playerModel = player;
	publicVariable "tS_playerModel";
	[tS_playerModel, false] remoteExec ["hideObject", 0];
};


[] spawn {
	sleep 5;

	tS_RallyPointClass = "Misc_Backpackheap";
	tS_AutoHealEnabled = false;
	tS_AutoHealTimer = 30;

	autoHeal = [] spawn {
		while { true } do {
			sleep 0.5;
			
			if (tS_AutoHealEnabled) then {
				sleep (tS_AutoHealTimer - 0.5);
				player setDamage 0;
				[player ,player] call ace_medical_fnc_treatmentAdvanced_fullHealLocal;
			};
		};
	};
	
	[] spawn {
		sleep 10;
		call tS_fnc_addRallypointActions;
		
		sleep 10;
		if (isNil "tS_RP_Action_Core" || isNil "tS_RP_Action_Set" || isNil "tS_RP_Action_Get") then {
			call tS_fnc_addRallypointActions;
		};
		
		player addEventHandler ["Respawn", {
			[] spawn tS_fnc_showModel;
		}];
	};

// ********** Topics ****************
#define NOTES		private["_topics"]; _topics = []; player createDiarySubject ["tSF_NotesSettingsPage","tS Menu"];
#define TOPIC(Y, NAME) 	if (Y) then { _topics pushBack ["tSF_NotesSettingsPage", [ NAME,
#define END			]]; };
#define ADD_TOPICS	for "_i" from (count _topics) to 0 step -1 do {player createDiaryRecord (_topics select _i);};

NOTES	

TOPIC(true, "Auto-Heal")
"<font color='#12C4FF' size='14'>Auto-Heal</font>
<br />[<font color='#A0DB65'><execute expression='true call tS_fnc_setAutoHealSettings'>Turn On</execute></font>]  [
<font color='#A0DB65'><execute expression='false call tS_fnc_setAutoHealSettings;'>Turn Off</execute></font>]
<br />
<br />Timeout: [<font color='#A0DB65'><execute expression='10 call tS_fnc_setAutoHealSettings'>10 sec</execute></font>]
   [<font color='#A0DB65'><execute expression='20 call tS_fnc_setAutoHealSettings'>20 sec</execute></font>]
   [<font color='#A0DB65'><execute expression='30 call tS_fnc_setAutoHealSettings'>30 sec</execute></font>]
   [<font color='#A0DB65'><execute expression='40 call tS_fnc_setAutoHealSettings'>40 sec</execute></font>]
   [<font color='#A0DB65'><execute expression='60 call tS_fnc_setAutoHealSettings'>60 sec</execute></font>]
   [<font color='#A0DB65'><execute expression='300 call tS_fnc_setAutoHealSettings'>5 min</execute></font>]
   [<font color='#A0DB65'><execute expression='600 call tS_fnc_setAutoHealSettings'>10 min</execute></font>]
"
END

TOPIC(true, "Respawn Time")
"<font color='#12C4FF' size='14'>Respawn Time</font>
<br />[<font color='#A0DB65'><execute expression='15 call tS_fnc_setRespawnTime;'>Turn On (15)</execute></font>]  [
<font color='#A0DB65'><execute expression='999999 call tS_fnc_setRespawnTime;'>Turn Off (999999)</execute></font>]
"
END

ADD_TOPICS

};