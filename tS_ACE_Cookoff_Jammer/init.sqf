// Loop throu all vehicles and set cookoff variable to false
[] spawn {
	private _cookingVehicles = [
		"Tank_F"
		,"CUP_BMP1_base","CUP_BMP1P_base","CUP_BMP2_base","CUP_BMP3_Base"
		,"CUP_BRDM2_ATGM_Base"
		,"CUP_M163_Base"
		,"CUP_B_M1135_ATGMV_Desert"
		,"CUP_B_M1128_MGS_Desert"
		
		,"CUP_GAZ_Vodnik_BPPU_Base"
		
		,"rhs_btr80a_msv","rhs_btr80a_vdv","rhs_btr80a_vv","rhs_btr80a_vmf"
		
	];
	
	private _nonCoockingVehicles = [
		"CUP_BMP2_HQ_Base"
		,"CUP_BMP2_Ambul_Base"
		,"CUP_BRDM2_Base"		
		,"CUP_BTR40_MG_Base"
		,"CUP_BTR60_Base"
		,"CUP_GAZ_Vodnik_Base"
		
		
		,"CUP_M113_Base"
		,"CUP_AAV_Base"		
		,"CUP_BAF_Jackal2_BASE_D"
		,"CUP_Mastiff_Base"
		,"CUP_RG31_BASE"
		,"CUP_Ridgback_Base"
		,"CUP_B_LAV25M240_USMC"
		,"CUP_B_LAV25_HQ_USMC"
		,"CUP_StrykerBase"
		,"CUP_FV432_Bulldog_Base"
		
		,"rhs_btr_base"
		,"rhsusf_m113tank_base"
		,"rg33_base"
		
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
