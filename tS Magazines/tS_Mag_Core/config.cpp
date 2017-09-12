// This is 10Dozen's upgrade to Spectre Arnaments

#define _ARMA_

//Class rhs_sounds : config.bin{
class CfgPatches
{
	class dzn_Spectre
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_MAIN","Talon_UGV","Test_Character_F"};
		magazines[] = {};
		ammo[] = {};
		
		version = "V0.1";
		author = "10Dozen";
	};
};

#define		HELMET_ARMOR			class HitpointsProtectionInfo { class Head{hitpointName = "HitHead";armor = 8;passThrough = 0.5;}; };
#define		BOMBHELMET_ARMOR		class HitpointsProtectionInfo { class Head{hitpointName = "HitHead";armor = 24;passThrough = 0.9;}; };

#define		VEST_ARMOR			class ItemInfo: VestItem { \
			class HitpointsProtectionInfo { \
				class Chest {hitpointName = "HitChest";armor = 18;passThrough = 0.3;}; \
				class Diaphragm {hitpointName = "HitDiaphragm";armor = 18;passThrough = 0.3;}; \
				class Abdomen {hitpointName = "HitAbdomen";armor = 18;passThrough = 0.3;}; \
				class Pelvis {hitpointName = "HitPelvis";armor = 18;passThrough = 0.3;}; \
				class Body {hitpointName = "HitBody";passThrough = 0.3;}; \
			}; \
		};


class cfgWeapons
{	
	// Carriers (Vests)	
	class VestItem;
	class Vest_Camo_Base;
	
	class Specter_RAV: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_RAV_BLK: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_BLK: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_TAN: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_WTF: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_light: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_light_BLK: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_light_TAN: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_light_WTF: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_PACA: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_PACA_BLK: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_PACA_TAN: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_PACA_WTF: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_PACA_l: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_PACA_l_BLK: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_PACA_l_TAN: Vest_Camo_Base
	{
		VEST_ARMOR
	};
	class Specter_MBSS_PACA_l_WTF: Vest_Camo_Base
	{
		VEST_ARMOR
	};	
	
	
	// Helmets
	class ItemCore;
	class HeadgearItem;
	class H_Bombsuit_Helmet: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			BOMBHELMET_ARMOR
		};
	};
	class H_Titan_Helmet: ItemCore
	{
		displayName = "SG K6-3";
		class ItemInfo: HeadgearItem
		{
			HELMET_ARMOR
		};
	};
	class H_Titan_Helmet_O: ItemCore
	{
		displayName = "SG K6-3 (Opened)";
		class ItemInfo: HeadgearItem
		{
			HELMET_ARMOR
		};
	};
};


class Extended_PostInit_EventHandlers
{
	class dzn_Spectre_faceguard
	{
		clientInit = "call ('\dzn_Spectre\init.sqf' call SLX_XEH_COMPILE)";
	};
};

//};
