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
#define SOUND_M4_BURST
#define SOUND_M4_BURST_SD
#define SOUND_M4_FA
#define SOUND_M4_FA_SD

#define SOUND_M16
#define SOUND_M16_SD
#define SOUND_M16_BURST
#define SOUND_M16_BURST_SD
#define SOUND_M16_FA
#define SOUND_M16_FA_SD

#define SOUND_MK12
#define SOUND_MK12_SD

#define SOUND_M110
#define SOUND_M110_SD

#define SOUND_416
#define SOUND_416_SD
#define SOUND_416_FA
#define SOUND_416_FA_SD

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
	class RH_m16covers_s;
	class RH_m16covers_f;
	
	
	class RH_ar10;
	class RH_m110: Rifle_Base_F
	{
		//STRNAME2("$STR_xdzn_RH_m110")
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M110
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M110_SD
			};
		};
	};
	class RH_Mk11: RH_m110
	{
		//STRNAME2("$STR_xdzn_RH_Mk11")
	};
	class RH_SR25EC: RH_m110
	{
		//STRNAME2("$STR_xdzn_RH_SR25EC")
	};
	class RH_m4: Rifle_Base_F
	{
		//STRNAME2("$STR_xdzn_RH_m4")
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
		class M203: UGL_F
		{
			class BaseSoundModeType;
			class StandardSound
			{
				SOUND_GL
			};
			SOUND_GL_RELOAD
		};
	};
	
	
	
	class RH_M4_M203;
	class RH_M4_ris;
	class RH_M4_ris_M203;
	class RH_M4A1_ris;
	class RH_M4A1_ris_M203;
	class RH_M4_ris_m;
	class RH_M4m;
	class RH_M4m_g;
	class RH_M4m_b;
	class RH_M4_moe;
	class RH_M4_moe_b;
	class RH_M4_moe_g;
	class RH_M4sbr: RH_M4A1_ris;
	class RH_M4sbr_g;
	class RH_M4sbr_b;
	
	
	class RH_hb: Rifle_Base_F
	{		
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_HB
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_HB_SD
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_HB_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_HB_FA_SD
			};
		};
	};
	class RH_hb_b;
	class RH_sbr9: Rifle_Base_F
	{		
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_SBR9
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_SBR9_SD
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_SBR9_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_SBR9_FA_SD
			};
		};
	};
	class RH_M4A6: RH_M4A1_ris
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
	};
	
	
	
	class RH_M16a1: RH_m4
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
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M16_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M16_FA_SD
			};
		};
	};
	
	class RH_M16A1gl;
	class RH_M16A2: RH_m4
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
	class RH_M16A2gl: RH_M16A2;
	class RH_M16A4: RH_M4_ris
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
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M16_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M16_FA_SD
			};
		};
	};
	class RH_M16A4gl;
	class RH_M16A3;
	
	
	class RH_M16A4_m;
	class RH_M16A6: RH_M16A4
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
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M16_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M16_FA_SD
			};
		};
	};
	
	class RH_Mk12mod1: RH_M16A4
	{		
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_MK12
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_MK12_SD
			};
		};		
	};
	class RH_SAMR;
	
	class RH_Hk416: RH_M4A1_ris
	{		
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M416
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M416_SD
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_416_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_416_FA_SD
			};
		};
	};
	
	class RH_Hk416s: RH_M4sbr
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M416
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M416_SD
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_416_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_416_FA_SD
			};
		};
	};
	
	class RH_Hk416c: RH_M4sbr
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_M416
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_M416_SD
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_416_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_416_FA_SD
			};
		};
	};	
	
	class RH_M27IAR: RH_Mk12mod1
	{		
		class manual: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_416_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_416_FA_SD
			};
		};
	};	
};


//};
