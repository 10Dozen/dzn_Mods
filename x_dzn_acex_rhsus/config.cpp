// This is 10Dozen's upgrade to RHS US.

#define _ARMA_

//Class rhsusf_sounds : config.bin{
class CfgPatches
{
	class x_dzn_acex_rhsus
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"rhsusf_c_weapons","rhsusf_c_heavyweapons","rhsusf_sounds"};		
		magazines[] = {};
		ammo[] = {};
		
		version = "V0.1";
		author = "10Dozen";
	};
};


#define	SOUND_M4
#define	SOUND_M4_SD
#define	SOUND_M4_BURST
#define	SOUND_M4_BURST_SD
#define	SOUND_M4_FA
#define	SOUND_M4_FA_SD

#define	SOUND_M16
#define	SOUND_M16_SD
#define	SOUND_M16_BURST
#define	SOUND_M16_BURST_SD


#define	SOUND_M249
#define	SOUND_M249_SD

#define	SOUND_M240
#define	SOUND_M240_SD

#define SOUND_GL
#define SOUNG_GL_RELOAD


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
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M249
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M249_SD
			};
		};
	};
	class weap_m240_base: rhs_M249_base
	{
		class manual: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M240
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M240_SD
			};
		};
	};
	class rhs_weap_m240veh: LMG_M200
	{
		class manual: MGun
		{
			class StandardSound
			{
				SOUND_M240
			};
		};
	};
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M4
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M4_SD
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M4_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M4_BURST_SD
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M4_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M4_FA_SD
			};
		};
		class M203_GL: UGL_F
		{
			class StandardSound
			{
				SOUND_GL
			};
		};
		class M320_GL: M203_GL
		{
			class StandardSound
			{
				SOUND_GL
			};
		};
	};
	
	
	class rhs_weap_m16a4: rhs_weap_m4_Base
	{
		class Single: Mode_SemiAuto
		{
			
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M16
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M16_SD
			};
		};
		class Burst: Mode_Burst
		{
			
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M16_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M16_BURST_SD
			};
		};
	};	
};
//};
