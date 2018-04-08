/*
	magazinesAmmo player 
	
[["hlc_20rnd_762x51_T_G3",20]
,["CUP_20Rnd_762x51_B_SCAR",20]
,["CUP_20Rnd_762x51_B_SCAR",20]
,["hlc_20rnd_762x51_T_G3",20]
,["hlc_20rnd_762x51_T_G3",20]
,["hlc_20rnd_762x51_T_G3",20]
,["CUP_20Rnd_762x51_B_SCAR",20]
,["CUP_20Rnd_762x51_B_SCAR",20]]



	magazinesAmmoFull player  

0: Magazine class name 
1: Magazine current ammo count 
2: Magazine state (true - loaded, false - not loaded) 
3: Magazine type (-1 - n/a, 0 - grenade, 1 - primary weapon mag, 2 - handgun mag, 4 - secondary weapon mag, 65536 - vehicle mag) 
4: Magazine location ("Vest", "Uniform", "Backpack", "") or corresponding currentMuzzle


[["hlc_20rnd_762x51_T_G3",20,false,-1,"Vest"]
,["CUP_20Rnd_762x51_B_SCAR",20,false,-1,"Vest"]
,["CUP_20Rnd_762x51_B_SCAR",20,false,-1,"Vest"]
,["hlc_20rnd_762x51_T_G3",20,false,-1,"Vest"]
,["hlc_20rnd_762x51_T_G3",20,false,-1,"Backpack"]
,["hlc_20rnd_762x51_T_G3",20,false,-1,"Backpack"]
,["CUP_20Rnd_762x51_B_SCAR",20,false,-1,"Backpack"]
,["CUP_20Rnd_762x51_B_SCAR",20,false,-1,"Backpack"]
,["CUP_20Rnd_762x51_B_SCAR",20,true,1,"CUP_arifle_Mk17_STD_SFG"]
,["16Rnd_9x21_Mag",17,true,2,"hgun_P07_F"]]



	getArray (configFile >> "CfgWeapons" >> primaryWeapon player >> "magazines")

["CUP_20Rnd_762x51_B_SCAR"
,"CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"
,"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"
,"CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR"
,"CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"]


	unitName removeMagazines magazineName

	unitName addMagazine [magazineName, ammoCount]

	reload player
*/

player addAction ["Mixed Repack (Primary Weapon)", { call dzn_MMR_fnc_Action }];
player addAction ["Test case: G3", {
	removeAllWeapons player;
	(magazines player) apply { player removeMagazines (_x) };
	
	player addWeapon "hlc_rifle_g3a3";
	player addMagazines ["hlc_20rnd_762x51_b_G3", 2];
	player addMagazines ["CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR", 3];
	player addMagazines ["CUP_20Rnd_762x51_B_SCAR", 3];
	
	hint "G3 ADDED";
}];
player addAction ["Test case: Mk17", {
	removeAllWeapons player;
	(magazines player) apply { player removeMagazines (_x) };
	
	player addWeapon "CUP_arifle_Mk17_STD_SFG";
	player addMagazines ["CUP_20Rnd_762x51_B_SCAR", 2];
	player addMagazines ["hlc_20rnd_762x51_T_G3", 3];
	player addMagazines ["hlc_20rnd_762x51_b_G3", 3];
	
	hint "Mk17 ADDED";
}];

/*
[["hlc_rifle_g3a3","CUP_arifle_Mk17_STD_SFG"],[1,1]]
[["hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR","CUP_20Rnd_762x51_B_SCAR"],[7,4,6,1]]
*/




dzn_MMR_Map = [
	["CUP_20Rnd_762x51_B_SCAR", "hlc_20rnd_762x51_b_G3","Some_Other_Class"]
	,["CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR", "hlc_20rnd_762x51_T_G3","Some_Other_Class"]
];

dzn_MMR_fnc_GetMapped = {
	/* @MappedMagazinesList = @Magazine call dzn_MMR_GetMapped */
	private _mapped = dzn_MMR_Map select { _this in _x };
	
	if (count _mapped > 0) then {
		_mapped select 0
	} else {
		[]
	}
};

dzn_MMR_fnc_Convert = {
	params["_mag","_convertedMag"];
	
	private _mags = (magazinesAmmoFull player) select { _mag in _x };
	
	player removeMagazines _mag;
	
	{
		player addMagazine [	_convertedMag, _x select 1 ];
	} forEach _mags;
	
	hint parseText format [
		"<t color='#86CC5E'>Repacked from</t> %1 <t color='#86CC5E'>to</t> %2"
		, getText (configFile >> "CfgMagazines" >> _mag >> "displayName")
		, getText (configFile >> "CfgMagazines" >> _convertedMag >> "displayName")
	];
};

dzn_MMR_fnc_Action = {	
	private _mags = [];
	{ _mags pushBackUnique _x; } forEach (magazines player);
	
	private _primaryWeaponAllMags = getArray (configFile >> "CfgWeapons" >> primaryWeapon player >> "magazines");
	private _showNoRepackHint = true;
	
	{
		private _mag = _x;
		
		if !(_mag in _primaryWeaponAllMags) then {
			_mapped = _mag call dzn_MMR_fnc_GetMapped;
			
			if !((_primaryWeaponAllMags select { _x in _mapped}) isEqualTo []) then {
				_targetMag = (_mapped - [_mag] - (_mapped - [_mag] - _primaryWeaponAllMags)) select 0;
				
				player sideChat format ["Conversation of %1 to %2", _mag, _targetMag];
				_showNoRepackHint = false;
				
				[_mag, _targetMag] call dzn_MMR_fnc_Convert;
			} else {
				player sideChat format ["No conversation target for %1", _mag];
			};
		};	
	} forEach _mags;
	
	if (_showNoRepackHint) then {
		hint parseText format [
			"<t color='#86CC5E'>No mags to repack for</t> %1"
			, getText (configFile >> "CfgWeapons" >> primaryWeapon player >> "displayName")
		];
	};
};
	
	
	/*
		- Get mags types that player have (Mag1, Mag2)
		- Get all mags types available for weapon (Mag1, MagX, MagY)
		
		- Get mapped magazines for each mags that are not available for weapon (e.g. for Mag2 -> [Mag2, Mag1, MagZ..] )
		- Check if mags available for weapons are present in the mapped list ( e.g. Mag1 is in lisn [Mag2, Mag1, MagZ..] )
		
		- If not -> exit with Hint "nothing to convert"
		- Get pair of mag to convert and target mag (e.g. [Mag2, Mag1])
		
		- Call dzn_MMR_fnc_Convert using found pair
	*/
	
