class CfgPatches
{
	class tS_Blurpression
	{		
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_MAIN"};
		author[] = {"10Dozen"};
	};
};

class Extended_PreInit_EventHandlers
{
	IWBSettings = call compile preprocessFileLineNumbers "\tS_Blurpression\Init.sqf";
};
