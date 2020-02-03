class CfgPatches
{
	class tS_Compatibility
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","cba_common"};
		author[] = {"Tactical Shift"};
		version = "1";
	};
};

class Extended_PostInit_EventHandlers
{
	class tS_Compatibility
	{
		init = call compile preprocessFileLineNumbers "\tS_Compatibility\Init.sqf";
	};
};

class CfgMagazineWells
{
	class PK_762x54R
	{
		tS_mags[] =
		{
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M",
			"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"
		};
	};
	
	class CBA_762x54R_LINKS
	{
		tS_mags[] =
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR_7N13",
			"rhs_100Rnd_762x54mmR_7N26",
			"rhs_100Rnd_762x54mmR_7BZ3"
		};  
	};
	
	class CBA_556x45_MINIMI
	{
		tS_mags[] = 
		{
			"rhs_200rnd_556x45_M_SAW"
			,"rhs_200rnd_556x45_T_SAW"
			,"rhs_200rnd_556x45_B_SAW"
		};
	};
};