
class CfgPatches
{
	class tS_LayGrass
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_MAIN","ace_common","ace_interact_menu"};
		author[] = {"10Dozen"};
	};
};

class Extended_PostInit_EventHandlers
{
	class tS_LayGrass
	{
		clientInit = "call ('\tS_LayGrass\init.sqf' call SLX_XEH_COMPILE)";
	};
};
