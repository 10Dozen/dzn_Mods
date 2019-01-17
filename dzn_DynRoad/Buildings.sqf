/*
	Replace not-enterable buildings to same shape but enterable buildings from CUP Terrains Core.
	
	// Replaces all buildings inside given trigger
	TRG_1 spawn dzn_DynHouse_fnc_replaceInTrigger

	// Replaces given building to enterable one
	cursorTarget call dzn_DynHouse_fnc_replaceBuilding;
*/


dzn_DynHouse_Config = call CBA_fnc_createNamespace;

{
	_x params ["_classKey","_val", "_bc"];
	dzn_DynHouse_Config setVariable [_classKey, [_val, _bc]];
} forEach [
	["Land_House_L_8_H", 	"Land_House_L_8_EP1", [4.32969,1.673,1.99022]]	
	,["Land_House_L_1_H", 	"Land_House_L_1_EP1", [-0.500469,0.291878,0.912698]]	
	,["Land_House_L_3_H", 	"Land_House_L_3_EP1", [1.49876,-0.633262,0.403585]]
	,["Land_House_L_4_H", 	"Land_House_L_4_EP1", [-0.01261,-0.586715,1.86112]]
	,["Land_House_L_6_H", 	"Land_House_L_6_EP1", [-1.31235,-0.0444649,1.86044]]
];

dzn_DynHouse_fnc_replaceBuilding = {
	params ["_house"];
	
	private _replaceOption = dzn_DynHouse_Config getVariable [typeof _house, nil];
	if (isNil "_replaceOption") exitWith {player sideChat "No class to exchange";};
	
	private _pos = getPosASL _house;
	private _dir = getDir _house;
	
	[_house, true] remoteExec ["hideObjectGlobal",2];
	[_house, false] remoteExec ["enableSimulationGlobal",2];
	
	_replaceOption params ["_replaceClass", "_replaceOffset"];
	private _replaceHouse = createVehicle [_replaceClass, _pos, [], 0, "CAN_COLLIDE"];
	
	_replaceHouse setDir _dir;	
	_replaceHouse setPosASL _pos;
	
	private _replaceOffsetPos = _replaceHouse modelToWorld [
		_replaceOffset # 0
		, _replaceOffset # 1
		, -1 * (_replaceOffset # 2)
	];
	_replaceHouse setPosATL _replaceOffsetPos;
	
	[_house, _replaceHouse]
};

dzn_DynHouse_fnc_replaceInTrigger = {
	params ["_trigger"];
	
	private _trgArea = triggerArea _trigger; 
	private _houses = nearestObjects [getPos _trigger, ["house"], (_trgArea # 0) max (_trgArea # 1)];
	{
		if (_x inArea _trigger) then {
			_x call dzn_DynHouse_fnc_replaceBuilding;
			sleep 0.001;
		};
	} forEach _houses;
};
