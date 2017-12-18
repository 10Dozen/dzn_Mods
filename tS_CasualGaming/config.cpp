class CfgPatches
{
	class tS_CasualGaming
	{		
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_MAIN"};
		author[] = {"10Dozen"};
		version = "3";
	};
};

class Extended_PostInit_EventHandlers
{
	tS_CasualGamingXEH = call compile preprocessFileLineNumbers "\tS_CasualGaming\Init.sqf";
};
