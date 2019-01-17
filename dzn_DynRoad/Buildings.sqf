player addAction [
	"Change house"
	, {
		cursorObject call dzn_DynHouse_fnc_replaceBuilding; 
		player sideChat "DynBuildings: Replaced!";
	}
];


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


/*
A1 setPosASL (getPosASL A2);
A1 setPosATL (A1 modelToWorld [(boundingCenter A1) # 0, (boundingCenter A1) # 1, -1 * ((boundingCenter A1) # 2)] )
*/
/*
dzn_DynHouse_fnc_replaceBuilding = {
	params ["_house"];
	
	private _replaceOption = dzn_DynHouse_Config getVariable [typeof _house, nil];
	if (isNil "_replaceOption") exitWith {player sideChat "No class to exchange";};
	
	private _pos = getPosATL _house;
	private _dir = getDir _house;
	[_house, true] remoteExec ["hideObjectGlobal",2];
	[_house, false] remoteExec ["enableSimulationGlobal",2];
	
	_replaceOption params ["_replaceClass", "_replaceOffset"];
	private _replaceHouse = createVehicle [_replaceOption # 0, _pos, [], 0, "CAN_COLLIDE"];
	
	_replaceHouse setDir _dir;	
	_replaceHouse setPosATL [
		(_pos # 0) + (_replaceOffset # 0)
		, (_pos # 1) - (_replaceOffset # 1)
		, (_pos # 2) 
	];
	
	[_house, _replaceHouse]
};
*/

/*
boundingCenter (AX # 1)
(AX # 1) setPosATL [61195.2 + 4.32969,60802 - 1.673, 0]


A1 = cursorObject;

A1 hideObject true;
A1 enableSimulation false;
A1 setDamage 1;
deleteVehicle A1;


*/
/*
dzn_DynRoads_Config = call CBA_fnc_createNamespace;
private _asphaltConfig = call CBA_fnc_createNamespace;
private _asphalt2Config = call CBA_fnc_createNamespace;
private _mudConfig = call CBA_fnc_createNamespace;
private _dirtConfig = call CBA_fnc_createNamespace;

{
	_x params ["_name","_class","_size","_startPos","_endPos"];
	_asphaltConfig setVariable [
		_name
		, [_class, _size, _startPos, _endPos]
	];
} forEach [
	["6", "CUP_A2_Road_asf3_6", 6, [0,-3,0], [0,3,0]]
	,["E", "CUP_A2_Road_asf3_6konec", 3, [0,-3,0], [0,0,0]]
	,["12", "CUP_A2_Road_asf3_12", 12, [0,-6,0], [0,6,0]]
	,["25", "CUP_A2_Road_asf3_25", 25, [0,-12.5,0], [0,12.5,0]]
	,["18","CUP_A2_Road_asf3_1_1000", 18, [0,-9,0], [0,9,0]]
];


dzn_DynRoads_Config setVariable ["Asphalt", _asphaltConfig];
dzn_DynRoads_Config setVariable ["Asphalt2", _asphalt2Config];
dzn_DynRoads_Config setVariable ["Mud", _mudConfig];
dzn_DynRoads_Config setVariable ["Dirt", _dirtConfig];
*/
