// This is 10Dozen's upgrade to RH M4.

#define _ARMA_

//Class rh_m4_cfg : config.bin{
class CfgPatches
{
	class x_dzn_acex_rhm4
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","RH_acc","asdg_jointrails","RH_m4_cfg"};
		
		version = "V0.1";
		author = "10Dozen";
	};
};

#define	STRNAME(NAME)	displayName = "NAME";displayNameShort = "NAME_short";descriptionShort = "NAME_desc";
#define STRNAME2(NAME)	displayname = "NAME";descriptionShort = "NAME_desc";

#define SOUND_M4
#define SOUND_M4_SD
#define SOUND_M16
#define SOUND_M16_SD
#define SOUND_M16_BURST
#define SOUND_M16_BURST_SD
#define SOUND_MK12
#define SOUND_MK12_SD

#define	SOUND_GL
#define	SOUND_GL_RELOAD

/*
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class 20Rnd_762x51_Mag;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_9x21_Mag;
	class RH_20Rnd_762x51_AR10: 20Rnd_762x51_Mag
	{
		STRNAME("$STR_xdzn_RH_20Rnd_762x51_AR10")
	};
	class RH_20Rnd_762x51_M80A1: 20Rnd_762x51_Mag
	{
		STRNAME("$STR_xdzn_RH_20Rnd_762x51_M80A1")
	};
	class RH_20Rnd_762x51_Mk316LR: 20Rnd_762x51_Mag
	{
		STRNAME("$STR_xdzn_RH_20Rnd_762x51_Mk316LR")
	};
	class RH_20Rnd_762x51_Mk319: 20Rnd_762x51_Mag
	{
		STRNAME("$STR_xdzn_RH_20Rnd_762x51_Mk319")
	};
	class RH_20Rnd_762x51_LFMJSB: 20Rnd_762x51_Mag
	{
		STRNAME("$STR_xdzn_RH_20Rnd_762x51_LFMJSB")
	};
	class RH_30Rnd_68x43_FMJ: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_30Rnd_68x43_FMJ")
	};
	class RH_30Rnd_68x43_Match: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_30Rnd_68x43_Match")
	};
	class RH_60Rnd_556x45_M855A1: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_60Rnd_556x45_M855A1")
	};
	class RH_60Rnd_556x45_Mk318: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_60Rnd_556x45_Mk318")
	};
	class RH_60Rnd_556x45_Mk262: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_60Rnd_556x45_Mk262")
	};
	class RH_30Rnd_556x45_M855A1: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_30Rnd_556x45_M855A1")
	};
	class RH_30Rnd_556x45_Mk318: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_30Rnd_556x45_Mk318")
	};
	
	
	class RH_30Rnd_556x45_Mk262: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_30Rnd_556x45_Mk262")
	};
	class RH_20Rnd_556x45_M855A1: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_20Rnd_556x45_M855A1")
	};
	class RH_20Rnd_556x45_Mk318: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_20Rnd_556x45_Mk318")
	};
	class RH_20Rnd_556x45_Mk262: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_20Rnd_556x45_Mk262")
	};
	class RH_30Rnd_762x35_FMJ: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_30Rnd_762x35_FMJ")
	};
	class RH_30Rnd_762x35_Match: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_30Rnd_762x35_Match")
	};
	class RH_30Rnd_762x35_MSB: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_RH_30Rnd_762x35_MSB")
	};
	class RH_32Rnd_9mm_M822: 30Rnd_9x21_Mag
	{
		STRNAME("$STR_xdzn_RH_32Rnd_9mm_M822")
	};
	class RH_32Rnd_9mm_HP: 30Rnd_9x21_Mag
	{
		STRNAME("$STR_xdzn_RH_32Rnd_9mm_HP")
	};
	class RH_32Rnd_9mm_HPSB: 30Rnd_9x21_Mag
	{
		STRNAME("$STR_xdzn_RH_32Rnd_9mm_HPSB")
	};
};
*/




