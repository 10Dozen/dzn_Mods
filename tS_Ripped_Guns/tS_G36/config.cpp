

class CfgPatches
{
	class tS_G36
	{
		units[] = {};
		weapons[] = {
			"hlc_rifle_G36A1"
			,"hlc_rifle_G36A1AG36"
			,"hlc_rifle_G36KA1"
			,"hlc_rifle_G36C"
			
			,"hlc_rifle_G36A1_CMAG"
			,"hlc_rifle_G36A1AG36_CMAG"
			,"hlc_rifle_G36KA1_CMAG"
			,"hlc_rifle_G36c_CMAG"
			
			,"HLC_Optic_G36dualoptic35x"
			,"HLC_Optic_G36dualoptic35x2d"
			,"HLC_Optic_G36Export35x"
			,"HLC_Optic_G36Export35x2d"
			,"HLC_Optic_G36Dualoptic15x"
			,"HLC_Optic_G36Dualoptic15x2d"
			,"HLC_Optic_G36Export15x"
			,"HLC_Optic_G36Export15x2d"
			,"HLC_Bipod_G36"
		};
		magazines[] = {
			"hlc_100rnd_556x45_G36"
		};
		
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","cba_jr","hlcweapons_core"};
		
		version = "v1";
		author = "toadie & 10Dozen";
	};
};

#include "NIArms_Stuff.hpp"

class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	#include "NIArms_CfgMagazines.hpp"
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class niarms_G36_OpticSlot: asdg_OpticRail
{
	class compatibleItems
	{
		HLC_Optic_G36dualoptic35x = 1;
		HLC_Optic_G36dualoptic35x2d = 1;
		HLC_Optic_G36Export35x2d = 1;
		HLC_Optic_G36Export35x = 1;
		HLC_Optic_G36Dualoptic15x = 1;
		HLC_Optic_G36Dualoptic15x2d = 1;
		HLC_Optic_G36Export15x = 1;
		HLC_Optic_G36Export15x2d = 1;
	};
};

class CfgWeapons
{
	class UGL_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class InventoryOpticsItem_Base_F;
	class optic_Arco;
	/*
		"hlc_rifle_G36A1"
		"hlc_rifle_G36A1_CMAG"
		
		"hlc_rifle_G36A1AG36"
		"hlc_rifle_G36A1AG36_CMAG"
		
		"hlc_rifle_G36KA1"
		"hlc_rifle_G36KA1_CMAG"
		
		"hlc_rifle_G36C"
		"hlc_rifle_G36c_CMAG"
	*/
	#include "NIArms_Attachements.hpp"
	
	#include "NIArms_CfgWeapons.hpp"
};
