[] spawn {
	if (!isNil "tS_TFAR_Disable") exitWith {};
	tS_TFAR_Disable = false;
	
	tf_same_lr_frequencies_for_side 		= true; 
	
	// tf_no_auto_long_range_radio 			= false; 
	// tf_same_sw_frequencies_for_side 		= true;
	// tf_same_dd_frequencies_for_side 		= true;	
	// tf_give_personal_radio_to_regular_soldier 	= true; 
	// tf_give_microdagr_to_soldier			= false;		

	while { time < 15 } do {
		if (!tS_TFAR_Disable) then {
			tf_same_lr_frequencies_for_side 		= true; 
			
			// tf_no_auto_long_range_radio 			= false; 
			// tf_same_sw_frequencies_for_side 		= true; 
			// tf_same_dd_frequencies_for_side 		= true;	
			// tf_give_personal_radio_to_regular_soldier 	= true; 
			// tf_give_microdagr_to_soldier			= false;
			
			sleep .5;
		};
	};
};