#include "macro.hpp";

// Variables
// GVAR(Enabled)
// GVAR(CheckTimeout)
GVAR(StructuralDamageDefault) = 20;
GVAR(timeoutRange) = [45, 60, 75];

// [@Class, @StructuralDamageLimit]
GVAR(nonCookingVehicles) = [
	["CUP_BMP2_HQ_Base", GVAR(StructuralDamageDefault)]
	,["CUP_BMP2_Ambul_Base", GVAR(StructuralDamageDefault)]
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
	,["CUP_B_LAV25M240_USMC", GVAR(StructuralDamageDefault)]
	,["CUP_B_LAV25_HQ_USMC", GVAR(StructuralDamageDefault)]
	,["CUP_StrykerBase", GVAR(StructuralDamageDefault)]
	,["CUP_FV432_Bulldog_Base", GVAR(StructuralDamageDefault)]
	,["rhs_btr_base", 15]
	,["rhsusf_m113tank_base", 15]
	,["rhsusf_rg33_base", 12]
];

GVAR(cookingVehicles) = [
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
GVAR(timeoutRange) = [
    GVAR(TimeoutMin)
    ,  floor (GVAR(TimeoutMin) + GVAR(TimeoutMax))/2
    , GVAR(TimeoutMax)
];
GVAR(nonCookingVehicles) = call compile format ["[%1]", GVAR(NonCookingList)];
GVAR(cookingVehicles) = GVAR(CookingList) splitString ", ";

// Initialization
if (!GVAR(Enabled)) exitWith {};


// Loop throu all vehicles and set cookoff variable to false
[] spawn {
	call GVAR(fnc_public);
	while { true } do {
		{
			private _v = _x;
			private _vehicleNonCookoffSettings = GVAR(nonCookingVehicles) select { _v isKindOf (_x select 0) };
			private _isCooking = ({ _v isKindOf _x } count GVAR(cookingVehicles)) > 0;
			if (
				!_isCooking
				&& !(_vehicleNonCookoffSettings isEqualTo [])
				&& isNil {_v getVariable "ace_cookoff_enable"}
			) then {
				_v setVariable ["ace_cookoff_enable", false, true];
				_v setVariable ["dzn_VOF_overallStructuralDamage", damage _v, true];
				_v setVariable [
					"dzn_VOF_structuralDamageMax"
					, _vehicleNonCookoffSettings select 0 select 1
					, true
				];
				_v remoteExec [SVAR(fnc_addDamageHandler), 0, true];

				sleep .01;
			};
		} forEach vehicles;

		sleep GVAR(CheckTimeout);
	};
};