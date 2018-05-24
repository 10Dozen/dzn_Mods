
class CfgPatches
{
	class tS_RPK
	{
		units[] = {};
		weapons[] = {
			"hlc_rifle_rpk"
			, "hlc_rifle_rpk74n"
			, "hlc_rifle_RK62"
		};
		magazines[] = {
			"hlc_40Rnd_762x39_Mag"
			,"hlc_75Rnd_762x39_Drum"
		};
		
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","A3_Weapons_F_Acc","A3_Sounds_F_Mark","cba_jr","hlcweapons_core"};
		
		version = "v0.1";
		author = "toadie & 10Dozen";
	};
};

#include "NIArms_Stuff.hpp"

class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	#include "NIArms_CfgMagazines.hpp"
};

class asdg_OpticSideMount;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_545R;
class asdg_MuzzleSlot_762R;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons
{
	class UGL_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	
	#include "NIArms_CfgWeapons.hpp"
};
