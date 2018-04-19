call compile preProcessFileLineNumbers "EJAM\Functions.sqf";

// Testing
player addAction ["Jam", {  [player, currentWeapon player] call ace_overheating_fnc_jamWeapon }];
[typeof player, 1, ["ACE_SelfActions", "ACE_Equipment"], [
	"dzn_EJAM_ACE_Action_Inspect"
	, "Inspect Weapon"
	, ""
	, { [] spawn dzn_EJAM_fnc_ShowUnjamMenu; }
	, { 
		!((player getVariable "ace_overheating_jammedWeapons") isEqualTo [])
		&& player getVariable ["dzn_EJAM_CauseSet", false]
	}
] call ace_interact_menu_fnc_createAction] call ace_interact_menu_fnc_addActionToClass;
	
// Init
[] spawn {
	waitUntil { !isNil {player getVariable "ace_overheating_jammedWeapons"} };
	
	while { true } do {
		sleep 1;
		if ( 
			!((player getVariable "ace_overheating_jammedWeapons") isEqualTo [])
			&& !(player getVariable ["dzn_EJAM_CauseSet", false])
		) then {
			call dzn_EJAM_fnc_setJamCause;
		};
	};
};


/*
	In format 
	[
	  0@ID
	, 1@DisplayedName
	, 2@DisplayedInspectRescription
	, 3@ListOfActionIDsToFox
	, 4@[@BoltState, @ChamberState, @CaseState, @MagState]
	]
*/
dzn_EJAM_Causes = [
	[
		"feed_failure"
		,"Неподача патрона"
		,["bolt_closed","chamber_empty","case_ejected","mag_attached"]
		,["pull_bolt"]
	]
	,[
		"feed_failure_2"
		,"Утыкание патрона"
		,["bolt_not_closed","chamber_stucked","case_ejected","mag_attached"]
		,["open_bolt","detach_mag","clear_chamber"]
		
	]
	,[
		"dud"
		,"Осечка"
		,["bolt_closed","chamber_ready","case_ejected","mag_attached"]
		,["pull_bolt"]
	]
	,[
		"fail_to_extract"
		,"Неизвлечение гильзы"
		,["bolt_not_closed","chamber_not_extracted","case_not_ejected","mag_attached"]
		,["open_bolt","detach_mag","remove_case","clear_chamber"]
		
	]
	,[
		"fail_to_eject"
		,"Прихват гильзы"
		,["bolt_not_closed","chamber_empty","case_not_ejected","mag_attached"]
		,["open_bolt","remove_case"]
	]
];

// Weapon States; In format [@ID, @DisplayName]
dzn_EJAM_States = [
	["bolt_closed"			,"Затвор в переднем положении"]
	,["bolt_not_closed"		,"Затвор в среднем положении"]
	,["bolt_opened"			,"Затвор в заднем положении"]	
	,["chamber_empty"			,"Патронник пустой"]
	,["chamber_ready"			,"Патрон в патроннике"]
	,["chamber_stucked"		,"Патрон уткнулся"]
	,["chamber_not_extracted"	,"Гильза не извлечена"]	
	,["case_not_ejected"		,"Гильза не выброшена"]
	,["case_ejected"			,"Гильза выброшена"]	
	,["mag_attached"			,"Магазин присоединен"]
	,["mag_detached"			,"Магазин отсоединен"]
];

// Actions; In format [@ID, @DisplayName]
dzn_EJAM_FixActions = [
	["pull_bolt"		,"Передернуть затвор", { hint "Передернули затвор";  }]
	,["open_bolt"		,"Отвести затворную группу", { hint "Открыли затвор" }]
	,["clear_chamber"		,"Очистить патронник", { hint "Удалили патрон" }]
	,["remove_case"		,"Удалить гильзу", { hint "Удалили гильзу" }]
	,["detach_mag"		,"Отсоединить магазин", { hint "Отсоединили магазин" }]
	,["attach_mag"		,"Присоединить магазин", { hint "Присоединили магазин" }]
];

