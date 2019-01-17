/*
	Select 2 objects in Zeus and open console.
	List of road types:
		"Asphalt"
		"Asphalt2" (with sand dust)
		"Asphalt3" 
		"Asphalt4" 
		"Asphalt5" (old cracked)
		"Mud"
		"Dirt"
		"Gravel"
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

// Configuration
dzn_DynRoads_Config = call CBA_fnc_createNamespace;
private _fnc_addConfig = {
	params ["_configName", "_configData"];
	
	private _config = call CBA_fnc_createNamespace;
	{
		_x params ["_name","_class","_size"];
		_config setVariable [_name, [_class, _size]];
	} forEach _configData;
	
	dzn_DynRoads_Config setVariable [_configName, _config];
};

{ _x call _fnc_addConfig } forEach [
	["Asphalt", [
		["6", "CUP_A2_Road_asf3_6", 3.125*2]
		,["E", "CUP_A2_Road_asf3_6konec", 3]
		,["12", "CUP_A2_Road_asf3_12", 6.25*2]
		,["25", "CUP_A2_Road_asf3_25", 12.5*2]
		,["18", "CUP_A2_Road_asf3_1_1000", 8.75675*2]
	]]
	, ["Asphalt2", [
		["6", "CUP_A2_Road_OA_asf2_6", 3.125*2]
		,["E", "CUP_A2_Road_asf3_6konec", 3]
		,["12", "CUP_A2_Road_OA_asf2_12", 6.25*2]
		,["25", "CUP_A2_Road_OA_asf2_25", 12.5*2]
		,["18", "CUP_A2_Road_OA_asf2_11000", 8.76983*2]
	]]
	, ["Asphalt3", [
		["6", "CUP_A2_Road_asf1_6", 3.125*2]
		,["E", "CUP_A2_Road_asf1_6konec", 3.125*2]
		,["12", "CUP_A2_Road_asf1_12", 6.25*2]
		,["18", "CUP_A2_Road_asf1_1_1000", 8.77856*2]
		,["25", "CUP_A2_Road_asf1_25", 12.5*2]	
	]]
	, ["Asphalt4", [
		["6", "CUP_A2_Road_asf2_6", 3.125*2]
		,["E", "CUP_A2_Road_asf2_6konec", 3.125*2]
		,["12", "CUP_A2_Road_asf2_12", 6.25*2]
		,["18", "CUP_A2_Road_asf2_1_1000", 8.76547*2]
		,["25", "CUP_A2_Road_asf2_25", 12.5*2]
	]]
	, ["Asphalt5", [
		["6", "CUP_A2_Road_PMC_asf1_6", 3.125*2]
		,["E", "CUP_A2_Road_PMC_asf1_6konec", 3.125*2]
		,["12", "CUP_A2_Road_PMC_asf1_12", 6.25*2]
		,["18", "CUP_A2_Road_PMC_asf1_11000", 8.77856*2]
		,["25", "CUP_A2_Road_PMC_asf1_25", 12.5*2]
	]]
	, ["Mud", [
		["6", "CUP_A2_Road_mud_6", 3.125*2]
		,["E", "CUP_A2_Road_asf3_6konec", 3]
		,["12", "CUP_A2_Road_mud_12", 6.25*2]
		,["25", "CUP_A2_Road_mud_25", 12.5*2]
		,["18", "CUP_A2_Road_mud_1_1000", 8.74802*2]
	]]
	, ["Dirt", [
		["6", "CUP_A2_Road_OA_dirt1_6", 3.125*2]
		,["E", "CUP_A2_Road_asf3_6konec", 3]
		,["12", "CUP_A2_Road_OA_dirt1_12", 6.25*2]
		,["25", "CUP_A2_Road_OA_dirt1_25", 12.5*2]
		,["18", "CUP_A2_Road_OA_dirt1_11000", 8.76983*2]
	]]
	, ["Gravel", [
		["6", "CUP_A2_Road_grav_6", 3.125*2]
		,["E", "CUP_A2_Road_grav_6konec", 3.125*2]
		,["12", "CUP_A2_Road_grav_12", 6.25*2]
		,["18", "CUP_A2_Road_grav_1_1000", 8.75238*2]	
		,["25", "CUP_A2_Road_grav_25", 12.5*2]
	]]
];


// Functions
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
	
	_sections pushBack "6";
	private _segments = [];
	private _segmentPos = _posStart;	
	{
		private _segmentConfig = _config getVariable _x;
		_segmentConfig params ["_class","_size"];
		
		private _segment = createVehicle [_class, _segmentPos, [], 0, "CAN_COLLIDE"];
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



