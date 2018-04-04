class CfgPatches
{
	class dzn_VOF
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
	class dzn_VOF
	{
		serverInit = "call ('\dzn_VOF\Init.sqf' call SLX_XEH_COMPILE)";
	};
};