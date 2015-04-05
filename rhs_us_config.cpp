////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.59
//Sun Apr 05 11:54:44 2015 : Source 'file' date Sun Apr 05 11:54:44 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class rhsusf_sounds : config.bin{
class CfgPatches
{
	class rhsusf_sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"rhsusf_c_weapons","rhsusf_c_heavyweapons"};
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
	class LMG_RCWS: MGun{};
	class rhs_M249_base: LMG_Mk200_F
	{
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
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m249\M249_1",2.3,1,1200};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m249\M249_2",2.3,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
		};
	};
	class weap_m240_base: rhs_M249_base
	{
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m240\M240_1",2.45,1,1500};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m240\M240_2",2.45,1,1500};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
		};
	};
	class rhs_weap_m240veh: LMG_M200
	{
		class manual: MGun
		{
			displayName = "$STR_A3_LMG_RCWS0";
			reloadTime = 0.075;
			dispersion = 0.00093;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m240\M240_1",2.56,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m240\M240_2",2.56,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		reloadMagazineSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\reload",1.0,1,10};
		changeFiremodeSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\firemode",0.6,1,5};
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
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m4\m4_1",2.2,1,1200};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m4\m4_2",2.2,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\silenced_1",2.2,1,600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\silenced_2",2.2,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m4\m4_1",2.2,1,1200};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m4\m4_2",2.2,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\silenced_1",2.2,1,600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\silenced_2",2.2,1,600};
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
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m4\m4_1",2.2,1,1200};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m4\m4_2",2.2,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\silenced_1",2.2,1,600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\silenced_2",2.2,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class M203_GL: UGL_F
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
				begin1[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",2.3,1,800};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",2.3,1,800};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class M320_GL: M203_GL
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
				begin1[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",2.3,1,800};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",2.3,1,800};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_m16a4: rhs_weap_m4_Base
	{
		reloadMagazineSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\reload",1.0,1,10};
		changeFiremodeSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\firemode",0.6,1,5};
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
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m16\m16_1",2.3,1,1250};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m16\m16_2",2.3,1,1250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\silenced_1",2.2,1,600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\silenced_2",2.2,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m16\m16_1",2.3,1,1250};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m16\m16_2",2.3,1,1250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\silenced_1",2.2,1,600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\silenced_2",2.2,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_m16a4_bipod: rhs_weap_m16a4
	{
		class Single: Single{};
		class Burst: Burst{};
	};
	class rhs_weap_m14ebrri: srifle_EBR_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m14\M14_1",2.3,1,1400};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m14\M14_2",2.3,1,1400};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class M590_5RD: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m230\m230_1",2.3,1,1400};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m230\m230_2",2.3,1,1400};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class M590_8RD: M590_5RD
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m230\m230_1",2.3,1,1400};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m230\m230_2",2.3,1,1400};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_M320_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
				begin1[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",2.3,1,800};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",2.3,1,800};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class M203_GL: UGL_F
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			soundClosure[] = {};
			begin1[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",2.3,1,800};
			begin2[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",2.3,1,800};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
				begin1[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",2.3,1,800};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",2.3,1,800};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class M320_GL: M203_GL
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			soundClosure[] = {};
			begin1[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",2.3,1,800};
			begin2[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",2.3,1,800};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
				begin1[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",2.3,1,800};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",2.3,1,800};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class rhs_weap_XM2010_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2010\m2010_1",2.48,1,1200};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2010\m2010_2",2.48,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound
			{
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2010\silenced_1",2.3,1,700};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2010\silenced_2",2.3,1,700};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class Launcher;
	class Launcher_Base_F: Launcher{};
	class launch_O_Titan_F;
	class rhs_weap_M136: Launcher_Base_F
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"rhsusf\addons\rhsusf_sounds\m136\M136_1",2.3,1,900};
			begin2[] = {"rhsusf\addons\rhsusf_sounds\m136\M136_2",2.3,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
	};
	class rhs_weap_fgm148: launch_O_Titan_F
	{
		sounds[] = {"StandardSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"rhsusf\addons\rhsusf_sounds\javelin\javelin_1",2.35,1,900};
			begin2[] = {"rhsusf\addons\rhsusf_sounds\javelin\javelin_2",2.35,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		sound[] = {"rhsusf\addons\rhsusf_sounds\javelin_1",2.35,1,900};
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
	class autocannon_Base_F;
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			class player;
			class close;
			class short;
			class medium;
			class far;
		};
		class AP: autocannon_Base_F
		{
			class player;
			class close;
			class short;
			class medium;
			class far;
		};
	};
	class rhs_weap_m256: cannon_120mm
	{
		class player: player
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsusf\addons\rhsusf_sounds\120mm\120mm_1",3.3,1,2000};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\120mm\120mm_2",3.3,1,2000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class close: close
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsusf\addons\rhsusf_sounds\120mm\120mm_1",3.3,1,2000};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\120mm\120mm_2",3.3,1,2000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class short: short
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsusf\addons\rhsusf_sounds\120mm\120mm_1",3.3,1,2000};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\120mm\120mm_2",3.3,1,2000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class medium: medium
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsusf\addons\rhsusf_sounds\120mm\120mm_1",3.3,1,2000};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\120mm\120mm_2",3.3,1,2000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class far: far
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"rhsusf\addons\rhsusf_sounds\120mm\120mm_1",3.3,1,2000};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\120mm\120mm_2",3.3,1,2000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	class RHS_weap_M242BC: autocannon_30mm_CTWS
	{
		class HE: HE
		{
			class player: player
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					weaponSoundEffect = "DefaultRifle";
					begin1[] = {"rhsusf\addons\rhsusf_sounds\autocannon\autocannon_1",3,1,1800};
					begin2[] = {"rhsusf\addons\rhsusf_sounds\autocannon\autocannon_2",3,1,1800};
					soundBegin[] = {"begin1",0.5,"begin2",0.5};
				};
			};
		};
		class AP: AP
		{
			class player: player
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					weaponSoundEffect = "DefaultRifle";
					begin1[] = {"rhsusf\addons\rhsusf_sounds\autocannon\autocannon_1",3,1,1800};
					begin2[] = {"rhsusf\addons\rhsusf_sounds\autocannon\autocannon_2",3,1,1800};
					soundBegin[] = {"begin1",0.5,"begin2",0.5};
				};
			};
		};
	};
	class HMG_127: LMG_RCWS{};
	class HMG_01: HMG_127{};
	class HMG_M2: HMG_01
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class RHS_M2_Abrams_Commander: HMG_M2
	{
		class manual: manual
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
		class close: close
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
		class short: short
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
		class medium: medium
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
		class far: far
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
	};
	class RHS_M2_Abrams_Gunner: HMG_M2
	{
		class manual: manual
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
		class close: close
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
		class short: short
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
		class medium: medium
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
		class far: far
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
	};
	class RHS_M2: HMG_M2
	{
		class manual: manual
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
		class close: close
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
		class short: short
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
		class medium: medium
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
		class far: far
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_1",2.44,1,1600};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m2\m2_2",2.44,1,1600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
				soundClosure[] = {};
			};
		};
	};
	class rhs_weap_M197: CannonCore{};
	class rhs_weap_M230: rhs_weap_M197
	{
		class manual: CannonCore
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m230\m230_1",2.5,1,1700};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m230\m230_2",2.5,1,1700};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
			};
		};
	};
	class M134_minigun;
	class rhs_weap_m134_minigun_1: M134_minigun
	{
		class LowROF: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m134\m134_1",2.5,1,1700};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m134\m134_2",2.5,1,1700};
				begin3[] = {"rhsusf\addons\rhsusf_sounds\m134\m134_3",2.5,1,1700};
				begin4[] = {"rhsusf\addons\rhsusf_sounds\m134\m134_4",2.5,1,1700};
				begin5[] = {"rhsusf\addons\rhsusf_sounds\m134\m134_5",2.5,1,1700};
				soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		class HighROF: LowROF
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\m134\m134_1",2.5,1,1700};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\m134\m134_2",2.5,1,1700};
				begin3[] = {"rhsusf\addons\rhsusf_sounds\m134\m134_3",2.5,1,1700};
				begin4[] = {"rhsusf\addons\rhsusf_sounds\m134\m134_4",2.5,1,1700};
				begin5[] = {"rhsusf\addons\rhsusf_sounds\m134\m134_5",2.5,1,1700};
				soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
				weaponSoundEffect = "DefaultRifle";
			};
		};
	};
	class GMG_F;
	class GMG_20mm;
	class RHS_MK19: GMG_20mm
	{
		class manual: GMG_F
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"rhsusf\addons\rhsusf_sounds\mk19\mk19_1",2.5,1,1200};
				begin2[] = {"rhsusf\addons\rhsusf_sounds\mk19\mk19_2",2.5,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				weaponSoundEffect = "DefaultRifle";
			};
		};
	};
};
//};
