class CfgPatches
{
	class tS_OFE_Panamas
	{
		units[] = {};		
		weapons[] = {
			"panama_afg"
			, "panama_afg2"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Characters_F"};
		
		version = "v1";
		author = "Soviet Army Mod & 10Dozen";
	};
};

class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class H_HelmetB;
	
	#include "SovArmy_Headgear.hpp"
};