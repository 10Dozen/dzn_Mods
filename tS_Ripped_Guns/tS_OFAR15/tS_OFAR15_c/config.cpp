

class CfgPatches
{
	class tS_OFAR15_c
	{
		units[] = {};
		weapons[] = {
			"RH_m4"
			, "RH_m4_des"
			, "RH_m4_tg"
			, "RH_m4_wdl"
			, "RH_M4_M203"
			, "RH_m4_m203_des"
			, "RH_m4_m203_tg"
			, "RH_m4_m203_wdl"
			, "RH_M16a1"
			, "RH_M16A1gl"
			, "RH_M16A2"
			, "RH_M16A2gl"
			, "hlc_rifle_Colt727"
			, "hlc_rifle_Colt727_GL"
		};
		magazines[] = {
			"20Rnd_556x45_Stanag"
			, "20Rnd_556x45_Stanag_Tracer_Red"			
		};
		
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","cba_jr","hlcweapons_core"};
		
		version = "v0.1";
		author = "RobertHammer & toadie & 10Dozen";
	};
};


#include "RH_Stuff.hpp"
#include "NIArms_Stuff.hpp"

class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_556x45_Stanag_Tracer_Red;
	class 30Rnd_556x45_Stanag_red;
	
	#include "RH_CfgMagazines.hpp"
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

class asdg_MuzzleSlot_556;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;

class CfgWeapons
{
	class Rifle;
	class UGL_F;
	class WeaponSlotsInfo;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class ItemCore;
	class ItemInfo;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class Zasleh2;	
	
	#include "RH_CfgWeapons.hpp"
	#include "NIArms_CfgWeapons.hpp"
};



