dzn_MMR_Map = [
	#include "MMR Mapping.sqf"
];


call compile preProcessFileLineNumbers "MMR\Settings.sqf";
call compile preProcessFileLineNumbers "MMR\Functions.sqf";

// Add action to Briefing Note
[] spawn {
	waitUntil { !isNil "dzn_MMR_EnabledNote" };
	waitUntil { dzn_MMR_EnabledNote && time > 5 };
	
	player createDiarySubject ["dzn_MMR", "dzn Multi-mod Repack", "MMR\icon.paa"];
	player createDiaryRecord [
		"dzn_MMR"
		, ["Repack", "<img image='MMR\icon.paa' width='64' height='64'/> [ <font><executeClose expression='call dzn_MMR_fnc_Action'>REPACK</executeClose></font> ]"]
	];
};

// ACE Self-Interaction
[] spawn {
	waitUntil { !isNil "dzn_MMR_EnabledACEAction" };
	waitUntil { dzn_MMR_EnabledACEAction };

	private _action = [
		"dzn_MMR_ACE_Action"
		, "Multi-Mod Repack"
		, "MMR\icon.paa"
		, { call dzn_MMR_fnc_Action; }
		, { dzn_MMR_EnabledACEAction }
	] call ace_interact_menu_fnc_createAction;	
	
	[typeof player, 1, ["ACE_SelfActions", "ACE_RepackMagazines"], _action] call ace_interact_menu_fnc_addActionToClass;
};

dzn_MMR_RepackLoggingInfo = [];
dzn_MMR_Log = [];





/*
 *	TESTING
 */
 
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
