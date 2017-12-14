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
				_v addEventHandler ["HandleDamage", { _this call dzn_handle2}];
				
				sleep .01;
			};
		} forEach vehicles;

		sleep 30;
	};
};

AlogId2 = 0;
Alog2 = [];
Afinal2 = 0;
Ahit2 = "";
dzn_handle2 = {
	params ["_vehicle", "", "_damage", "_source", "_ammo", "_hitIndex", "_shooter", "_hitpoint"];
	
	Ahit2 = _this;
	
	if (damage _vehicle >= 1) exitWith {};
	
	if (_hitIndex == -1) then {
		_hitpoint = "#structural";
	};
	
	AlogId2 = AlogId2 + 1;
	Alog2 pushBack format ["Log Id %1", AlogId2];
	Alog2 pushBack _hitpoint;
	Alog2 pushBack ["hit index", _hitIndex];
	Alog2 pushBack ["damage", _damage];
	
	private _finalDamage = switch toLower(_hitpoint) do {
		case "hitengine";
		case "hitfuel": {
			Alog2 pushBack "Engine/Fuel damage";
			
			if (_damage > 0.9 && !(_vehicle getVariable ["ace_cookoff_infire",false])) then {
				_vehicle call ace_cookoff_fnc_engineFire;
				_vehicle setVariable ["ace_cookoff_infire", true, true];
				_vehicle setVariable ["ace_cookoff_fireStarted", time, true];
				_vehicle spawn {
					waitUntil {
						sleep 1; 
						(_this getVariable "ace_cookoff_fireStarted") + 45 < time
					};
					
					_this setDamage 1;				
				};
				Alog2 pushBack "Engine fire";
			};
			_damage
		};
		
		case "hithull";
		case "#structural": {
			Alog2 pushBack "Structural hit";
			_damage min 0.89
		};
		
		default {
			
			_vehicle setHitPointDamage [_hitpoint, _damage];
			Alog2 pushBack ["Non-structural hit", _hitpoint, _damage, "Final hitpoint damage:", _vehicle getHitPointDamage _hitpoint];
			_damage
		};
	};
	
	Afinal = _finalDamage;
	Alog2 pushBack ["Final damage", _finalDamage];
	
	_finalDamage
};
