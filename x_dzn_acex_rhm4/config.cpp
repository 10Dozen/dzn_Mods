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

// DEFINES

// M4 *****************************************
#define SOUND_M4				begin1[] = {"\x_dzn_acex_rhm4\acex_sound\m4_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_rhm4\acex_sound\m4_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_rhm4\acex_sound\m4_fire2.wss",1.77828,0.97,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_M4_SD				begin1[] = {"\x_dzn_acex_rhm4\acex_sound\m4sd_fire.wss",1,1,80};begin2[] = {"\x_dzn_acex_rhm4\acex_sound\m4sd_fire.wss",1,0.96,80};begin3[] = {"\x_dzn_acex_rhm4\acex_sound\m4sd_fire.wss",1,1.02,80};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_M4_BURST			SOUND_M4
#define SOUND_M4_BURST_SD		SOUND_M4_SD
#define SOUND_M4_FA				begin1[] = {"\x_dzn_acex_rhm4\acex_sound\m4_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_rhm4\acex_sound\m4_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_rhm4\acex_sound\m4_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.6};
#define SOUND_M4_FA_SD			begin1[] = {"\x_dzn_acex_rhm4\acex_sound\m4sd_fire.wss",1,1,80};begin2[] = {"\x_dzn_acex_rhm4\acex_sound\m4sd_fire.wss",1,0.96,80};begin3[] = {"\x_dzn_acex_rhm4\acex_sound\m4sd_fire.wss",1,1.03,80};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};


// M16 ****************************************
#define SOUND_M16				begin1[] = {"\x_dzn_acex_rhm4\acex_sound\m16_fire1.wss",1.77828,1,1100};soundBegin[] = {"begin1",1};
#define SOUND_M16_SD			SOUND_M4_SD
#define SOUND_M16_BURST			begin1[] = {"\x_dzn_acex_rhm4\acex_sound\m16_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",1};
#define SOUND_M16_BURST_SD		SOUND_M4_BURST_SD
#define SOUND_M16_FA			begin1[] = {"\x_dzn_acex_rhm4\acex_sound\m16_fire3.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_rhm4\acex_sound\m16_fire3.wss",1.77828,0.97,1100};begin3[] = {"\x_dzn_acex_rhm4\acex_sound\m16_fire3.wss",1.77828,1.03,1100};soundBegin[] = {"begin1",0.32,"begin2",0.35,"begin3",0.32};
#define SOUND_M16_FA_SD			SOUND_M4_FA_SD


// Mk12 and other AR-15 based rifles **********
#define SOUND_MK12				begin1[] = {"\x_dzn_acex_rhm4\acex_sound\mk12_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_rhm4\acex_sound\mk12_fire2.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.5,"begin2",0.5};
#define SOUND_MK12_SD			SOUND_M4_SD

#define SOUND_M110				begin1[] = {"\x_dzn_acex_rhm4\acex_sound\mk17_fire1.wss",1.77828,1,1700};begin2[] = {"\x_dzn_acex_rhm4\acex_sound\mk17_fire2.wss",1.77828,1,1700};begin3[] = {"\x_dzn_acex_rhm4\acex_sound\mk17_fire2.wss",1.77828,0.98,1700};soundBegin[] = {"begin1",0.33,"begin2",0.34,"begin3",0.33};
#define SOUND_M110_SD			begin1[] = {"\x_dzn_acex_rhm4\acex_sound\mk17sd_fire.wss",1,1,110};soundbegin[] = {"begin1",1};

#define SOUND_HB				SOUND_M4
#define SOUND_HB_SD				SOUND_M4_SD
#define SOUND_HB_FA				SOUND_M4_FA
#define SOUND_HB_FA_SD			SOUND_M4_FA_SD

#define SOUND_SBR9				SOUND_M4
#define SOUND_SBR9_SD			SOUND_M4_SD
#define SOUND_SBR9_FA			SOUND_M4_FA
#define SOUND_SBR9_FA_SD		SOUND_M4_FA_SD

// HK416 **************************************
#define SOUND_416				SOUND_M4
#define SOUND_416_SD			SOUND_M4_SD
#define SOUND_416_FA			SOUND_M4_FA
#define SOUND_416_FA_SD			SOUND_M4_FA_SD


// M249 ***************************************
#define	SOUND_M249				begin1[] = {"\x_dzn_acex_rhm4\acex_sound\m249p_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_rhm4\acex_sound\m249p_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_rhm4\acex_sound\m249p_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define	SOUND_M249_SD			SOUND_M249

#define	SOUND_M249SAW			begin1[] = {"\x_dzn_acex_rhm4\acex_sound\m249_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_rhm4\acex_sound\m249_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_rhm4\acex_sound\m249_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define	SOUND_M249SAW_SD		SOUND_M249SAW

// M240 ***************************************
#define	SOUND_M240				begin1[] = {"\x_dzn_acex_rhm4\acex_sound\m240_fire1.wss",1.77828,1,1700};begin2[] = {"\x_dzn_acex_rhm4\acex_sound\m240_fire2.wss",1.77828,1,1700};begin3[] = {"\x_dzn_acex_rhm4\acex_sound\m240_fire3.wss",1.77828,1,1700};soundBegin[] = {"begin1",0.33,"begin2",0.34,"begin3",0.33};
#define	SOUND_M240_SD			SOUND_M240


// M203/AG36 **********************************
#define	SOUND_GL				sound[]={"\x_dzn_acex_rhm4\acex_sound\m203_fire.wss",1,1,100};
#define	SOUND_GL_RELOAD			reloadMagazineSound[] = {"\x_dzn_acex_rhm4\acex_sound\m203_reload.wss",0.0316228,1,20};





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
		//SHORT_NAME("$STR_xdzn_RH_m110")
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
		//SHORT_NAME("$STR_xdzn_RH_Mk11")
	};
	class RH_SR25EC: RH_m110
	{
		//SHORT_NAME("$STR_xdzn_RH_SR25EC")
	};
	class RH_m4: Rifle_Base_F
	{
		//SHORT_NAME("$STR_xdzn_RH_m4")
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
	class RH_M4sbr;
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
	/*
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
	*/
	
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
	class RH_M16A2gl;
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
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_416
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_416_SD
			};
		};
		class FullAuto: Mode_FullAuto
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
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_416
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_416_SD
			};
		};
		class FullAuto: Mode_FullAuto
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
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_416
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_416_SD
			};
		};
		class FullAuto: Mode_FullAuto
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
		class manual: Mode_FullAuto
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
