////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.59
//Sun Apr 05 11:55:57 2015 : Source 'file' date Sun Apr 05 11:55:57 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class rhs_sounds : config.bin{
class CfgPatches
{
	class rhs_sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"rhs_c_weapons","rhs_c_heavyWeapons"};
		version = "0.1";
		magazines[] = {};
		ammo[] = {};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class GrenadeLauncher;
class cfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F{};
	class Rifle_Long_Base_F;
	class WeaponSlotsInfo;
	class GunParticles;
	class UGL_F;
	class srifle_EBR_F;
	class LMG_Mk200_F;
	class LMG_M200;
	class MGun;
	class rhs_weap_ak74m_Base_F: Rifle_Base_F
	{
		reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\reload",1.5,1,10};
		changeFiremodeSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\firemode",0.6,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\ak74\ak74_1",2.35,1,1200};
				begin2[] = {"rhsafrf\addons\rhs_sounds\ak74\ak74_2",2.35,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\ak_shared\silenced_1",2.2,1,600};
				begin2[] = {"rhsafrf\addons\rhs_sounds\ak_shared\silenced_2",2.2,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\ak74\ak74_1",2.35,1,1200};
				begin2[] = {"rhsafrf\addons\rhs_sounds\ak74\ak74_2",2.35,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\ak_shared\silenced_1",2.2,1,600};
				begin2[] = {"rhsafrf\addons\rhs_sounds\ak_shared\silenced_2",2.2,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_ak74m: rhs_weap_ak74m_Base_F{};
	class rhs_weap_akm: rhs_weap_ak74m
	{
		reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\reload",1.5,1,10};
		changeFiremodeSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\firemode",0.6,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\akM\akM_1",2.35,1,1300};
				begin2[] = {"rhsafrf\addons\rhs_sounds\akM\akM_2",2.35,1,1300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\ak_shared\silenced_1",2.2,1,600};
				begin2[] = {"rhsafrf\addons\rhs_sounds\ak_shared\silenced_2",2.2,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\akM\akM_1",2.35,1,1300};
				begin2[] = {"rhsafrf\addons\rhs_sounds\akM\akM_2",2.35,1,1300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\ak_shared\silenced_1",2.2,1,600};
				begin2[] = {"rhsafrf\addons\rhs_sounds\ak_shared\silenced_2",2.2,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_ak103_base: rhs_weap_akm{};
	class rhs_weap_ak103: rhs_weap_ak103_base{};
	class rhs_weap_ak103_1: rhs_weap_ak103_base{};
	class rhs_weap_ak103_2: rhs_weap_ak103_base{};
	class rhs_pkp_base: Rifle_Long_Base_F
	{
		reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\pkp\reload",1.2,1,12};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\pkp\pkp_1",2.45,1,1300};
				begin2[] = {"rhsafrf\addons\rhs_sounds\pkp\pkp_2",2.45,1,1300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\ak_shared\silenced_1",2.2,1,600};
				begin2[] = {"rhsafrf\addons\rhs_sounds\ak_shared\silenced_2",2.2,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\pkp\pkp_1",2.45,1,1300};
				begin2[] = {"rhsafrf\addons\rhs_sounds\pkp\pkp_2",2.45,1,1300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\ak_shared\silenced_1",2.2,1,600};
				begin2[] = {"rhsafrf\addons\rhs_sounds\ak_shared\silenced_2",2.2,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_pkp: rhs_pkp_base{};
	class rhs_weap_rpk74m: rhs_weap_pkp
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\rpk\rpk_1",2.4,1,1300};
				begin2[] = {"rhsafrf\addons\rhs_sounds\rpk\rpk_2",2.4,1,1300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\rpk\rpk_1",2.35,1,1300};
				begin2[] = {"rhsafrf\addons\rhs_sounds\rpk\rpk_2",2.35,1,1300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class PKT: MGun{};
	class rhs_weap_pkt: PKT
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\pkp\pkp_1",2.45,1,1300};
			begin2[] = {"rhsafrf\addons\rhs_sounds\pkp\pkp_2",2.45,1,1300};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsafrf\addons\rhs_sounds\pkp\pkp_1",2.45,1,1300};
				begin2[] = {"rhsafrf\addons\rhs_sounds\pkp\pkp_2",2.45,1,1300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_svd: rhs_weap_ak74m
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","Silencedsound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\svd\svd_1",2.45,1,1300};
				begin2[] = {"rhsafrf\addons\rhs_sounds\svd\svd_2",2.45,1,1300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\svd\svd_1_suppressed",2.2,1,640};
				begin2[] = {"rhsafrf\addons\rhs_sounds\svd\svd_2_suppressed",2.2,1,640};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_svdp: rhs_weap_svd
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","Silencedsound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.9622777,1,300};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.9622777,1,300};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"rhsafrf\addons\rhs_sounds\svd\svd_1",2.45,1,1300};
				begin2[] = {"rhsafrf\addons\rhs_sounds\svd\svd_2",2.45,1,1300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\svd\svd_1_suppressed",2.2,1,640};
				begin2[] = {"rhsafrf\addons\rhs_sounds\svd\svd_2_suppressed",2.2,1,640};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class hgun_Rook40_F;
	class rhs_weap_pya: hgun_Rook40_F
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			soundClosure[] = {};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"rhsafrf\addons\rhs_sounds\mp-443\mp-443_1",2.55,1,1000};
			begin2[] = {"rhsafrf\addons\rhs_sounds\mp-443\mp-443_2",2.55,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.56234133,1,200};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.56234133,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class Launcher;
	class Launcher_Base_F: Launcher{};
	class MissileLauncher;
	class rhs_weap_rpg26: Launcher_Base_F
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\rpg\rpg_1",2.35,1,900};
			begin2[] = {"rhsafrf\addons\rhs_sounds\rpg\rpg_2",2.35,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class rhs_weap_rpg7: Launcher_Base_F
	{
		sounds[] = {"StandardSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"rhsafrf\addons\rhs_sounds\rpg\rpg_1",2.35,1,900};
			begin2[] = {"rhsafrf\addons\rhs_sounds\rpg\rpg_2",2.35,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		sound[] = {"rhsafrf\addons\rhs_sounds\rpg\rpg_1",2.35,1,900};
	};
	class rhs_weap_9k11: MissileLauncher
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1200};
			begin2[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class missiles_Zephyr;
	class missiles_titan;
	class rhs_weap_9m111: missiles_titan
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1200};
			begin2[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class rhs_weap_9m119: rhs_weap_9m111
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1200};
			begin2[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class rhs_weap_2k4: rhs_weap_9m111
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1200};
			begin2[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class rhs_weap_9k133: rhs_weap_9m111
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1200};
			begin2[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class RocketPods;
	class rockets_Skyfire: RocketPods
	{
		class Far_AI;
		class Medium_AI;
		class Close_AI;
		class Burst;
	};
	class rhs_weap_s5: rockets_Skyfire
	{
		class Far_AI: RocketPods
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1200};
				begin2[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_9K114_launcher: MissileLauncher
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1200};
			begin2[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class rhs_weap_r73_Launcher: MissileLauncher
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1200};
			begin2[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class rhs_weap_Ch29_Launcher: MissileLauncher
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_1",2.35,1,1200};
			begin2[] = {"rhsafrf\addons\rhs_sounds\atgm\atgm_2",2.35,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class gatling_30mm;
	class rhs_weap_yakB: gatling_30mm
	{
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\yakB_loop\yakB_loop.wss",2.5,1,1700,{ 22853,56587 }};
				soundContinuous = 1;
				soundBurst = 0;
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
	};
	class CannonCore;
	class cannon_120mm: CannonCore
	{
		class player;
		class close;
		class short;
		class medium;
		class far;
	};
	class autocannon_30mm_CTWS;
	class rhs_weap_d81: cannon_120mm
	{
		class player: player
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\120mm\120mm_1",3.2,1,2000};
				begin2[] = {"rhsafrf\addons\rhs_sounds\120mm\120mm_2",3.2,1,2000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class close: close
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\120mm\120mm_1",3.2,1,2000};
				begin2[] = {"rhsafrf\addons\rhs_sounds\120mm\120mm_2",3.2,1,2000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class short: short
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\120mm\120mm_1",3.2,1,2000};
				begin2[] = {"rhsafrf\addons\rhs_sounds\120mm\120mm_2",3.2,1,2000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class medium: medium
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\120mm\120mm_1",3.2,1,2000};
				begin2[] = {"rhsafrf\addons\rhs_sounds\120mm\120mm_2",3.2,1,2000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class far: far
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsafrf\addons\rhs_sounds\120mm\120mm_1",3.2,1,2000};
				begin2[] = {"rhsafrf\addons\rhs_sounds\120mm\120mm_2",3.2,1,2000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_2a42_base: autocannon_30mm_CTWS
	{
		class LowROFBMD2: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsafrf\addons\rhs_sounds\autocannon\autocannon_1",2.6,1,1600};
				begin2[] = {"rhsafrf\addons\rhs_sounds\autocannon\autocannon_2",2.6,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class HighROFBMD2: LowROFBMD2
		{
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsafrf\addons\rhs_sounds\autocannon\autocannon_1",2.6,1,1600};
				begin2[] = {"rhsafrf\addons\rhs_sounds\autocannon\autocannon_2",2.6,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_2a28_base: cannon_120mm
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\2a28\2a28_1",3.15,1,1800};
			begin2[] = {"rhsafrf\addons\rhs_sounds\2a28\2a28_2",3.15,1,1800};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class RHS_weap_AZP23: CannonCore
	{
		class manual: CannonCore
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsafrf\addons\rhs_sounds\aa\aa_1",2.65,1,1600};
				begin2[] = {"rhsafrf\addons\rhs_sounds\aa\aa_2",2.65,1,1600};
				begin3[] = {"rhsafrf\addons\rhs_sounds\aa\aa_2",2.65,1,1600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
	};
	class DSHKM: MGun
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\DSHKM\DSHKM_1",2.45,1,1350};
			begin2[] = {"rhsafrf\addons\rhs_sounds\DSHKM\DSHKM_2",2.45,1,1350};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsafrf\addons\rhs_sounds\DSHKM\DSHKM_1",2.48,1,1350};
				begin2[] = {"rhsafrf\addons\rhs_sounds\DSHKM\DSHKM_2",2.48,1,1350};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_dshkm: DSHKM
	{
		begin1[] = {"rhsafrf\addons\rhs_sounds\DSHKM\DSHKM_1",2.48,1,1350};
		begin2[] = {"rhsafrf\addons\rhs_sounds\DSHKM\DSHKM_2",2.48,1,1350};
	};
	class rhs_weap_nsvt: DSHKM
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\DSHKM\DSHKM_1",2.45,1,1350};
			begin2[] = {"rhsafrf\addons\rhs_sounds\DSHKM\DSHKM_2",2.45,1,1350};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsafrf\addons\rhs_sounds\DSHKM\DSHKM_1",2.48,1,1350};
				begin2[] = {"rhsafrf\addons\rhs_sounds\DSHKM\DSHKM_2",2.48,1,1350};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class KPVT: MGun
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\kpvt\kpvt_1",2.55,1.1,1350};
			begin2[] = {"rhsafrf\addons\rhs_sounds\kpvt\kpvt_2",2.55,1.1,1350};
			begin3[] = {"rhsafrf\addons\rhs_sounds\kpvt\kpvt_3",2.55,1.1,1350};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
		};
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsafrf\addons\rhs_sounds\kpvt\kpvt_1",2.55,1.1,1350};
				begin2[] = {"rhsafrf\addons\rhs_sounds\kpvt\kpvt_2",2.55,1.1,1350};
				begin3[] = {"rhsafrf\addons\rhs_sounds\kpvt\kpvt_3",2.55,1.1,1350};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
	};
	class rhs_weap_kpvt: KPVT
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsafrf\addons\rhs_sounds\kpvt\kpvt_1",2.55,1.1,1350};
			begin2[] = {"rhsafrf\addons\rhs_sounds\kpvt\kpvt_2",2.55,1.1,1350};
			begin3[] = {"rhsafrf\addons\rhs_sounds\kpvt\kpvt_3",2.55,1.1,1350};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
		};
		class manual: MGun
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsafrf\addons\rhs_sounds\kpvt\kpvt_1",2.55,1.1,1350};
				begin2[] = {"rhsafrf\addons\rhs_sounds\kpvt\kpvt_2",2.55,1.1,1350};
				begin3[] = {"rhsafrf\addons\rhs_sounds\kpvt\kpvt_3",2.55,1.1,1350};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
	};
	class RHS_weap_GSh30: gatling_30mm
	{
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsafrf\addons\rhs_sounds\gsh30\gsh30_1",2.5,1.1,1550};
				begin2[] = {"rhsafrf\addons\rhs_sounds\gsh30\gsh30_2",2.5,1.1,1550};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
};
//};
