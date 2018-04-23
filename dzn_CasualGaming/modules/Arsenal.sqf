/*
 *	Arsenal & Garage
 *
*/

dzn_CG_fnc_openArsenal = {
	closeDialog 2;
	["Open", true] call BIS_fnc_Arsenal;
};

dzn_CG_fnc_openGarage = {
	closeDialog 2;

	BIS_fnc_garage_center = createVehicle ["Land_HelipadEmpty_F", player getPos [20,getDir player], [], 0, "CAN_COLLIDE" ];
	["Open", true] call BIS_fnc_garage;
};