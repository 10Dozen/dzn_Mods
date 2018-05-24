

class CfgPatches
{
	class tS_M60
	{
		units[] = {};
		weapons[] = {
			"hlc_m60"
		};
		
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","cba_jr","hlcweapons_core"};
		
		version = "v0.1";
		author = "toadie & 10Dozen";
	};
};

#include "NIArms_Stuff.hpp"

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	
	#include "NIArms_CfgWeapons.hpp"
};



