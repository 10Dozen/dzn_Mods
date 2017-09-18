class CfgPatches
{
	class tS_Flares
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_MAIN"};
		author[] = {"10Dozen"};
	};
};

class CfgAmmo
{
	class FlareCore;
	class FlareBase;
	// 82mm
	class Flare_82mm_AMOS_White : FlareCore
	{
		timeToLive = 30;
        	brightness = 200;
        	intensity  = 1000000;
	};
	
	// 120mm 
	class rhs_ammo_s463 : Flare_82mm_AMOS_White
	{
		timeToLive = 30;
		brightness = 300;
	};
	
	
	/*
	rhs_ammo_3WS23 : Flare_82mm_AMOS_White
	rhs_ammo_s463 : Flare_82mm_AMOS_White
	rhs_ammo_3vs25m : Flare_82mm_AMOS_White
	rhs_ammo_m314_ilum : Flare_82mm_AMOS_White
	CUP_Sh_105_ILLUM : Flare_82mm_AMOS_White
	CUP_Sh_122_ILLUM : Flare_82mm_AMOS_White
	
	*/
};
