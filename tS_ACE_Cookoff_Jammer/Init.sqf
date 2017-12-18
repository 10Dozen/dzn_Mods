
// Variables
// tS_ACE_Cookoff_Jammer_Enabled
// tS_ACE_Cookoff_Jammer_CheckTimeout
tS_ACE_Cookoff_Jammer_StructuralDamageDefault = 20;
tS_ACE_Cookoff_Jammer_timeoutRange = [45, 60, 75];

// [@Class, @StructuralDamageLimit]
tS_ACE_Cookoff_Jammer_nonCookingVehicles = [
	["CUP_BMP2_HQ_Base", tS_ACE_Cookoff_Jammer_StructuralDamageDefault]
	,["CUP_BMP2_Ambul_Base", tS_ACE_Cookoff_Jammer_StructuralDamageDefault]
	,["CUP_BRDM2_Base", 10]
	,["CUP_BTR40_MG_Base", 10]
	,["CUP_BTR60_Base", 10]
	,["CUP_GAZ_Vodnik_Base", 12]
	,["CUP_M113_Base", 12]
	,["CUP_AAV_Base"	, 15]
	,["CUP_BAF_Jackal2_BASE_D", 10]
	,["CUP_Mastiff_Base", 12]
	,["CUP_RG31_BASE", 12]
	,["CUP_Ridgback_Base", 12]
	,["CUP_B_LAV25M240_USMC", tS_ACE_Cookoff_Jammer_StructuralDamageDefault]
	,["CUP_B_LAV25_HQ_USMC", tS_ACE_Cookoff_Jammer_StructuralDamageDefault]
	,["CUP_StrykerBase", tS_ACE_Cookoff_Jammer_StructuralDamageDefault]
	,["CUP_FV432_Bulldog_Base", tS_ACE_Cookoff_Jammer_StructuralDamageDefault]
	,["rhs_btr_base", 15]
	,["rhsusf_m113tank_base", 15]
	,["rhsusf_rg33_base", 12]
];

tS_ACE_Cookoff_Jammer_cookingVehicles = [
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

// Settings
#include "Settings.sqf"

// Functions
#include "Functions.sqf"

// Apply settings
tS_ACE_Cookoff_Jammer_timeoutRange = [
    tS_ACE_Cookoff_Jammer_TimeoutMin
    ,  floor (tS_ACE_Cookoff_Jammer_TimeoutMin + tS_ACE_Cookoff_Jammer_TimeoutMax)/2
    , tS_ACE_Cookoff_Jammer_TimeoutMax
];
tS_ACE_Cookoff_Jammer_nonCookingVehicles = call compile format ["[%1]", tS_ACE_Cookoff_Jammer_NonCookingList];
tS_ACE_Cookoff_Jammer_cookingVehicles = tS_ACE_Cookoff_Jammer_CookingList splitString ", ";

// Initialization
if (!tS_ACE_Cookoff_Jammer_Enabled) exitWith {};

// Loop throu all vehicles and set cookoff variable to false
[] spawn {
	while { true } do {
		{
			private _v = _x;
			private _vehicleNonCookoffSettings = tS_ACE_Cookoff_Jammer_nonCookingVehicles select { _v isKindOf (_x select 0) };
			private _isCooking = ({ _v isKindOf _x } count tS_ACE_Cookoff_Jammer_cookingVehicles) > 0;
			if (
				!_isCooking
				&& !(_vehicleNonCookoffSettings isEqualTo [])
				&& isNil {_v getVariable "ace_cookoff_enable"}
			) then {
				_v setVariable ["ace_cookoff_enable", false, true];
				_v setVariable ["ace_cookoff_overallStructuralDamage", damage _v, true];
				_v setVariable [
					"ace_cookoff_structuralDamageMax"
					, _vehicleNonCookoffSettings select 0 select 1
					, true
				];
				_v remoteExec ["tS_ACE_Cookoff_Jammer_fnc_addDamageHandler", 0];

				sleep .01;
			};
		} forEach vehicles;

		sleep tS_ACE_Cookoff_Jammer_CheckTimeout;
	};
};