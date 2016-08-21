class CfgPatches
{
	class tS_TFAR_Settings
	{		
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CBA_MAIN", "task_force_radio"};
		author[] = {"10Dozen"};
	};
};

class Extended_PostInit_EventHandlers
{
	class tS_TFAR_Settings
	{
		init = "call ('\tS_TFAR_Settings\init.sqf' call SLX_XEH_COMPILE)";
	};
};
