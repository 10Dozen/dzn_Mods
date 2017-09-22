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

#define SET_MORTAR_EH	class tS_Flare_MEH { fired = "[_this, 'mortar'] spawn dzn_fnc_flares_setFlareEffectGlobal;"; };
#define SET_HOWITZER_EH	class tS_Flare_HEH { fired = "[_this, 'howitzer'] spawn dzn_fnc_flares_setFlareEffectGlobal;"; };



class Extended_Fired_Eventhandlers 
{
	// 82mm
	class CUP_B_M252_USMC { SET_MORTAR_EH };
	class B_Mortar_01_F { SET_MORTAR_EH };
	class RHS_M252_D { SET_MORTAR_EH };
	class rhs_2b14_82mm_msv { SET_MORTAR_EH };
	class CUP_O_2b14_82mm_RU { SET_MORTAR_EH };
	
	// 105mm
	/*
	class rhs_ammo_m314_ilum { SET_HOWITZER_EH };
	class CUP_Sh_105_ILLUM { SET_HOWITZER_EH };
	
	// 120mm 
	class rhs_ammo_s463 { SET_HOWITZER_EH };
	class CUP_Sh_122_ILLUM { SET_HOWITZER_EH };
	*/
};

#define	SET_TTL	timeToLive = 50
class CfgAmmo
{
	class FlareCore;
	class FlareBase;
	
	// 82mm
	class Flare_82mm_AMOS_White : FlareCore
	{
		SET_TTL;
	};
	class rhs_ammo_3vs25m : Flare_82mm_AMOS_White
	{
		SET_TTL;
	};
	class rhs_ammo_3WS23 : Flare_82mm_AMOS_White
	{
		SET_TTL;
	};
	
	// 105mm
	class rhs_ammo_m314_ilum : Flare_82mm_AMOS_White
	{
		SET_TTL;
	};
	class CUP_Sh_105_ILLUM : Flare_82mm_AMOS_White
	{
		SET_TTL;
	};
	
	
	// 120mm 
	class rhs_ammo_s463 : Flare_82mm_AMOS_White
	{
		SET_TTL;
	};
	class CUP_Sh_122_ILLUM : Flare_82mm_AMOS_White
	{
		SET_TTL;
	};	
};
