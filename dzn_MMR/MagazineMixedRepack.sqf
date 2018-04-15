dzn_MMR_fnc_getAllMagazinesFromConfig = {
	private _allMags = "getNumber (_x >> 'scope') == 2" configClasses (configFile >> "CfgMagazines");
	private _list = [];
	
	{
		_list pushBack (format [
			"%1 @ %2 @ %3"
			, getText (configFile >> "CfgMagazines" >> configName _x >> "displayName")
			, configName _x
			, getText (configFile >> "CfgMagazines" >> configName _x >> "dlc")
		]);	
	} forEach _allMags;
	
	_list
};

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
player addAction ["TEST Mixed Repack (Primary Weapon)", { [] spawn dzn_MMR_Test1 }];

player addAction ["Test case: AK74", {
	removeAllWeapons player;
	(magazines player) apply { player removeMagazines (_x) };
	
	player addWeapon "rhs_weap_ak74mr_grip1";
	player addMagazines ["CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", 4];
	
	hint "AK74 ADDED";
}];
player addAction ["Test case: AK74 Random", {
	removeAllWeapons player;
	(magazines player) apply { player removeMagazines (_x) };
	
	player addWeapon "rhs_weap_ak74mr_grip1";
	for "_i" from 0 to 3 do {
		player addMagazine ["CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", 10 + ceil(random(60))];
	};
	
	hint "AK74 w. random ADDED";
}];

dzn_MMR_Test1 = {
	removeAllWeapons player;
	(magazines player) apply { player removeMagazines (_x) };
	
	player addWeapon "rhs_weap_ak74mr_grip1";
	for "_i" from 0 to 3 do {
		player addMagazine ["CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", 10 + ceil(random(60))];
	};
	
	hint "AK74 w. random ADDED";
	
	private _totalAmmo = 0;
	{ _totalAmmo = _totalAmmo + (_x select 1); } forEach (magazinesAmmoFull player);
	
	sleep 1;
	
	call dzn_MMR_fnc_Action;
	
	private _totalAmmo2 = 0;
	{ _totalAmmo2 = _totalAmmo2 + (_x select 1); } forEach (magazinesAmmoFull player);

	hint format["Before: %1 vs %2 :After => %3", _totalAmmo, _totalAmmo2, _totalAmmo == _totalAmmo2];
};

/*
[["hlc_rifle_g3a3","CUP_arifle_Mk17_STD_SFG"],[1,1]]
[["hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_T_G3","CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR","CUP_20Rnd_762x51_B_SCAR"],[7,4,6,1]]
*/


dzn_MMR_RepackLoggingInfo = [];
dzn_MMR_Log = [];


dzn_MMR_Map = [
	#include "MMR Mapping.sqf"
];


dzn_MMR_fnc_GetMapped = {
	/* @MappedMagazinesList = @Magazine call dzn_MMR_GetMapped */
	private _mapped = dzn_MMR_Map select { toLower(_this) == toLower(_x select 0) };
	
	if (count _mapped > 0) then {
		(_mapped select 0) apply { toLower(_x) }
	} else {
		[]
	}
};


dzn_MMR_fnc_GetMapped2 = {
	/* @MappedMagazinesList = @Magazine call dzn_MMR_GetMapped */
	private _mapped = dzn_MMR_Map select { _this in _x };
	
	if (count _mapped > 0) then {
		_mapped select 0
	} else {
		[]
	}
};

dzn_MMR_fnc_Convert2 = {
	params["_mag","_convertedMag"];
	
	private _mags = (magazinesAmmoFull player) select { _mag in _x };
	private _totalAmmo = 0;
	{ _totalAmmo = _totalAmmo + (_x select 1); } forEach _mags;
	
	player removeMagazines _mag;
};


