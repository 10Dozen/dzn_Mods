
#define _ARMA_

//Class rhs_sounds : config.bin{
class CfgPatches
{
	class pook_gl
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_GrenadeLaunchers"};
		magazines[] = {};
		ammo[] = {};
		
		version = "v0.2";
		author = "pook & 10Dozen";
	};
};

class Mode_SemiAuto;

class cfgWeapons
{	
	
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class Eventhandlers;
	};
	class CUP_glaunch_Base;
	class CUP_glaunch_Mk13;
	
	
	class dzn_weapon_GM94: CUP_glaunch_Mk13
	{
		author = "pook & 10Dozen";
		scope = 2;
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\anim\Mk13.rtm"};
		picture = "\pook_gl\data\icon\pook_GM94.paa";
		model = "\pook_gl\pook_GM94.p3d";
		displayName = "$STR_dzn_pook_GM94";
		class Library
		{
			libTextDesc = "$STR_dzn_pook_GM94_desc";
		};
		descriptionShort = "$STR_dzn_pook_GM94_desc";
		cameraDir = "OP_look";
		discreteDistance[] = {150};
		discreteDistanceCameraPoint[] = {"OP_eye_150"};
		discreteDistanceInitIndex = 1;
		aimTransitionSpeed = 1.1;
		
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\pook_gl\data\sound\gm94_fire.ogg",2.3,1,1100};			
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.75;
			magazineReloadTime = 7;
		};
		magazines[] = {"dzn_3Rnd_HE_GM94"};
		magazineReloadTime = 7;
		//reloadMagazineSound[] = {"\pook_gl\data\sound\gm94_reload.ogg",1.77828,1,1100};
	};
};

class CfgAmmo
{
	class G_40mm_HE;	
	class dzn_43mm_HE: G_40mm_HE
	{
		indirectHitRange = 5;
		aiAmmoUsageFlags = "64 + 128";
		cost = 0;
		minRange = 10;
		midRange = 150;
		maxRange = 400;
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class 1Rnd_HE_Grenade_shell;
	
	class dzn_3Rnd_HE_GM94: 1Rnd_HE_Grenade_shell
	{
		ammo = "dzn_43mm_HE";
		displayName = "$STR_dzn_pook_GM94_3Rnd_Mag";
		descriptionShort = "$STR_dzn_pook_GM94_3Rnd_Mag_desc";
		mass = 13;
		count = 3;
		picture = "\pook_gl\data\icon\vgm93_100.paa";
	};
};