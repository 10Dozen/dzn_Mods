enableSaving [false,false];

player addAction ["To CTRG", { [player, "U_B_CTRG_1"] call dzn_UEO_fnc_switchUniform }];
player addAction ["To BDU", { [player, "CUP_U_B_US_BDU"] call dzn_UEO_fnc_switchUniform }];
player addAction ["To 3-Desert", { [player, "CUP_U_I_RACS_Desert_1"] call dzn_UEO_fnc_switchUniform }];
player addAction ["To Anorak", { [player, "CUP_U_I_GUE_Anorak_03"] call dzn_UEO_fnc_switchUniform }];
player addAction ["To VSR-93", { [player, "CUP_U_O_RUS_VSR93_worn_MSV"] call dzn_UEO_fnc_switchUniform }];

#define		DN_NORMAL			"Normal"
#define		DN_NORMAL_ACTION	"Fix jacket"
#define 	DN_ROLLED			"Rolled up"
#define		DN_ROLLED_ACTION	"Roll up"

dzn_Uniforms = [
	[
		["U_B_CTRG_1"		,DN_NORMAL		,DN_NORMAL_ACTION]
		, ["U_B_CTRG_3"		,DN_ROLLED		,DN_ROLLED_ACTION]
		, ["U_B_CTRG_2"		,"No jacket"	,"Put jacket off"]
	]

	,[
		["CUP_U_B_US_BDU"				,"Normal"						,"Fix jacket"]
		,["CUP_U_B_US_BDU_roll"			,"Rolled low"					,"Roll up 1" ]
		,["CUP_U_B_US_BDU_roll2"		,"Rolled high"					,"Roll up 2" ]
		,["CUP_U_B_US_BDU_roll_glove"	,"Rolled low and put on gloves"		,"Roll 1 + gloves" ]
		,["CUP_U_B_US_BDU_roll2_glove"	,"Rolled high and put on  gloves"		,"Roll 2 + gloves" ]
	]
	,[
		["CUP_U_I_RACS_Desert_1"		,DN_NORMAL		,DN_NORMAL_ACTION]
		,["CUP_U_I_RACS_Desert_2"		,DN_ROLLED		,DN_ROLLED_ACTION]
	]

	, [
		["CUP_U_I_GUE_Anorak_03"		,"Normal"			, "Hood down"]
		,["CUP_U_I_GUE_Anorak_01"		,"Hood up"			, "Hood up"]
	]

	,[
		["CUP_U_O_RUS_VSR93_worn_MSV"				,DN_NORMAL		,DN_NORMAL_ACTION]
		,["CUP_U_O_RUS_VSR93_worn_MSV_rolled_up"	,DN_ROLLED 		,DN_ROLLED_ACTION]
		,["CUP_U_O_RUS_VSR93_worn_gloves_MSV"		,"Normal with gloves"		, "Put gloves"]
	]
];


dzn_UEO_fnc_handleInventoryDisplay = {
	dzn_UEO_handleIventory = true;
	while { dzn_UEO_handleIventory } do {
			//waituntil inventory UI is opened
			waituntil { sleep 0.25; !(isNull (findDisplay 602))}; 

			((findDisplay 602) displayCtrl 6331) ctrlAddEventHandler ["MouseButtonDblClick", {
				_this spawn dzn_UEO_fnc_showOptions;
			}];

			{
				_x ctrlSetEventHandler ["MouseButtonClick", "call dzn_UEO_fnc_uiHideDropdownItems"];
			} forEach allControls (findDisplay 602);
			
			waituntil { sleep 0.25; isNull (findDisplay 602)};
	};
};

