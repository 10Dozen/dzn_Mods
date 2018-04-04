
#define _ARMA_

//Class rhs_sounds : config.bin{
class CfgPatches
{
	class pook_gl
	{
		units[] = {};
		weapons[] = {"dzn_weapon_GM94"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_GrenadeLaunchers","rhsusf_c_weapons","rhs_c_weapons"};
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
		magazines[] = {"dzn_3Rnd_VGM93_100_Mag","dzn_3Rnd_VGM93_300_Mag","dzn_3Rnd_VGM93_400_Mag"};
		magazineReloadTime = 7;
		//reloadMagazineSound[] = {"\pook_gl\data\sound\gm94_reload.ogg",1.77828,1,1100};
	};
};

class CfgAmmo
{
	class G_40mm_HE;
	class dzn_43mm_VGM93_100: G_40mm_HE
	{
		indirectHitRange = 5;
		aiAmmoUsageFlags = "64 + 128";
		cost = 0;
		minRange = 10;
		midRange = 150;
		maxRange = 400;
		fuseDistance = 10
		
		ace_frag_enabled = 0;
		ace_frag_force = 0;
		ace_frag_skip = 1;
		initTime = 0.12;
	};
	
};

class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class 1Rnd_HE_Grenade_shell;
	class 1Rnd_Smoke_Grenade_shell;
	class rhs_mag_m4009;
	
	class dzn_3Rnd_VGM93_100_Mag: 1Rnd_HE_Grenade_shell
	{
		ammo = "dzn_43mm_VGM93_100";
		displayName = "$STR_dzn_pook_GM94_3Rnd_Mag";
		descriptionShort = "$STR_dzn_pook_GM94_3Rnd_Mag_desc";
		mass = 13;
		count = 3;
		picture = "\pook_gl\data\icon\vgm93_100.paa";
	};
	class dzn_3Rnd_VGM93_300_Mag:  1Rnd_Smoke_Grenade_shell 
	{
		ammo = "G_40mm_Smoke";
		mass = 13;
		count = 3;
		displayName = "$STR_dzn_pook_GM94_3Rnd_Smoke_Mag";
		descriptionShort = "$STR_dzn_pook_GM94_3Rnd_Smoke_Mag_desc";
		picture = "\pook_gl\data\icon\vgm93_300.paa";
	};
	class dzn_3Rnd_VGM93_400_Mag: rhs_mag_m4009
	{
		ammo = "rhs_g_vg40sz"
		mass = 13;
		count = 3;
		displayName = "$STR_dzn_pook_GM94_3Rnd_Stun_Mag";
		descriptionShort = "$STR_dzn_pook_GM94_3Rnd_Stun_Mag_desc";
		picture = "\pook_gl\data\icon\vgm93_400.paa";
	
	};
};