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

#define SET_MORTAR_EH	class tS_Flare_MEH { init = "[_this, 'mortar'] spawn dzn_fnc_setFlareEffectGlobal;"; };
#define SET_HOWITZER_EH	class tS_Flare_HEH { init = "[_this, 'howitzer'] spawn dzn_fnc_setFlareEffectGlobal;"; };

class Extended_Init_EventHandlers 
{
	// 82mm
	class Flare_82mm_AMOS_White { SET_MORTAR_EH };
	class rhs_ammo_3vs25m { SET_MORTAR_EH };
	class rhs_ammo_3WS23 { SET_MORTAR_EH };
	
	// 105mm
	class rhs_ammo_m314_ilum { SET_HOWITZER_EH };
	class CUP_Sh_105_ILLUM { SET_HOWITZER_EH };
	
	// 120mm 
	class rhs_ammo_s463 { SET_HOWITZER_EH };
	class CUP_Sh_122_ILLUM { SET_HOWITZER_EH };
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

