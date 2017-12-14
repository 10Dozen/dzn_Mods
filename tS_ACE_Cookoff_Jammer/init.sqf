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

// Functions
tS_ACE_Cookoff_Jammer_fnc_addDamageHandler = {
	_this addEventHandler [
		"HandleDamage"
		, { 
			params ["_vehicle", "", "_damage", "_source", "_ammo", "_hitIndex", "_shooter", "_hitpoint"];
			if (damage _vehicle >= 1) exitWith {};
			
			if (_hitIndex == -1) then { _hitpoint = "#structural"; };
			
			switch toLower(_hitpoint) do {
				case "hitengine";
				case "hitfuel": {
					if (
						_damage > 0.9 
						&& !(_vehicle getVariable ["ace_cookoff_infire",false])
					) then {
						_vehicle call ace_cookoff_fnc_engineFire;
						_vehicle setVariable ["ace_cookoff_infire", true, true];
						_vehicle setVariable ["ace_cookoff_fireStarted", time, true];
						_vehicle spawn {
							private _timeout = floor random tS_ACE_Cookoff_Jammer_timeoutRange;
							
							waitUntil {
								sleep 1; 
								(_this getVariable "ace_cookoff_fireStarted") + _timeout < time
							};
					
							_this setDamage 1;				
						};
					};
					
					_damage
				};
				
				case "hithull";
				case "#structural": {
					_damage min 0.89
				};

				default {
					// _vehicle setHitPointDamage [_hitpoint, _damage];
					_damage
				};
			}
		}
	];
};

// Loop throu all vehicles and set cookoff variable to false
[] spawn {
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
				_v remoteExec ["tS_ACE_Cookoff_Jammer_fnc_addDamageHandler", 0];
				
				sleep .01;
			};
		} forEach vehicles;

		sleep 30;
	};
};