dzn_MMR_fnc_Convert = {
	params["_mag","_convertedMag"];
	
	private _mags = (magazinesAmmoFull player) select { _mag == toLower(_x select 0) };
	private _magCount = count _mags;
	private _convertedMagCount = 0;
	
	dzn_MMR_Log pushBack [
		"Conversion started for mag: "
		, _mag
		, "Mag count"
		, _magCount
	];
	
	player removeMagazines _mag;
	
	{
		private _magAmmo = _x select 1;
		private _convertMagAmmo = getNumber (configFile >> "CfgMagazines" >> _convertedMag >> "count");
		private _count = ceil (_magAmmo / _convertMagAmmo);
		_convertedMagCount = _convertedMagCount + _count;
		
		dzn_MMR_Log pushBack ["For mag", _x, "Mag Ammo", _magAmmo, "Conver Mag Ammo ", _convertMagAmmo, "Count ", _count, "ConvertedMagCount", _convertedMagCount];
		
		for "_i" from 1 to _count do {
			if ( _convertMagAmmo >= _magAmmo) then {
				dzn_MMR_Log pushBack ["Adding mag ", _convertedMag, _magAmmo];
				player addMagazine [_convertedMag, _magAmmo];
				_magAmmo = 0;
			} else {
				
				player addMagazine [_convertedMag, _convertMagAmmo];
				_magAmmo = _magAmmo - _convertMagAmmo;
				dzn_MMR_Log pushBack ["Adding mag ", _convertedMag, _convertMagAmmo, "Ammo left", _magAmmo];
			};
		};
	} forEach _mags;
	
	[_mag, _convertedMag, _magCount, _convertedMagCount] call dzn_MMR_fnc_AddLogLine;
};

dzn_MMR_fnc_Action = {	
	
	
	private _mags = [];
	{ _mags pushBackUnique toLower(_x); } forEach (magazines player);
	
	
	private _primaryWeaponAllMags = (getArray (configFile >> "CfgWeapons" >> primaryWeapon player >> "magazines")) apply { toLower(_x) };
	private _showNoRepackHint = true;
	dzn_MMR_RepackLoggingInfo = [];
	
	dzn_MMR_Log = [];
	dzn_MMR_Log pushBack format ["Mags in inventory: %1", str(_mags)];
	dzn_MMR_Log pushBack ["Primary weapon mags", _primaryWeaponAllMags];
	
	{
		private _mag = _x;
		dzn_MMR_Log pushBack ["Check mag", _mag];
		
		if !(_mag in _primaryWeaponAllMags) then {
			_mapped = _mag call dzn_MMR_fnc_GetMapped;
			
			dzn_MMR_Log pushBack ["Mapped mags",_mapped];			
			dzn_MMR_Log pushBack format ["Found in any primary mag in mapped?: %1", !((_primaryWeaponAllMags select { _x in _mapped}) isEqualTo [])];			
			
			if !((_primaryWeaponAllMags select { _x in _mapped}) isEqualTo []) then {
				_targetMag = (_mapped - [_mag] - (_mapped - [_mag] - _primaryWeaponAllMags)) select 0;
				
				player sideChat format ["Conversation of %1 to %2", _mag, _targetMag];
				_showNoRepackHint = false;
				
				dzn_MMR_Log pushBack ["Convert", _mag, _targetMag];
				[_mag, _targetMag] call dzn_MMR_fnc_Convert;
			} else {
				player sideChat format ["No conversation target for %1", _mag];
			};
		};	
	} forEach _mags;
	
	if (_showNoRepackHint) then {
		dzn_MMR_RepackLoggingInfo pushBack 
		hint parseText format [
			"<t color='#86CC5E'>No mags to repack for</t> %1"
			, getText (configFile >> "CfgWeapons" >> primaryWeapon player >> "displayName")
		];
	} else {
		call dzn_MMR_fnc_ShowHint;
	};
};



dzn_MMR_fnc_AddLogLine = {
	params ["_mag", "_convertedMag", "_count", "_convertedMagCount"];
	
	
	dzn_MMR_RepackLoggingInfo pushBack format [
		"<t color='#86CC5E'>Repacked </t> %1x %2 <t color='#86CC5E'>to</t> %3x %4"
		, _count
		, getText (configFile >> "CfgMagazines" >> _mag >> "displayName")
		, _convertedMagCount
		, getText (configFile >> "CfgMagazines" >> _convertedMag >> "displayName")
	];
};

dzn_MMR_fnc_ShowHint = {
	private _hint = "<t size='1.5' color='#ffdd32'>Mixed-mod Repack</t>";
	private _arr = dzn_MMR_RepackLoggingInfo call BIS_fnc_consolidateArray;

	{ 
		_hint = format ["%1<br />%2", _hint, _x]; 		
	} forEach dzn_MMR_RepackLoggingInfo;
	
	hint parseText _hint;
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
	
