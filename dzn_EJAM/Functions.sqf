﻿#define	REMOVE_ROUND	if ((player getVariable "dzn_EJAM_RemovedMagazine" select 1) > 0) then { player setVariable ["dzn_EJAM_LooseRound", true]; }

dzn_EJAM_fnc_setJamCause = {
	(selectRandom dzn_EJAM_Causes) params ["_causeID", "_causeName", "_weaponState", "_actionList"];
	
	_weaponState call dzn_EJAM_fnc_setWeaponState;	
	player setVariable ["dzn_EJAM_Cause", _causeID];
	player setVariable ["dzn_EJAM_CauseSet", true];
};

dzn_EJAM_fnc_setWeaponState = {
	params[["_boltState",""],["_chamberState",""],["_caseState",""],["_magState",""]];

	private _currentState = player getVariable ["dzn_EJAM_WeaponState", []];
	
	if (_currentState isEqualTo []) then {
		// First time set
		player setVariable ["dzn_EJAM_WeaponState", _this];
	} else {
		player setVariable [
			"dzn_EJAM_WeaponState"
			, [
				if (_boltState == "") then { _currentState select 0 } else { _boltState }
				, if (_chamberState == "") then { _currentState select 1 } else { _chamberState }
				, if (_caseState == "") then { _currentState select 2 } else { _caseState }
				, if (_magState == "") then { _currentState select 3 } else { _magState }				
			]
		];	
	};
};

dzn_EJAM_fnc_doAction = {
	private _actionID = _this;
	
	switch (_actionID) do {
		case "pull_bolt": {
			[0.5, [], {
				call dzn_EJAM_fnc_pullBolt;			
				[] spawn dzn_EJAM_fnc_ShowUnjamMenu;				
			}, {}, "Передергиваем затвор"] call ace_common_fnc_progressBar;
		};	
		case "open_bolt": {
			[0.5, [], {
				hint "Затвор отведен в заднее положение";
				["bolt_opened",nil,nil,nil] call dzn_EJAM_fnc_setWeaponState;
				[] spawn dzn_EJAM_fnc_ShowUnjamMenu;
			}, {}, "Отводим затвор назад"] call ace_common_fnc_progressBar;
		};
		case "clear_chamber": {
			[3, [], {
				hint "Патронник освобожден от лишнего";
				
				REMOVE_ROUND;
				[nil,"chamber_empty",nil,nil] call dzn_EJAM_fnc_setWeaponState;
				[] spawn dzn_EJAM_fnc_ShowUnjamMenu;
			}, {}, "Извлекаем патрон из патронника"] call ace_common_fnc_progressBar;
		};		
		case "remove_case": {
			[3, [], {
				hint "Гильза извлечена";
				[nil,nil,"case_ejected",nil] call dzn_EJAM_fnc_setWeaponState;
				[] spawn dzn_EJAM_fnc_ShowUnjamMenu;
			}, {}, "Извлекаем гильзу"] call ace_common_fnc_progressBar;
		};
		case "detach_mag": {
			[1, [], {
				true call dzn_EJAM_fnc_manageMagazine;
				hint "Отсоединили магазин";
				[nil,nil,nil,"mag_detached"] call dzn_EJAM_fnc_setWeaponState;
				[] spawn dzn_EJAM_fnc_ShowUnjamMenu;
			}, {}, "Отсоединяем магазин"] call ace_common_fnc_progressBar;
		};
		case "attach_mag": {
			[1, [], {
				false call dzn_EJAM_fnc_manageMagazine;
				hint "Присоединили магазин";
				[nil,nil,nil,"mag_attached"] call dzn_EJAM_fnc_setWeaponState;
				[] spawn dzn_EJAM_fnc_ShowUnjamMenu;
			}, {}, "Присоединием магазин"] call ace_common_fnc_progressBar;
		};
	};	
};

