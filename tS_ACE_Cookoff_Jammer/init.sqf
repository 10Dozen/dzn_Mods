// Variables
tS_ACE_Cookoff_Jammer_timeoutRange = [45, 60, 75];
tS_ACE_Cookoff_Jammer_nonCookingVehicles = [
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

// CBA Settings
#include "Settings.sqf"

if (!tS_ACE_Cookoff_Jammer_Enabled) exitWith {};

// Functions
#include "Functions.sqf"

// Loop throu all vehicles and set cookoff variable to false
[] spawn {
	publicVariable "tS_ACE_Cookoff_Jammer_fnc_addDamageHandler";
	publicVariable "tS_ACE_Cookoff_Jammer_fnc_setEffectFire ";
	publicVariable "tS_ACE_Cookoff_Jammer_timeoutRange";
	publicVariable "tS_ACE_Cookoff_Jammer_nonCookingVehicles";
	publicVariable "tS_ACE_Cookoff_Jammer_cookingVehicles";
	
	while { true } do {		
		{
			private _v = _x;
			private _isCooking = ({ _v isKindOf _x } count tS_ACE_Cookoff_Jammer_cookingVehicles) > 0;
			private _isNotCoocking = ({ _v isKindOf _x } count tS_ACE_Cookoff_Jammer_nonCookingVehicles) > 0;
			if (
				!_isCooking 
				&& _isNotCoocking
				&& isNil {_v getVariable "ace_cookoff_enable"}
			) then {
				_v setVariable ["ace_cookoff_enable", false, true];
				_v remoteExec ["tS_ACE_Cookoff_Jammer_fnc_addDamageHandler", 0];
				
				sleep .25;
			};
		} forEach vehicles;

		sleep tS_ACE_Cookoff_Jammer_CheckTimeout;
	};
};
