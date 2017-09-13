class CfgPatches
{
	class dzn_GearXtra
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_MAIN"};
		magazines[] = {};
		ammo[] = {};
		
		version = "V0.1";
		author = "10Dozen";
	};
};

class Extended_PostInit_EventHandlers
{
	class dzn_gearXtra
	{
		clientInit = "call ('\dzn_GearXtra\init.sqf' call SLX_XEH_COMPILE)";
	};
};