dzn_EJAM_fnc_pullBolt = {
	(player getVariable "dzn_EJAM_WeaponState") params ["_bolt","_chamber","_case","_mag"];
	
	private _hasAmmo = player ammo (currentWeapon player) > 0;
	
	if (_case == "case_not_ejected") then {
		if (_mag == "mag_attached" && _hasAmmo) then {
			["bolt_not_closed","chamber_stucked",nil,nil] call dzn_EJAM_fnc_setWeaponState;
		} else {
			["bolt_not_closed",nil,nil,nil] call dzn_EJAM_fnc_setWeaponState;
		};
	} else {
		if (_chamber == "chamber_stucked") then {
			["bolt_not_closed",nil,nil,nil] call dzn_EJAM_fnc_setWeaponState;
		} else {
			if (_chamber == "chamber_empty") then {
				if (_mag == "mag_attached" && _hasAmmo) then {
					["bolt_closed","chamber_ready",nil,nil] call dzn_EJAM_fnc_setWeaponState;
				} else {
					["bolt_closed",nil,nil,nil] call dzn_EJAM_fnc_setWeaponState;
				};
			} else {
				if (_chamber in ["chamber_not_extracted","chamber_ready"]) then {
					if (_mag == "mag_attached" && _hasAmmo) then {
						if (_bolt == "bolt_opened") then {
							["bolt_not_closed","chamber_stucked",nil,nil] call dzn_EJAM_fnc_setWeaponState;
						} else {
							if (_chamber == "chamber_ready") then { REMOVE_ROUND; };
							["bolt_closed","chamber_ready",nil,nil] call dzn_EJAM_fnc_setWeaponState;
						};					
					} else {
						if (_chamber == "chamber_ready") then { REMOVE_ROUND; };
						["bolt_closed","chamber_empty",nil,nil] call dzn_EJAM_fnc_setWeaponState;
					};
				};
			};
		};
	};
	
	hint "Затвор передернули";
	call dzn_EJAM_fnc_processWeaponFixed;
};

dzn_EJAM_fnc_processWeaponFixed = {
	if (isNil { player getVariable "dzn_EJAM_WeaponState" }) exitWith {};
	
	(player getVariable "dzn_EJAM_WeaponState") params ["_bolt","_chamber","_case","_mag"];
	
	if (
		_bolt != "bolt_not_closed" 
		&& _chamber in ["chamber_ready","chamber_empty"]
		&& _case == "case_ejected"
		&& _mag == "mag_attached"
	) then {
		private _oldFailChance = ace_overheating_unJamFailChance;
		ace_overheating_unJamFailChance = 0;
		
		[player, currentWeapon player, true] call ace_overheating_fnc_clearJam;
		[player, "gestureYes"] call ace_common_fnc_doGesture;
		
		ace_overheating_unJamFailChance = _oldFailChance;
		
		player setVariable ["dzn_EJAM_Cause", nil];
		player setVariable ["dzn_EJAM_WeaponState", nil];
		player setVariable ["dzn_EJAM_CauseSet", false];
		player setVariable ["dzn_EJAM_RemovedMagazine", nil];
		player setVariable ["dzn_EJAM_LooseRound", nil];
	};
};

dzn_EJAM_fnc_ShowUnjamMenu = {
	closeDialog 2;
	sleep 0.001;
	
	if !(player getVariable ["dzn_EJAM_CauseSet", false]) exitWith {};
	
	if (dzn_EJAM_handleMag) then {
		["","","", if (call dzn_EJAM_fnc_isMagAttached) then { "mag_attached" } else { "mag_detached" }] call dzn_EJAM_fnc_setWeaponState;
	};
	(player getVariable "dzn_EJAM_WeaponState") params ["_bolt","_chamber","_case","_mag"];
	
	private _boltText = (dzn_EJAM_States select { _x select 0 == _bolt }) select 0 select 1;
	private _chamberText = (dzn_EJAM_States select { _x select 0 == _chamber }) select 0 select 1;
	private _caseText = (dzn_EJAM_States select { _x select 0 == _case }) select 0 select 1;
	private _magText = (dzn_EJAM_States select { _x select 0 == _mag }) select 0 select 1;	
	
	private _menuItems = [ 
		[0,"HEADER","WEAPON MALFUNCTION"]
		, [0, "LABEL", ""]
		, [0, "LABEL", ""]
		, [0, "BUTTON", "CLOSE", {closeDialog 2}]
		, [1, "LABEL", format[
			"<t align='center'>%1</t><br /><img image='%2' size='15' />"
			, getText (configFile >> "CfgWeapons" >> primaryWeapon player >> "displayName")
			, getText (configFile >> "CfgWeapons" >> primaryWeapon player >> "picture")
		],[[1,1,1,1], "PuristaLight", 0.5],[1,0,0,0.7]]
		
		, [2, "LABEL", format ["<t align='center'>%1</t>", _boltText]] 
		, [2, "LABEL", format ["<t align='center'>%1</t>", _chamberText]]
		, [2, "LABEL", format ["<t align='center'>%1</t>", _magText]]

		, [3, "LABEL", ""] 
		, [3, "LABEL", format ["<t align='center'>%1</t>", _caseText]] 
		, [3, "LABEL", ""]
	];
	
	[player, "Gear"] call ace_common_fnc_doGesture;
	
	/*
		Action buttons:
		| 0 | 1 | 2 |
		| 3 | 4 | 5 |
	*/
	private _actionItems = [
		[4,"LABEL",""], [4,"LABEL",""], [4,"LABEL",""],
		[5,"LABEL",""], [5,"LABEL",""], [5,"LABEL",""]
	];
	
	{
		// Creates a bunch of variables containing action data: _pull_bolt = ["Pull Bolt", { 'pull_bolt' call dzn_EJAM_fnc_doAction; }]
		call compile format ["dzn_EJAM_%1 = ['%2', { closeDialog 2; '%1' spawn dzn_EJAM_fnc_doAction; }]", _x select 0, _x select 1];
	} forEach dzn_EJAM_FixActions;
	
	// BOLT Actions
	_actionItems set [0, [4, "BUTTON", dzn_EJAM_pull_bolt select 0, dzn_EJAM_pull_bolt select 1]];
	if (_bolt != "bolt_opened") then { 
		_actionItems set [3, [5, "BUTTON", dzn_EJAM_open_bolt select 0, dzn_EJAM_open_bolt select 1]]; 
	} else {
		_actionItems set [3, [5, "LABEL", format ["<t color='#777777'>%1</t>", dzn_EJAM_open_bolt select 0]]]; 
	};
	
	// CHAMBER and CASE actions
	if (_bolt == "bolt_opened" && _mag == "mag_detached" && _chamber == "chamber_stucked" && _case == "case_ejected") then {
		_actionItems set [1, [4, "BUTTON", dzn_EJAM_clear_chamber select 0, dzn_EJAM_clear_chamber select 1]];
	} else {
		_actionItems set [1, [4, "LABEL", format ["<t color='#777777'>%1</t>", dzn_EJAM_clear_chamber select 0]]]; 
	};
	if (_bolt == "bolt_opened" && _case == "case_not_ejected") then {
		_actionItems set [4, [5, "BUTTON", dzn_EJAM_remove_case select 0, dzn_EJAM_remove_case select 1]];
	} else {
		_actionItems set [4, [5, "LABEL", format ["<t color='#777777'>%1</t>", dzn_EJAM_remove_case select 0]]]; 
	};
	
	// MAGAZINE actions
	if (_mag == "mag_attached") then {
		_actionItems set [2, [4, "BUTTON", dzn_EJAM_detach_mag select 0, dzn_EJAM_detach_mag select 1]];
	} else {
		_actionItems set [2, [4, "LABEL", format ["<t color='#777777'>%1</t>", dzn_EJAM_detach_mag select 0]]]; 
	};
	if (_mag == "mag_detached") then {
		_actionItems set [5, [5, "BUTTON", dzn_EJAM_attach_mag select 0, dzn_EJAM_attach_mag select 1]];
	} else {
		_actionItems set [5, [5, "LABEL", format ["<t color='#777777'>%1</t>", dzn_EJAM_attach_mag select 0]]]; 
	};
	
	(_menuItems + _actionItems) call dzn_EJAM_fnc_ShowAdvDialog; 
};


