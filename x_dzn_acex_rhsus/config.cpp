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



#define SOUND_PATH				x_dzn_acex_rhsus
// M4 *****************************************
#define SOUND_M4				begin1[] = {"\SOUND_PATH\acex_sound\m4_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\m4_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\m4_fire2.wss",1.77828,0.97,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_M4_SD				begin1[] = {"\SOUND_PATH\acex_sound\m4sd_fire.wss",1,1,80};begin2[] = {"\SOUND_PATH\acex_sound\m4sd_fire.wss",1,0.96,80};begin3[] = {"\SOUND_PATH\acex_sound\m4sd_fire.wss",1,1.02,80};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_M4_BURST			SOUND_M4
#define SOUND_M4_BURST_SD		SOUND_M4_SD
#define SOUND_M4_FA				begin1[] = {"\SOUND_PATH\acex_sound\m4_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\m4_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\m4_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.6};
#define SOUND_M4_FA_SD			begin1[] = {"\SOUND_PATH\acex_sound\m4sd_fire.wss",1,1,80};begin2[] = {"\SOUND_PATH\acex_sound\m4sd_fire.wss",1,0.96,80};begin3[] = {"\SOUND_PATH\acex_sound\m4sd_fire.wss",1,1.03,80};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};


// M16 ****************************************
#define SOUND_M16				begin1[] = {"\SOUND_PATH\acex_sound\m16_fire1.wss",1.77828,1,1100};soundBegin[] = {"begin1",1};
#define SOUND_M16_SD			SOUND_M4_SD
#define SOUND_M16_BURST			begin1[] = {"\SOUND_PATH\acex_sound\m16_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",1};
#define SOUND_M16_BURST_SD		SOUND_M4_BURST_SD
#define SOUND_M16_FA			begin1[] = {"\SOUND_PATH\acex_sound\m16_fire3.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\m16_fire3.wss",1.77828,0.97,1100};begin3[] = {"\SOUND_PATH\acex_sound\m16_fire3.wss",1.77828,1.03,1100};soundBegin[] = {"begin1",0.32,"begin2",0.35,"begin3",0.32};
#define SOUND_M16_FA_SD			SOUND_M4_FA_SD


// Mk12 and other AR-15 based rifles **********
#define SOUND_MK12				begin1[] = {"\SOUND_PATH\acex_sound\mk12_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\mk12_fire2.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.5,"begin2",0.5};
#define SOUND_MK12_SD			SOUND_M4_SD

#define SOUND_M110				begin1[] = {"\SOUND_PATH\acex_sound\mk17_fire1.wss",1.77828,1,1700};begin2[] = {"\SOUND_PATH\acex_sound\mk17_fire2.wss",1.77828,1,1700};begin3[] = {"\SOUND_PATH\acex_sound\mk17_fire2.wss",1.77828,0.98,1700};soundBegin[] = {"begin1",0.33,"begin2",0.34,"begin3",0.33};
#define SOUND_M110_SD			begin1[] = {"\SOUND_PATH\acex_sound\mk17sd_fire.wss",1,1,110};soundbegin[] = {"begin1",1};

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
#define	SOUND_M249				begin1[] = {"\SOUND_PATH\acex_sound\m249p_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\m249p_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\m249p_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define	SOUND_M249_SD			SOUND_M249

#define	SOUND_M249SAW			begin1[] = {"\SOUND_PATH\acex_sound\m249_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\m249_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\m249_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define	SOUND_M249SAW_SD		SOUND_M249SAW

// M240 ***************************************
#define	SOUND_M240				begin1[] = {"\SOUND_PATH\acex_sound\m240_fire1.wss",1.77828,1,1700};begin2[] = {"\SOUND_PATH\acex_sound\m240_fire2.wss",1.77828,1,1700};begin3[] = {"\SOUND_PATH\acex_sound\m240_fire3.wss",1.77828,1,1700};soundBegin[] = {"begin1",0.33,"begin2",0.34,"begin3",0.33};
#define	SOUND_M240_SD			SOUND_M240


// M203/AG36 **********************************
#define	SOUND_GL				sound[]={"\SOUND_PATH\acex_sound\m203_fire.wss",1,1,100};
#define	SOUND_GL_RELOAD			reloadMagazineSound[] = {"\SOUND_PATH\acex_sound\m203_reload.wss",0.0316228,1,20};





class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class GrenadeLauncher;
class cfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class Rifle_Base_F;
	class arifle_MX_Base_F;
	class Rifle_Long_Base_F;
	class WeaponSlotsInfo;
	class GunParticles;
	class UGL_F;
	class srifle_EBR_F;
	class LMG_Mk200_F;
	class LMG_M200;
	class MGun;
	class LMG_RCWS;
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
