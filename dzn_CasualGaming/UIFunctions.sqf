
dzn_CG_fnc_handleExecute = {
	private _type = _this;
	private _text = ctrlText 1400;
	
	[compile _text, _type] call dzn_CG_fnc_Execute;
	profilenamespace setVariable ["dzn_CG_Console_LastExecute", _text];
};

dzn_CG_fnc_Execute = {
	params["_code", "_execType"];
	
	switch toLower(_execType) do {
		case "local": {
			[] spawn _code;
		};
		case "global": {
			[[], _code] remoteExec ["bis_fnc_call", 0]; 
		};
		case "server": {
			[[], _code] remoteExec ["bis_fnc_call", 2]; 
		};
		case "player": {
			[[], _code] remoteExec [
				"bis_fnc_call"
				, (dzn_CG_PlayersList select { _x select 0 == (lbText [2100, lbCurSel 2100]) } select 0) select 1
			];
		};
	};
	
	hint "Executed";
};

dzn_CG_fnc_restoreLastExecutedAndWatch = {
	if (!isNil {profilenamespace getVariable "dzn_CG_Console_LastWatch"}) then {
		ctrlSetText [1401, profilenamespace getVariable "dzn_CG_Console_LastWatch"];
		call dzn_CG_fnc_handleWatch;
	};
	
	if (!isNil {profilenamespace getVariable "dzn_CG_Console_LastExecute"}) then {
		ctrlSetText [1400, profilenamespace getVariable "dzn_CG_Console_LastExecute"];
	};
};

dzn_CG_fnc_updatePlayerList = {
	private _list = call BIS_fnc_listPlayers;
	private _ctrl = findDisplay 192001 displayCtrl 2100;
	
	dzn_CG_PlayersList = _list apply { [name _x, _x] };
	
	lbClear _ctrl;
	{
		_ctrl lbAdd (_x select 0);
	} forEach dzn_CG_PlayersList;
	
	lbSort _ctrl;
	_ctrl lbSetCurSel 0;
	
	_ctrl ctrlCommit 0;
};

dzn_CG_fnc_handleWatch = {
	private _code = ctrlText 1401;
	private _output = call compile _code;
	profilenamespace setVariable ["dzn_CG_Console_LastWatch", _code];
	
	ctrlSetText [1402, str(_output)];
};