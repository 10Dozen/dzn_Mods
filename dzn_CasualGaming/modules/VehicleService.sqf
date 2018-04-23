/*
 *	Vehicle Service
 *
*/

dzn_CG_fnc_serviceVehicle = {
	private _title = "";
	private _veh = vehicle player;
	
	switch (_this) do {
		case 0: {
			_title = "Repaired";
			_veh setDamage 0;
		};
		case 1: {
			_title = "Refueled";
			_veh setFuel 1;
		};
		case 2: {
			_title = "Rearmed";
			_veh setVehicleAmmo 1;
		};
	};

	hint parseText format ["<t size='1.5' color='#FFD000' shadow='1'>Vehicle Service</t><br /><br />%1", toUpper(_title)];
};
