/*
	Select 2 objects in Zeus and open console.
	Execute:
		
		// Asphalt road type 1 (old)
		"Asphalt" call dzn_DynRoads_fnc_createRoadZeus
		// Asphalt road type 2 (new with dust)
		"Asphalt2" call dzn_DynRoads_fnc_createRoadZeus
		
		// Mud 2-wheel path
		"Mud" call dzn_DynRoads_fnc_createRoadZeus
		
		// Sand/gravel road
		"Dirt" call dzn_DynRoads_fnc_createRoadZeus
		
		// OR without Zeus from obj1 to obj2:
		[getPos obj1, getPos obj2, "Asphalt2"] spawn dzn_DynRoads_fnc_createSection;
		
		// Draw road from GameLogic named "Road1" through chain of synced game logics
		[Road1, "Asphalt2"] spawn dzn_DynRoads_fnc_createRoadFromPath;
*/


/*

	117c73580# 1160558: asf3_1 1000.p3d
	[[-3.57589,-8.75675,-6.16632],[3.57589,8.75675,6.16632]]
	
	11fcb3580# 1160555: asf3_25.p3d
	[[-3.5,-12.5,-8],[3.5,12.5,8]]
	
	627d6b00# 1160559: asf3_6.p3d
	[[-3.5,-3.125,-3.3125],[3.5,3.125,3.3125]]
*/

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

{
	_x params ["_name","_class","_size","_startPos","_endPos"];
	_asphalt2Config setVariable [
		_name
		, [_class, _size, _startPos, _endPos]
	];
} forEach [
	["6", "CUP_A2_Road_OA_asf2_6", 6, [0,-3,0], [0,3,0]]
	,["E", "CUP_A2_Road_asf3_6konec", 3, [0,-3,0], [0,0,0]]
	,["12", "CUP_A2_Road_OA_asf2_12", 12, [0,-6,0], [0,6,0]]
	,["25", "CUP_A2_Road_OA_asf2_25", 25, [0,-12.5,0], [0,12.5,0]]
	,["18","CUP_A2_Road_OA_asf2_11000", 18, [0,-9,0], [0,9,0]]
];

{
	_x params ["_name","_class","_size","_startPos","_endPos"];
	_mudConfig setVariable [
		_name
		, [_class, _size, _startPos, _endPos]
	];
} forEach [
	["6", "CUP_A2_Road_mud_6", 6, [0,-3,0], [0,3,0]]
	,["E", "CUP_A2_Road_asf3_6konec", 3, [0,-3,0], [0,0,0]]
	,["12", "CUP_A2_Road_mud_12", 12, [0,-6,0], [0,6,0]]
	,["25", "CUP_A2_Road_mud_25", 25, [0,-12.5,0], [0,12.5,0]]
	,["18","CUP_A2_Road_mud_1_1000", 18, [0,-9,0], [0,9,0]]
];

{
	_x params ["_name","_class","_size","_startPos","_endPos"];
	_dirtConfig setVariable [
		_name
		, [_class, _size, _startPos, _endPos]
	];
} forEach [
	["6", "CUP_A2_Road_OA_dirt1_6", 6, [0,-3,0], [0,3,0]]
	,["E", "CUP_A2_Road_asf3_6konec", 3, [0,-3,0], [0,0,0]]
	,["12", "CUP_A2_Road_OA_dirt1_12", 12, [0,-6,0], [0,6,0]]
	,["25", "CUP_A2_Road_OA_dirt1_25", 25, [0,-12.5,0], [0,12.5,0]]
	,["18","CUP_A2_Road_OA_dirt1_11000", 18, [0,-9,0], [0,9,0]]
];


dzn_DynRoads_Config setVariable ["Asphalt", _asphaltConfig];
dzn_DynRoads_Config setVariable ["Asphalt2", _asphalt2Config];
dzn_DynRoads_Config setVariable ["Mud", _mudConfig];
dzn_DynRoads_Config setVariable ["Dirt", _dirtConfig];



dzn_DynRoads_fnc_createSection = {
	params ["_posStart","_posEnd","_type"];
	
	private _config = (dzn_DynRoads_Config getVariable _type);
	private _dir = _posStart getDir _posEnd;
	private _dist = _posStart distance _posEnd;
	
	private _sections = [];

	{
		while {_dist >= _x} do {
			_sections pushBack str(_x);
			_dist = _dist - _x;
		};
	} forEach [25, 18, 12, 6];
	
	private _segments = [];
	private _segmentPos = _posStart;	
	{
		private _segmentConfig = _config getVariable _x;
		_segmentConfig params ["_class","_size","_startPos","_endPos"];
		
		private _segment = createVehicle [_class, _segmentPos, [], 0, "NONE"];
		_segment setDir _dir;
		_segment setPos _segmentPos;
		
		_segments pushBack _segment;
		
		_segmentPos = _segmentPos getPos [_size, _dir];
	} forEach _sections;
	
	_segments
};

dzn_DynRoads_fnc_createRoadZeus = {
	if (count (curatorSelected select 0) < 2) exitWith { hint "select 2 objects!"; };
	
	private _start = getPosATL ((curatorSelected # 0) # 0);
	private _end = getPosATL ((curatorSelected # 0) # 1);
	
	[_start, _end, _this] spawn dzn_DynRoads_fnc_createSection;
};

dzn_DynRoads_fnc_createRoadFromPath = {
	params ["_pathNode", ["_type", ""]];
	
	if (_type == "") then {
		_type = _pathNode getVariable ["type", ""];
		if (_type == "") exitWith { hint "dzn DynRoads: No typo given"; };
	};

	// First node
	private _curNode = _pathNode;
	private _nextNode = (synchronizedObjects _curNode) select 0;
	[getPos _curNode, getPos _nextNode, _type] call dzn_DynRoads_fnc_createSection;
	_curNode = _nextNode;
	
	// Other nodes
	while { count (synchronizedObjects _curNode) > 1 } do {
		_nextNode = (synchronizedObjects _curNode) select 1;
		[getPos _curNode, getPos _nextNode, _type] call dzn_DynRoads_fnc_createSection;
		_curNode = _nextNode;
	};
};



