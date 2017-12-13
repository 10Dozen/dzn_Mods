// Loop throu all vehicles and set cookoff variable to false
[] spawn {
	private _cookingVehicles = [
		"CUP_BRDM2_ATGM_Base"
		,"CUP_M163_Base"
		,"CUP_B_M1135_ATGMV_Desert"
		,"CUP_B_M1128_MGS_Desert"		
		,"CUP_GAZ_Vodnik_BPPU_Base"		
		,"rhs_btr80a_msv"
		,"rhs_btr80a_vdv"
		,"rhs_btr80a_vv"
		,"rhs_btr80a_vmf"		
	];
	
	private _nonCookingVehicles = [
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
		,"rhsusf_rg33_base"		
	];
	
	while { true } do {
		{
			private _v = _x;
			private _isCooking = ({ _v isKindOf _x } count _cookingVehicles) > 0;
			private _isNotCoocking = ({ _v isKindOf _x } count _nonCookingVehicles) > 0;
			if (
				!_isCooking 
				&& _isNotCoocking
				&& isNil {_v getVariable "ace_cookoff_enable"}
			) then {
				_v setVariable ["ace_cookoff_enable", false, true];
				_v addEventHandler ["HandleDamage", {
					params ["_vehicle", "", "_damage", "_source", "_ammo", "_hitIndex", "_shooter"];
					
					if (damage _vehicle >= 1) exitWith {};
					// get hitpoint name
					private _hitpoint = "#structural";

					if (_hitIndex != -1) then {
					    _hitpoint = toLower ((getAllHitPointsDamage _vehicle param [0, []]) select _hitIndex);
					};

					// get change in damage
					private _oldDamage = if (_hitpoint isEqualTo "#structural") then {
					     damage _vehicle;
					} else {
					    _oldDamage = _vehicle getHitIndex _hitIndex;
					};
					private _newDamage = _damage - _oldDamage;
					
					if (_hitpoint in ["hithull", "hitfuel", "#structural"]) then {
						_damage min 0.89
						// There should be delay before blowup if damage > 0.9
					} else {
						if (_hitpoint isEqualTo "hitengine" && {_damage > 0.9}) then {
						    _vehicle call ace_cookoff_fnc_engineFire;
						};
						_damage
					};
				}];
				
				sleep .01;
			};
		} forEach vehicles;

		sleep 30;
	};
};