class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class asdg_SlotInfo;
class asdg_FrontSideRail;
class asdg_OpticRail;
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
	class RH_hbsd;
	class RH_Delft;
	class RH_m4covers_s;
	class RH_m4covers_f;
	class RH_m16covers_s: ItemCore
	{
		STRNAME2("$STR_xdzn_RH_m16covers_s")
		//displayName =  "M16A4 side rail covers";
	};
	class RH_m16covers_f: ItemCore
	{
		STRNAME2("$STR_xdzn_RH_m16covers_f")
		//displayName = "M16A4 full rail covers";
	};
	
	
	class RH_ar10: Rifle_Base_F
	{
		scope = 2;
		author = "RobertHammer";
		cursor = "srifle";
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.39810717,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.39810717,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.39810717,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.39810717,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.2818383,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.2818383,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.2818383,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.2818383,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.2818383,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.2818383,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.2818383,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.2818383,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		changeFiremodeSound[] = {"\RH_m4\sound\m4_selector",0.5,1,10};
		drySound[] = {"\RH_m4\sound\dry",0.8,1,15};
		displayNAme = "AR-10";
		model = "\RH_m4\RH_AR10.p3d";
		picture = "\RH_m4\inv\ar10_x_ca.paa";
		magazines[] = {"RH_20Rnd_762x51_AR10"};
		reloadAction = "GestureReloadSMG_02";
		handAnim[] = {};
		maxZeroing = 1200;
		inertia = 0.5;
		class GunParticles: GunParticles
		{
			class EjectEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_Rifle762Cartridge";
			};
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "RH_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 125;
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"RH_Delft"};
			};
			class MuzzleSlot{};
			class PointerSlot{};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",0.5,1.2,10};
				closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",0.5,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\ar10_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\ar10_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\ar10_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\ar10_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-12",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.085;
			recoil = "RH_AR10_Recoil";
			recoilProne = "RH_AR10_RecoilProne";
			dispersion = 0.0005;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",0.5,1.2,10};
				closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",0.5,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\ar10_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\ar10_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\ar10_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\ar10_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-11",1,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-12",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.085;
			recoil = "RH_AR10_Recoil";
			recoilProne = "RH_AR10_RecoilProne";
			dispersion = 0.0005;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
		};
		class single_close_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.05;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
		reloadMagazineSound[] = {"\RH_m4\sound\ar10_reload",1,1,15};
	};
	class RH_m110: Rifle_Base_F
	{
		scope = 2;
		author = "RobertHammer";
		cursor = "srifle";
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.39810717,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.39810717,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.39810717,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.39810717,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.2818383,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.2818383,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.2818383,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.2818383,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.2818383,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.2818383,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.2818383,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.2818383,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		changeFiremodeSound[] = {"\RH_m4\sound\m4_selector",0.5,1,10};
		drySound[] = {"\RH_m4\sound\dry",0.8,1,15};
		displayNAme = "M110";
		model = "\RH_m4\RH_M110.p3d";
		picture = "\RH_m4\inv\m110_x_ca.paa";
		magazines[] = {"RH_20Rnd_762x51_M80A1","RH_20Rnd_762x51_Mk316LR","RH_20Rnd_762x51_LFMJSB"};
		reloadAction = "GestureReloadSMG_02";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_m110.rtm"};
		inertia = 0.6;
		maxZeroing = 1200;
		class GunParticles: GunParticles
		{
			class EjectEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_Rifle762Cartridge";
			};
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "RH_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 125;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"RH_m110sd","RH_m110sd_t","RH_saker762","RH_saker762_tg","RH_saker762_des","RH_saker762_wdl","RH_fa762","RH_fa762_tg","RH_fa762_des","RH_fa762_wdl","muzzle_snds_B"};
				iconPosition[] = {0.05,0.43};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[] = {0.55,0.3};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[] = {0.3,0.45};
				iconScale = 0.25;
			};
			class asdg_FrontSideRail_M4: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.45};
				iconScale = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint = "center";
			};
			class asdg_OpticRail_M4: asdg_OpticRail1913
			{
				iconPosition[] = {0.55,0.3};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] = {"Single","single_bp","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\ebr-3",0.5,1.2,10};
				closure2[] = {"A3\sounds_f\weapons\closure\ebr-3",0.5,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m110_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m110_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m110_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m110_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m110_sd_s1.wss",1,1,200};
				begin2[] = {"RH_m4\sound\m110_sd_s2.wss",1,1,200};
				begin3[] = {"RH_m4\sound\m110_sd_s3.wss",1,1,200};
				begin4[] = {"RH_m4\sound\m110_sd_s4.wss",1,1,200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			reloadTime = 0.085;
			recoil = "RH_AR10_Recoil";
			recoilProne = "RH_AR10_RecoilProne";
			dispersion = 0.00012;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
		};
		class single_bp: Single{};
		class single_close_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.05;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
		reloadMagazineSound[] = {"\RH_m4\sound\m4_reload",1,1,15};
		tmr_autorest_deployable = 1;
	};
	class RH_Mk11: RH_m110
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_mk11.p3d";
		displayName = "Mk11";
		picture = "\RH_m4\inv\mk11_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 125;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"RH_m110sd","RH_m110sd_t"};
			};
		};
	};
	class RH_SR25EC: RH_m110
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_sr25ec.p3d";
		displayName = "SR25EC";
		picture = "\RH_m4\inv\sr25ec_x_ca.paa";
		inertia = 0.5;
		magazines[] = {"RH_20Rnd_762x51_M80A1","RH_20Rnd_762x51_Mk319","RH_20Rnd_762x51_LFMJSB"};
		initSpeed = -0.98;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
	class RH_m4: Rifle_Base_F
	{
		scope = 2;
		author = "RobertHammer";
		magazines[] = {"RH_30Rnd_556x45_M855A1","RH_30Rnd_556x45_Mk262","RH_30Rnd_556x45_Mk318","RH_20Rnd_556x45_M855A1","RH_20Rnd_556x45_Mk262","RH_20Rnd_556x45_Mk318","RH_60Rnd_556x45_M855A1","RH_60Rnd_556x45_Mk262","RH_60Rnd_556x45_Mk318","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		class Library
		{
			libTextDesc = "Colt M4";
		};
		reloadAction = "GestureReloadSMG_02";
		maxrecoilsway = 0.003;
		swaydecayspeed = 0;
		initSpeed = -0.93;
		class GunParticles: GunParticles
		{
			class EjectEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_Rifle556Cartridge";
			};
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "RH_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"RH_qdss_nt4","RH_qdss_nt4_tg","RH_qdss_nt4_des","RH_qdss_nt4_wdl","RH_saker","RH_saker_tg","RH_saker_des","RH_saker_wdl","RH_fa556","RH_fa556_tg","RH_fa556_des","RH_fa556_wdl"};
				iconPosition[] = {0,0.37};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[] = {0.5,0.2};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
			class PointerSlot{};
			class asdg_OpticRail_M4: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.2};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "Assault rifle<br/>Caliber: 5.56 mm";
		displayName = "M4";
		model = "\RH_m4\RH_m4.p3d";
		picture = "\RH_m4\inv\m4_x_ca.paa";
		discreteDistance[] = {100,200,300,400,500,600,800};
		discreteDistanceInitIndex = 1;
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.4;
		maxZeroing = 1000;
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_m16.rtm"};
		modes[] = {"Single","Burst","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m4_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m4_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m4_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4sd_s1",1,1,240};
				begin2[] = {"RH_m4\sound\m4sd_s2",1,1,240};
				begin3[] = {"RH_m4\sound\m4sd_s3",1,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.075;
			recoil = "RH_M4_Recoil";
			recoilProne = "RH_M4_RecoilProne";
			dispersion = 0.00225;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m4_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m4_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m4_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4sd_s1",1,1,240};
				begin2[] = {"RH_m4\sound\m4sd_s2",1,1,240};
				begin3[] = {"RH_m4\sound\m4sd_s3",1,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadtime = 0.075;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.00225;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m4_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m4_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m4_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4sd_s1",1,1,240};
				begin2[] = {"RH_m4\sound\m4sd_s2",1,1,240};
				begin3[] = {"RH_m4\sound\m4sd_s3",1,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.075;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.00225;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		class M203: UGL_F
		{
			displayName = "M203";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
			useModelOptics = 0;
			useExternalOptic = 0;
			recoil = "RH_M203GLBase";
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
				soundClosure[] = {"closure1",1};
			};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"RH_m4\sound\m203",1,1,200};
				soundBegin[] = {"begin1",1};
			};
			reloadMagazineSound[] = {"RH_m4\sound\m203_reload",1,1,10};
			cameraDir = "OP_look";
			discreteDistance[] = {50,100,150,200,250};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4","OP_eye5"};
			discreteDistanceInitIndex = 1;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		changeFiremodeSound[] = {"\RH_m4\sound\m4_selector",0.5,1,10};
		drySound[] = {"\RH_m4\sound\dry",0.8,1,15};
		reloadMagazineSound[] = {"RH_m4\sound\m4_reload",1,1,15};
	};
	class RH_M4_M203: RH_m4
	{
		author = "RobertHammer";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_M4gl.rtm"};
		model = "\RH_M4\RH_m4_m203.p3d";
		displayName = "M4 M203";
		picture = "\RH_m4\inv\m4_m203_x_ca.paa";
		inertia = 0.5;
		muzzles[] = {"this","M203"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 125;
		};
	};
	class RH_M4_ris: RH_m4
	{
		author = "RobertHammer";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_M4vg.rtm"};
		model = "\RH_M4\RH_m4_ris.p3d";
		displayName = "M4 RIS";
		picture = "\RH_m4\inv\m4_ris_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"RH_m4covers_s","RH_m4covers_f"};
				iconPosition[] = {0.3,0.35};
				iconScale = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint = "center";
			};
			class CowsSlot: CowsSlot{};
			class MuzzleSlot: MuzzleSlot{};
			class asdg_FrontSideRail_M4: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.35};
				iconScale = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint = "center";
			};
			class asdg_OpticRail_M4: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.2};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
		};
	};
	class RH_M4_ris_M203: RH_M4_ris
	{
		author = "RobertHammer";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_M4gl.rtm"};
		model = "\RH_M4\RH_m4_ris_m203.p3d";
		displayName = "M4 RIS M203";
		picture = "\RH_m4\inv\m4_ris_m203_x_ca.paa";
		inertia = 0.5;
		muzzles[] = {"this","M203"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 125;
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"RH_m4covers_s"};
			};
			class CowsSlot: CowsSlot{};
			class MuzzleSlot: MuzzleSlot{};
		};
	};
	class RH_M4A1_ris: RH_M4_ris
	{
		author = "RobertHammer";
		displayName = "M4A1 RIS";
		picture = "\RH_m4\inv\m4_ris_x_ca.paa";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
	};
	class RH_M4A1_ris_M203: RH_M4_ris_M203
	{
		author = "RobertHammer";
		displayName = "M4A1 RIS M203";
		picture = "\RH_m4\inv\m4_ris_m203_x_ca.paa";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
	};
	class RH_M4_ris_m: RH_M4A1_ris
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m4_ris_m.p3d";
		displayName = "M4A1 RIS Matech";
		picture = "\RH_m4\inv\m4_ris_m_x_ca.paa";
		discreteDistance[] = {200,300,400,450,500,550,600};
		discreteDistanceInitIndex = 1;
		weaponInfoType = "RscWeaponZeroing";
	};
	class RH_M4m: RH_M4A1_ris
	{
		author = "RobertHammer";
		displayName = "M4A1 Magpul";
		picture = "\RH_m4\inv\m4m_x_ca.paa";
		model = "\RH_M4\RH_m4m.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_m4m.rtm"};
	};
	class RH_M4m_g: RH_M4m
	{
		author = "RobertHammer";
		displayName = "M4A1 Magpul Green";
		picture = "\RH_m4\inv\m4m_g_x_ca.paa";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\RH_m4\data\ru_g_co.paa","\RH_m4\data\extras_g_co.paa"};
	};
	class RH_M4m_b: RH_M4m
	{
		author = "RobertHammer";
		displayName = "M4A1 Magpul Black";
		picture = "\RH_m4\inv\m4m_b_x_ca.paa";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\RH_m4\data\ru_b_co.paa","\RH_m4\data\extras_b_co.paa"};
	};
	class RH_M4_moe: RH_M4A1_ris
	{
		author = "RobertHammer";
		displayName = "M4A1 MOE Tan";
		picture = "\RH_m4\inv\m4_moe_x_ca.paa";
		model = "\RH_M4\RH_m4_moe.p3d";
	};
	class RH_M4_moe_b: RH_M4_moe
	{
		author = "RobertHammer";
		displayName = "M4A1 MOE Black";
		picture = "\RH_m4\inv\m4_moe_b_x_ca.paa";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\RH_m4\data\mp_parts_b_co.paa"};
	};
	class RH_M4_moe_g: RH_M4_moe
	{
		author = "RobertHammer";
		displayName = "M4A1 MOE Green";
		picture = "\RH_m4\inv\m4_moe_g_x_ca.paa";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\RH_m4\data\mp_parts_g_co.paa"};
	};
	class RH_M4sbr: RH_M4A1_ris
	{
		author = "RobertHammer";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_M4sbr.rtm"};
		model = "\RH_M4\RH_m4sbr.p3d";
		displayName = "Vltor SBR Tan";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
		picture = "\RH_m4\inv\m4sbr_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {-0.03,0.35};
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[] = {0.4,0.15};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[] = {0.15,0.35};
			};
			class asdg_FrontSideRail_M4: asdg_FrontSideRail_M4
			{
				iconPosition[] = {0.15,0.35};
			};
			class asdg_OpticRail_M4: asdg_OpticRail_M4
			{
				iconPosition[] = {0.4,0.15};
			};
		};
		initSpeed = -0.86;
		inertia = 0.3;
		descriptionShort = "CQB rifle<br/>Caliber: 5.56x45mm NATO";
		class Single: Single
		{
			dispersion = 0.00275;
			midRange = 100;
			maxRange = 300;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.00275;
		};
	};
	class RH_M4sbr_g: RH_M4sbr
	{
		author = "RobertHammer";
		displayName = "Vltor SBR Green";
		picture = "\RH_m4\inv\m4sbr_g_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\RH_m4\data\sbr_g_co.paa"};
	};
	class RH_M4sbr_b: RH_M4sbr
	{
		author = "RobertHammer";
		displayName = "Vltor SBR Black";
		picture = "\RH_m4\inv\m4sbr_b_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\RH_m4\data\sbr_b_co.paa"};
	};
	class RH_hb: Rifle_Base_F
	{
		scope = 2;
		author = "RobertHammer";
		cursor = "srifle";
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.39810717,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.39810717,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.39810717,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.39810717,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.2818383,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.2818383,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.2818383,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.2818383,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.2818383,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.2818383,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.2818383,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.2818383,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		changeFiremodeSound[] = {"\RH_m4\sound\m4_selector",0.5,1,10};
		drySound[] = {"\RH_m4\sound\dry",0.8,1,15};
		reloadMagazineSound[] = {"RH_m4\sound\m4_reload",1,1,15};
		displayNAme = "AAC Honey Badger";
		model = "\RH_m4\RH_hb.p3d";
		picture = "\RH_m4\inv\hb_x_ca.paa";
		magazines[] = {"RH_30Rnd_762x35_FMJ","RH_30Rnd_762x35_Match","RH_30Rnd_762x35_MSB"};
		reloadAction = "GestureReloadSMG_02";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_hb.rtm"};
		maxZeroing = 600;
		class GunParticles: GunParticles
		{
			class EjectEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_Rifle556Cartridge";
			};
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "RH_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"RH_hbsd"};
				iconPosition[] = {0,0.37};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[] = {0.5,0.2};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
			class PointerSlot{};
			class asdg_OpticRail_M4: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.2};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
		};
		inertia = 0.3;
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\RH_m4\sound\m4_fire1",1,1,1200};
				begin2[] = {"\RH_m4\sound\m4_fire2",1,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\hb_sd_s1.wss",1,1,240};
				begin2[] = {"RH_m4\sound\hb_sd_s2.wss",1,1,240};
				begin3[] = {"RH_m4\sound\hb_sd_s3.wss",1,1,240};
				begin4[] = {"RH_m4\sound\hb_sd_s4.wss",1,1,240};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			reloadTime = 0.075;
			recoil = "RH_M4_Recoil";
			recoilProne = "RH_M4_RecoilProne";
			dispersion = 0.00275;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\RH_m4\sound\m4_fire1",1,1,1200};
				begin2[] = {"\RH_m4\sound\m4_fire2",1,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\hb_sd_s1.wss",1,1,240};
				begin2[] = {"RH_m4\sound\hb_sd_s2.wss",1,1,240};
				begin3[] = {"RH_m4\sound\hb_sd_s3.wss",1,1,240};
				begin4[] = {"RH_m4\sound\hb_sd_s4.wss",1,1,240};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			reloadTime = 0.075;
			dispersion = 0.00275;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 700;
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
	};
	class RH_hb_b: RH_hb
	{
		author = "RobertHammer";
		displayName = "AAC Honey Badger Black";
		picture = "\RH_m4\inv\hb_b_x_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\RH_m4\data\hb_b_co.paa"};
	};
	class RH_sbr9: Rifle_Base_F
	{
		scope = 2;
		author = "RobertHammer";
		model = "\RH_M4\RH_sbr9.p3d";
		displayName = "SBR9";
		dexterity = 1000;
		magazines[] = {"RH_32Rnd_9mm_M822","RH_32Rnd_9mm_HP","RH_32Rnd_9mm_HPSB"};
		reloadAction = "GestureReloadSMG_02";
		cursor = "smg";
		picture = "\RH_m4\inv\sbr9_x_ca.paa";
		UiPicture = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		discreteDistance[] = {100,200};
		discreteDistanceInitIndex = 0;
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 9;
		maxZeroing = 600;
		descriptionShort = "$STR_A3_CfgWeapons_SMG_02_base_F0";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_sbr.rtm"};
		inertia = 0.3;
		class GunParticles: GunParticles
		{
			class EjectEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_Rifle9mmCartridge";
			};
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "RH_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 75;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"RH_tundra","RH_tundra_tg","RH_tundra_des","RH_tundra_wdl","muzzle_snds_l"};
				iconPosition[] = {0,0.3};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[] = {0.4,0.15};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[] = {0.2,0.3};
				iconScale = 0.25;
			};
			class asdg_FrontSideRail_M4: asdg_FrontSideRail
			{
				iconPosition[] = {0.2,0.3};
				iconScale = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint = "center";
			};
			class asdg_OpticRail_M4: asdg_OpticRail1913
			{
				iconPosition[] = {0.4,0.15};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.5011872,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.5011872,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.5011872,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.5011872,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.39810717,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.39810717,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.39810717,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.39810717,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {"Single","FullAuto"};
		drySound[] = {"\RH_m4\sound\dry",0.8,1,15};
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\Reloads\reload_sting",1,1,10};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.56234133,1,15};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.5011872,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.5011872,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\sbr9_s1.wss",1,1,500};
				begin2[] = {"RH_m4\sound\sbr9_s2.wss",1,1,500};
				begin3[] = {"RH_m4\sound\sbr9_s3.wss",1,1,500};
				begin4[] = {"RH_m4\sound\sbr9_s4.wss",1,1,500};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\sbr9_sd_s1.wss",1,1,200};
				begin2[] = {"RH_m4\sound\sbr9_sd_s2.wss",1,1,200};
				begin3[] = {"RH_m4\sound\sbr9_sd_s3.wss",1,1,200};
				begin4[] = {"RH_m4\sound\sbr9_sd_s4.wss",1,1,200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			reloadTime = 0.0632;
			dispersion = 0.0011;
			recoil = "RH_M4_Recoil";
			recoilProne = "RH_M4_RecoilProne";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.5011872,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.5011872,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\sbr9_s1.wss",1,1,500};
				begin2[] = {"RH_m4\sound\sbr9_s2.wss",1,1,500};
				begin3[] = {"RH_m4\sound\sbr9_s3.wss",1,1,500};
				begin4[] = {"RH_m4\sound\sbr9_s4.wss",1,1,500};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\sbr9_sd_s1.wss",1,1,200};
				begin2[] = {"RH_m4\sound\sbr9_sd_s2.wss",1,1,200};
				begin3[] = {"RH_m4\sound\sbr9_sd_s3.wss",1,1,200};
				begin4[] = {"RH_m4\sound\sbr9_sd_s4.wss",1,1,200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			reloadTime = 0.0632;
			dispersion = 0.0011;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			aiRateOfFireDistance = 50;
		};
	};
	class RH_M4A6: RH_M4A1_ris
	{
		author = "RobertHammer";
		displayName = "M4A6";
		picture = "\RH_m4\inv\m4a6_x_ca.paa";
		magazines[] = {"RH_30Rnd_68x43_FMJ","RH_30Rnd_68x43_Match"};
		model = "\RH_M4\RH_m4a6.p3d";
		descriptionShort = "Assault rifle<br/>Caliber: 6.8x43 mm";
		class GunParticles: GunParticles
		{
			class EjectEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_Rifle65Cartridge";
			};
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "RH_RifleSmokeTrail";
			};
		};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.70794576,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.70794576,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4a6_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m4a6_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m4a6_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m4a6_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4a6sd_s1",1,1,240};
				begin2[] = {"RH_m4\sound\m4a6sd_s2",1,1,240};
				begin3[] = {"RH_m4\sound\m4a6sd_s3",1,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.075;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.0011;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.70794576,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.70794576,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4a6_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m4a6_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m4a6_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m4a6_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4a6sd_s1",1,1,240};
				begin2[] = {"RH_m4\sound\m4a6sd_s2",1,1,240};
				begin3[] = {"RH_m4\sound\m4a6sd_s3",1,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			reloadTime = 0.075;
			dispersion = 0.0011;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
		drySound[] = {"\RH_m4\sound\dry",0.8,1,15};
		reloadMagazineSound[] = {"\RH_m4\sound\m4_reload",1,1,15};
	};
	class RH_M16a1: RH_m4
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a1.p3d";
		displayName = "M16A1";
		picture = "\RH_m4\inv\m16a1_x_ca.paa";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_m16a1.rtm"};
		inertia = 0.5;
		initSpeed = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class CowsSlot{};
			class MuzzleSlot{};
			class PointerSlot{};
			class asdg_OpticRail_M4{};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16a1_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m16a1_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m16a1_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m16a1_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16_sd1",1,1,240};
				begin2[] = {"RH_m4\sound\m16_sd2",1,1,240};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.08;
			recoil = "RH_M4_Recoil";
			recoilProne = "RH_M4_RecoilProne";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16a1_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m16a1_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m16a1_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m16a1_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16_sd1",1,1,240};
				begin2[] = {"RH_m4\sound\m16_sd2",1,1,240};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.08;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.002;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 80;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
		};
	};
	class RH_M16A1gl: RH_M16a1
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a1gl.p3d";
		picture = "\RH_m4\inv\m16a1gl_x_ca.paa";
		displayName = "M16A1 M203";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_M4gl.rtm"};
		inertia = 0.6;
		muzzles[] = {"this","M203"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 140;
		};
	};
	class RH_M16A2: RH_m4
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a2.p3d";
		displayName = "M16A2";
		picture = "\RH_m4\inv\m16a2_x_ca.paa";
		inertia = 0.5;
		initSpeed = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class CowsSlot{};
			class MuzzleSlot{};
			class PointerSlot{};
			class asdg_OpticRail_M4{};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16a1_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m16a1_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m16a1_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m16a1_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16_sd1",1,1,240};
				begin2[] = {"RH_m4\sound\m16_sd2",1,1,240};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadtime = 0.071;
			recoil = "RH_M4_Recoil";
			recoilProne = "RH_M4_RecoilProne";
			dispersion = 0.00175;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16a1_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m16a1_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m16a1_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m16a1_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16_sd1",1,1,240};
				begin2[] = {"RH_m4\sound\m16_sd2",1,1,240};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadtime = 0.071;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.00175;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
		};
	};
	class RH_M16A2gl: RH_M16A2
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a2gl.p3d";
		displayName = "M16A2 M203";
		picture = "\RH_m4\inv\m16a2gl_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_M4gl.rtm"};
		inertia = 0.6;
		muzzles[] = {"this","M203"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 140;
		};
	};
	class RH_M16A4: RH_M4_ris
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a4.p3d";
		displayName = "M16A4";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_M16vg.rtm"};
		picture = "\RH_m4\inv\m16a4_x_ca.paa";
		inertia = 0.5;
		initSpeed = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"RH_m16covers_s","RH_m16covers_f"};
				iconPosition[] = {0.3,0.4};
				iconScale = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint = "center";
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {-0.05,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[] = {0.5,0.25};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
			class asdg_FrontSideRail_M4: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.4};
				iconScale = 0.25;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint = "center";
			};
			class asdg_OpticRail_M4: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.25};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m16_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m16_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m16_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16_sd1",1,1,240};
				begin2[] = {"RH_m4\sound\m16_sd2",1,1,240};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadtime = 0.071;
			recoil = "RH_M4_Recoil";
			recoilProne = "RH_M4_RecoilProne";
			dispersion = 0.00175;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m16_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m16_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m16_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16_sd1",1,1,240};
				begin2[] = {"RH_m4\sound\m16_sd2",1,1,240};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadtime = 0.071;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.00175;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m16_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m16_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m16_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m16_sd1",1,1,240};
				begin2[] = {"RH_m4\sound\m16_sd2",1,1,240};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.071;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.00175;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
	};
	class RH_M16A4gl: RH_M16A4
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a4gl.p3d";
		displayName = "M16A4 M203";
		picture = "\RH_m4\inv\m16a4_m203_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_M4gl.rtm"};
		inertia = 0.6;
		muzzles[] = {"this","M203"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 140;
			class PointerSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"RH_m16covers_s"};
			};
			class CowsSlot: CowsSlot{};
			class MuzzleSlot: MuzzleSlot{};
		};
	};
	class RH_M16A3: RH_M16A4
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a3.p3d";
		displayName = "M16A3";
		picture = "\RH_m4\inv\m16a3_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_m16.rtm"};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot{};
			class PointerSlot{};
			class asdg_FrontSideRail_M4{};
			class asdg_OpticRail_M4: asdg_OpticRail_M4{};
			class MuzzleSlot: MuzzleSlot{};
		};
	};
	
	
	
};


//};
