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
	@SeatIndex: Cargo index or turret path
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

dzn_ABME_fnc_collectData = {
	A1 = [];
	
	private _vehicles = call dzn_ABME_fnc_getVehicleClasses;
	private _pos = player modelToWorld [0,10,0];
	
	{
		
		private _vClass = configName(_x);
		private _v = _vClass createVehicle _pos;
		_v allowDamage false;
		
		private _seats = (_v call dzn_ABME_fnc_getSeats);
		
		if ((_seats select 0) > 0) then {
			hint format ["%1 has seats", _vClass];
			
			createVehicleCrew _v;
			
			private _uCrew = (crew _v select 0);
			
			for "_i" from 1 to (_seats select 1) do {
				private _u = (group _uCrew) createUnit [typeOf _uCrew, position _uCrew, [], 0, "FORM"];
				_u moveInCargo _v;
			};
			
			A1 pushback (fullCrew _v);
			
		};		
		
		sleep 0.1;
		
		{ moveOut _x; sleep 0.001; deleteVehicle _x; } forEach (crew _v);
		deleteVehicle _v;
		if (_forEachIndex > 200) exitWith {};
	} forEach _vehicles;
};
