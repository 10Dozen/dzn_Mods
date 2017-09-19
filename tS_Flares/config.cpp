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

class Extended_PreInit_EventHandlers
{
	class tS_Flares_PreInit
	{
		clientInit = "call ('\tS_Flares\init.sqf' call SLX_XEH_COMPILE)";
	};
};

class Extended_Init_EventHandlers 
{
	class Flare_82mm_AMOS_White 
	{
		class tS_Flare_EH
		{
			init = "[_this, 'mortar'] spawn dzn_fnc_setFlareEffect;";
		};
	};

};
/*
class CfgAmmo
{
	class FlareCore;
	class FlareBase;
	// 82mm
	class Flare_82mm_AMOS_White : FlareCore
	{
		
	
		timeToLive = 30;
		brightness = 400;
		intensity  = 1000000;
	};
	// rhs_ammo_3vs25m : Flare_82mm_AMOS_White
	// rhs_ammo_3WS23 : Flare_82mm_AMOS_White
	
	// 105mm
	class rhs_ammo_m314_ilum : Flare_82mm_AMOS_White
	{
		timeToLive = 30;
		brightness = 500;
	};
	class CUP_Sh_105_ILLUM : Flare_82mm_AMOS_White
	{
		timeToLive = 30;
		brightness = 500;
	};
	
	
	// 120mm 
	class rhs_ammo_s463 : Flare_82mm_AMOS_White
	{
		timeToLive = 30;
		brightness = 750;
	};
	class CUP_Sh_122_ILLUM : Flare_82mm_AMOS_White
	{
		timeToLive = 30;
		brightness = 750;
	};	
};
*/
