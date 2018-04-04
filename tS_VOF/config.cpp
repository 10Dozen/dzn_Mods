class CfgPatches
{
	class tS_VOF
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
	class tS_VOF
	{
		serverInit = "call ('\tS_VOF\Init.sqf' call SLX_XEH_COMPILE)";
	};
};