dzn_UEO_fnc_showOptions = {
	params ["_control", "_button", "_xPos", "_yPos", "_shift", "_ctrl", "_alt"];
	// hint str(_this);


	private _options = [player] call dzn_UEO_fnc_getUnifromOptions;
	if (_options isEqualTo []) exitWith { hint "No options for uiform"; };

	_options params ["_optionsData","_optionSelectedId"];
	_optionsData = +_optionsData;
	_optionsData deleteAt _optionSelectedId;

	private _ctrlPos = (ctrlPosition _control);
	private _xPosSide = (_ctrlPos # 0) + (_ctrlPos # 2);

	{
		_x params ["_class", "_descText", "_displayText"];
		uiNamespace setVariable [
			format["dzn_Inventory_DropdownItem_%1", _forEachIndex]
			, [
				_displayText
				, { _args call dzn_UEO_fnc_handleInvDropdownClick; }
				, [_class, _descText]
				, true, _xPos max _xPosSide, _yPos, 0.2, 0.05
			] call dzn_UEO_fnc_uiAddDropdownItem
		];

		_yPos = _yPos + 0.05;
	} forEach _optionsData;
	uiNamespace setVariable ["dzn_Inventory_DropdownItem_Max", (count _optionsData) - 1];
};

dzn_UEO_fnc_getUnifromOptions = {
	// Return: array in format [@ArrayOfOptions, @IndexOfCurrentOption]
	params ["_unit"];
	private _uniform = tolower (uniform _unit);
	private _options = [];

	{
		private _subOptions = _x;
		{
			if (toLower(_x # 0) isEqualTo _uniform) exitWith { _options = [_subOptions, _forEachIndex]; }
		} forEach _subOptions;

		if !(_options isEqualTo []) exitWith {};
	} forEach dzn_Uniforms;

	_options
};

dzn_UEO_fnc_handleInvDropdownClick = {
	params ["_class", "_descText"];

	[] spawn dzn_UEO_fnc_uiHideDropdownItems;
	[player, _class] call dzn_UEO_fnc_switchUniform;

	hint format ["Unifrom changed to %1", _descText];
};

dzn_UEO_fnc_switchUniform = {
	params ["_unit", "_uniformClass"];
	
	private _uniformLoadout = (getUnitLoadout _unit) # 3 # 1; 
	player forceAddUniform _uniformClass;

	{
		_x params ["_class", "_count", ["_ammo", -1]];
		
		if (_ammo >= 0) then {
			for "_i" from 1 to _count do { 
				_unit addMagazine [_class, _ammo];
			};
		} else {
			for "_i" from 1 to _count do { 
				_unit addItemToUniform _class;
			};
		};
	} forEach _uniformLoadout;
};

dzn_UEO_fnc_uiAddDropdownItem = {
	params [
		"_text"
		,"_expression"
		,"_args"
		,["_isEnabled", true]
		,"_x"
		,"_y"
		,["_w", 0.15]
		,["_h", 0.05]
		,[ "_tileStyle", [0,0,0,0.7] ]
		,[ "_textStyle", [[1,1,1,1], "PuristaLight", 0.04] ]
	];

	private _dialog = (findDisplay 602);
	private _ctrlId = 1300100;
	private _item = _dialog ctrlCreate ["RscButtonMenuOK", -1];

	_item ctrlSetPosition [_x, _y, _w, _h];	
	_item ctrlSetStructuredText parseText _text;
	_item ctrlSetBackgroundColor _tileStyle;
	_item ctrlSetTextColor (_textStyle select 0);
	_item ctrlSetFont (_textStyle select 1);
	_item ctrlSetFontHeight (_textStyle select 2);
	_item ctrlSetEventHandler [
		"ButtonClick"
		, format[ 
			"with missionNamespace do {
				private _args = %2;
				%1
			}"
			, str(_expression) select [1, count str(_expression)-2]
			, _args
		]
	];

	_item ctrlEnable _isEnabled;	
	_item ctrlCommit 0;
		
	_item
};

dzn_UEO_fnc_uiHideDropdownItems = {
	for "_i" from 0 to (uiNamespace getVariable ["dzn_Inventory_DropdownItem_Max", 0]) do {
		ctrlDelete (uiNamespace getVariable format ["%1%2", "dzn_Inventory_DropdownItem_", _i]);
	};

	(true)
};


