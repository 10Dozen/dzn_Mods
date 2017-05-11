// Loop throu all vehicles and set cookoff variable to false
[] spawn {
	private _cookingVehicles = [
		"Tank_F"
		,"CUP_BMP1_base","CUP_BMP1P_base","CUP_BMP2_base","CUP_BMP3_Base"
		,"CUP_BRDM2_ATGM_Base"
		,"CUP_M163_Base"
		
	];
	
	private _nonCoockingVehicles = [
		"CUP_BMP2_HQ_Base", CUP_BMP2_Ambul_Base
		,"CUP_BRDM2_Base"
		,"CUP_M113_Base"
		,"BTR40_MG_Base", "CUP_BTR60_Base"
	];
	
	while { true } do {
		{
			private _v = _x;			
			if (
				(
					(
						({ _v isKindOf _x } count _cookingVehicles) == 0 
						&& ({ _v isKindOf _x } count _nonCoockingVehicles) > 0
					)
					|| ({ _v isKindOf _x } count _nonCoockingVehicles) > 0
				)
				&& !isNil {_v getVariable "ace_cookoff_enable"}
			) then {
				_v setVariable ["ace_cookoff_enable", false, true];
				sleep .01;
			};
		} forEach allVehicles;

		sleep 30;
	};
};

/*
	private _listOfNonCookingVehicles = [	
		"CUP_StrykerBase"
		,"RG31_BASE"
		,"CUP_B_LAV25M240_USMC"
		,"CUP_B_LAV25_HQ_USMC"
		,"Mastiff_Base"		
	];
	
	
*/