dzn_EJAM_fnc_manageMagazine = {
	if (!dzn_EJAM_handleMag) exitWith {};
	private _needRemove = _this;
	
	private _gun = primaryWeapon player;
	private _gunAttachements = primaryWeaponItems player;
	private _magsAmmo = magazinesAmmo player;
	private _curWeaponMags = (getArray (configFile >> "CfgWeapons" >> _gun >> "magazines")) apply { toLower(_x) };
	
	private _magsToDelete = [];
	private _magsToReAdd = [];
	
	if (_needRemove) then {
		player setVariable ["dzn_EJAM_RemovedMagazine",  [weaponState player select 3, weaponState player select 4]];
		_magsToReAdd pushBack [weaponState player select 3, weaponState player select 4];
	};
	
	{
		if (toLower(_x select 0) in _curWeaponMags) then {
			_magsToReAdd pushBack _x;
			_magsToDelete pushBack (_x select 0);
		};			
	} forEach _magsAmmo;
	
	player removeWeapon _gun;
	{ player removeMagazine _x } forEach _magsToDelete;
	
	if (_needRemove) then {
		player addWeapon _gun;
		{ player addPrimaryWeaponItem _x; } forEach _gunAttachements;
		{ player addMagazine _x } forEach _magsToReAdd;
	} else {
		if (!isNil {player getVariable "dzn_EJAM_RemovedMagazine"}) then {
			private _curMag = player getVariable "dzn_EJAM_RemovedMagazine";
			_magsToReAdd = _magsToReAdd - [_curMag];
			
			player addMagazine [
				_curMag select 0
				, (_curMag select 1) - (if (player getVariable ["dzn_EJAM_LooseRound", false]) then { 1 } else { 0 })
			];
			
			player addWeapon _gun;
			{ player addPrimaryWeaponItem _x; } forEach _gunAttachements;
			{ player addMagazine _x } forEach _magsToReAdd;
		} else {
			{ player addMagazine _x } forEach _magsToReAdd;
			player addWeapon _gun;
			{ player addPrimaryWeaponItem _x; } forEach _gunAttachements;
		};
	};
	
	player selectWeapon (primaryWeapon player);
};

dzn_EJAM_fnc_isMagAttached = {
	(weaponState player select 3) != ""
};
