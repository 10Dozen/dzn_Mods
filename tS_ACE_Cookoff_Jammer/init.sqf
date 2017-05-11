// Loop throu all vehicles and set cookoff variable to false
[] spawn {
	private _listOfNonCookingVehicles = [

	];
	
	while { true } do {
		{
			private _v = _x;			
			if (
				({ _v isKindOf _x } count _listOfNonCookingVehicles) > 0
				&& !isNil {_v getVariable "ace_cookoff_enable"}
			) then {
				_v setVariable ["ace_cookoff_enable", false, true];
				sleep .01;
			};
		} forEach allVehicles;

		sleep 30;
	};
};
