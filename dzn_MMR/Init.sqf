dzn_MMR_Map = [
	#include "MMR Mapping.sqf"
];

dzn_MMR_RepackLoggingInfo = [];
dzn_MMR_Log = [];

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

/*
	[] spawn {
	A = true;
	while { A } do {
		sleep 0.5;
		_p = [];
		{ _p pushBackUnique _x; } forEach (magazines player);
		copyToClipboard str(_p select 0);
	};
	};

*/