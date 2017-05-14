/*
 *	Allows to instantly lay down grass under player
 */

private _layDownAction = [
	"dzn_layGrass_action"
	, "Lay grass"
	, ""
	, {
		if (!isNil "LayGrassObj") then { deleteVehicle LayGrassObj; };
		private _pos = player modelToWorldVisual [0, 0.75, 0];

		LayGrassObj = "Land_Grave_dirt_F" createVehicleLocal _pos;
		LayGrassObj setDir 90+(getDir player);
		LayGrassObj setPosATL _pos;	
		LayGrassObj setVectorUp (surfaceNormal (getPosATL LayGrassObj));
		
		LayGrassObj hideObject true;
	}
	, { vehicle player == player  && (getPosATL player select 2) < 0.5 }
]  call ace_interact_menu_fnc_createAction; 

[typeOf player, 1, [ "ACE_SelfActions" ], _layDownAction ] call ace_interact_menu_fnc_addActionToClass;
