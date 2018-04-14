/*
	Function that collects data in rough way:
	
	- Create test infantry unit
	- Get all vehicles list w. scope = 2
	- Loop thou all found vehicles:
		- Check available crew positions
		- If Not -> proceed to next vehicle
		- If Present -> spawn vehicle
		- Loop infantry throu all vehicle crew places and grab position in modelspace rounded to 2 symbols after dot
		- Format and add list
	- Dump to diag_log in loop
	
	
	Format:
	[ 
		@CLASS
		, [
			[@PositionName, @SeatIndex, @ModelPosition]
			...
		]		
	]
	
	@PositionNames:	"cargo", "driver", "turret"
	@SeatIndex: Cargo index (0...N index) or turret path (3rd element of fullCargo output, e.g. [0] or [0,0]), for Driver is not used (may be -1 or 0)
	@ModelPosition: model relative (worldToModelVisual)
*/

dzn_ABME_fnc_getVehicleClasses = {
	(
		'isClass _x 
		&& getNumber (_x >> "scope") == 2 
		&& !(getNumber (_x >> "side") in [3,4])
		&& (
			(configName _x) isKindOf "Car"
			|| (configName _x) isKindOf "Truck"
			|| (configName _x) isKindOf "Motorcycle"
			|| (configName _x) isKindOf "Bicycle"
			|| (configName _x) isKindOf "Tank"
			|| (configName _x) isKindOf "APC"
			|| (configName _x) isKindOf "Helicopter"
			|| (configName _x) isKindOf "Plane"
			|| (configName _x) isKindOf "Ship"
			|| (configName _x) isKindOf "StaticWeapon"
		)
		'
	) configclasses (configfile >> "CfgVehicles")
};

dzn_ABME_fnc_getSeats = {
	private _v = _this;	
	private _seats = _v emptyPositions "Cargo";
	private _drivers = _v emptyPositions "Driver";
	private _gunners = _v emptyPositions "Gunner";	
	private _commanders = _v emptyPositions "Commander";
	
	[
		(_seats + _drivers + _gunners + _commanders)
		, _seats
	]
};

dzn_ABME_fnc_addFullCrew = {
	params["_v", "_cargoSeats"];
	
	createVehicleCrew _v;
	private _uCrew = (crew _v select 0);
	for "_i" from 1 to _cargoSeats do {
		private _u = (group _uCrew) createUnit [typeOf _uCrew, position _uCrew, [], 0, "FORM"];
		_u moveInCargo _v;
	};
};

dzn_ABME_fnc_removeAllCrew = {
	private _crew = crew _this;
	{ moveOut _x; sleep 0.001; deleteVehicle _x; } forEach _crew;
};

dzn_ABME_fnc_getData = {
	private _v = _this;
	private _crew = fullCrew _v;
	private _data = [];
	
	{
		_x params ["_u", "_role", "_cargoIndex", "_turretPath"];
		
		_role = if (toLower(_role) in ["driver","turret","cargo"]) then { toLower(_role) } else { "turret" };		
		
		
		
		
		_data pushBack [
			_role
			, if (_role == "turret") then { _turretPath } else { _cargoIndex }
			, _v worldToModelVisual (getPos _u)
		];
	} forEach _crew;
	
	[typeOf _v, _data]
/*
Driver_
SelectionPosition 
	getText (configFile >> "cfgVehicles" >> _vehicle >> "memoryPointsGetInDriver");
	(vehicle player) selectionPosition "pos driver"

	
	[_x,3] call BIS_fnc_cutDecimals // rounding to 3 digits
	
	BoundingBoxes for vehicles with [0,0,0] position:
	
	bbxc = boundingCenter vehicle player;
	bbx = boundingBoxReal vehicle player;
	dX = abs ((bbx select 0 select 0) - (bbx select 1 select 0));
	dY = abs ((bbx select 0 select 1) - (bbx select 1 select 1));
	dZ = abs ((bbx select 0 select 2) - (bbx select 1 select 2));

	Driver Position:
		a) 1/2 of 1/3 dY, left 
		b) 1/2 of 1/3 dY, right:	
						player setPosATL (V modelToWorld [
							0.75 * (bbx select 1 select 0)
							,(bbx select 1 select 1)*0.75 (APCs) *0.25 (tanks)
							, -1*(bbxc select 2)
						])
		c) front (max dY), center:	V modelToWorld [0, 1 (APC) or 0.75(for tanks)(bbx select 1 select 1), -1*(bbxc select 2)]
		
	Gunner:
		a) Central, left
		b) Central, right
	
	
	
	
	
	
	
		Gunner/Commander
		  |
	          |     Driver
	          |      |
	|------------------|
	|                  |
  Cargo	|              >   | -- Driver
	|                  |
	|------------------|
	         |       |
	         |      Driver
	         |
	         Gunner/Commander
	         
	         
	         
	         
	
[
	[B Alpha 1-5:1,"driver",-1,[],false]
	,[B Alpha 1-5:4,"cargo",0,[],false]
	,[B Alpha 1-5:5,"cargo",1,[],false]
	,[B Alpha 1-5:6,"cargo",2,[],false]
	,[B Alpha 1-5:7,"cargo",3,[],false]
	,[B Alpha 1-5:8,"cargo",4,[],false]
	,[B Alpha 1-5:9,"cargo",5,[],false]
	,[B Alpha 1-5:10,"cargo",6,[],false]
	,[B Alpha 1-5:2,"gunner",-1,[0],false]
	,[B Alpha 1-5:3,"commander",-1,[0,0],true]
]
*/

};

dzn_ABME_fnc_collectData = {
	ABME_Log = [];
	
	private _vehicles = call dzn_ABME_fnc_getVehicleClasses;
	private _pos = player modelToWorld [0,10,0];
	private _indx = 0;
	
	{
		
		private _vClass = configName(_x);
		private _v = _vClass createVehicle _pos;
		_v allowDamage false;
		
		private _seats = (_v call dzn_ABME_fnc_getSeats);
		
		if ((_seats select 0) > 0) then {
			hint format ["%1 has seats", _vClass];
			[_v, _seats select 1] call dzn_ABME_fnc_addFullCrew;
			
			ABME_Log pushBack format ["%1 has seats", _vClass];
			ABME_Log pushback (fullCrew _v);
			
		} else {
			ABME_Log pushBack format ["%1 has no seats", _vClass];
		
		};		
		
		sleep 0.02;
		
		{ moveOut _x; sleep 0.001; deleteVehicle _x; } forEach (crew _v);
		deleteVehicle _v;
		
		sleep 0.1;
		
		_indx = _indx + 1;
		if (_forEachIndex > 200) exitWith {};
	} forEach _vehicles;
	
	hint format ["DONE | %1 processed", _indx];
};
