
class CfgPatches
{
	class tS_ACE_Cookoff_Jammer
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_MAIN"};
		author[] = {"10Dozen"};
	};
};

class Extended_PostInit_EventHandlers
{
	class tS_ACE_Cookoff_Jammer
	{
		init = "call ('\tS_ACE_Cookoff_Jammer\init.sqf' call SLX_XEH_COMPILE)";
	};
};
