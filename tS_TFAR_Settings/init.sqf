[] spawn {
	if (!isNil "tS_TFAR_Disable") exitWith {};
	tS_TFAR_Disable = false;
	
	["tS_TFAR_Override", "onEachFrame", {
		if (
			(
			!tf_no_auto_long_range_radio
			
			|| !tf_same_sw_frequencies_for_side
			|| !tf_same_lr_frequencies_for_side
			|| !tf_same_dd_frequencies_for_side
			
			|| tf_give_personal_radio_to_regular_soldier
			|| tf_give_microdagr_to_soldier
			)
			&& !tS_TFAR_Disable
			&& time < 10
		) then {
			tf_no_auto_long_range_radio = true; 
			
			tf_same_sw_frequencies_for_side = true; 
			tf_same_lr_frequencies_for_side = true; 
			tf_same_dd_frequencies_for_side = true;	
			
			tf_give_personal_radio_to_regular_soldier = false; 
			tf_give_microdagr_to_soldier = false;
		};
	}] call BIS_fnc_addStackedEventHandler;
};
