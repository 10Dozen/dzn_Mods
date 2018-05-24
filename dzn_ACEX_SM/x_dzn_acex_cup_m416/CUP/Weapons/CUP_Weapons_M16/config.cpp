// This is 10Dozen's upgrade to CUP M16

#define _ARMA_

//ndefs=4
enum {
	StabilizedInAxesNone = 0,
	StabilizedInAxisX = 1,
	StabilizedInAxisY = 2,
	StabilizedInAxesBoth = 3
};

//Class cup_weapons_m16 : config.bin{
class CfgPatches
{
	class x_dzn_acex_cup_m416
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_M16","CUP_Weapons_WeaponsCore","CUP_Weapons_Ammunition","CUP_Weapons_West_Attachments"};
	};
};


// M4 *****************************************
#define SOUND_M4				begin1[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m4_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m4_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m4_fire2.wss",1.77828,0.97,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_M4_SD				begin1[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m4sd_fire.wss",1,1,80};begin2[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m4sd_fire.wss",1,0.96,80};begin3[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m4sd_fire.wss",1,1.02,80};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_M4_BURST			SOUND_M4
#define SOUND_M4_BURST_SD		SOUND_M4_SD
#define SOUND_M4_FA				begin1[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m4_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m4_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m4_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.6};
#define SOUND_M4_FA_SD			begin1[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m4sd_fire.wss",1,1,80};begin2[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m4sd_fire.wss",1,0.96,80};begin3[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m4sd_fire.wss",1,1.03,80};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};

// M16 ****************************************
#define SOUND_M16				begin1[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m16_fire1.wss",1.77828,1,1100};soundBegin[] = {"begin1",1};
#define SOUND_M16_SD			SOUND_M4_SD
#define SOUND_M16_BURST			begin1[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m16_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",1};
#define SOUND_M16_BURST_SD		SOUND_M4_BURST_SD
#define SOUND_M16_FA			begin1[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m16_fire3.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m16_fire3.wss",1.77828,0.97,1100};begin3[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m16_fire3.wss",1.77828,1.03,1100};soundBegin[] = {"begin1",0.32,"begin2",0.35,"begin3",0.32};
#define SOUND_M16_FA_SD			SOUND_M4_FA_SD

// Mk12 and other AR-15 based rifles **********
#define SOUND_MK12				begin1[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\mk12_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\mk12_fire2.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.5,"begin2",0.5};
#define SOUND_MK12_SD			SOUND_M4_SD

#define SOUND_M110				begin1[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\mk17_fire1.wss",1.77828,1,1700};begin2[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\mk17_fire2.wss",1.77828,1,1700};begin3[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\mk17_fire2.wss",1.77828,0.98,1700};soundBegin[] = {"begin1",0.33,"begin2",0.34,"begin3",0.33};
#define SOUND_M110_SD			begin1[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\mk17sd_fire.wss",1,1,110};soundbegin[] = {"begin1",1};

#define SOUND_HB				SOUND_M4
#define SOUND_HB_SD				SOUND_M4_SD
#define SOUND_HB_FA				SOUND_M4_FA
#define SOUND_HB_FA_SD			SOUND_M4_FA_SD

#define SOUND_SBR9				SOUND_M4
#define SOUND_SBR9_SD			SOUND_M4_SD
#define SOUND_SBR9_FA			SOUND_M4_FA
#define SOUND_SBR9_FA_SD		SOUND_M4_FA_SD

// M203/AG36 **********************************
#define	SOUND_GL				sound[]={"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m203_fire.wss",1,1,100};
#define	SOUND_GL_RELOAD			reloadMagazineSound[] = {"\x_dzn_acex_cup_m416\CUP\Weapons\CUP_Weapons_M16\acex_sound\m203_reload.wss",0.0316228,1,20};


class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class CUP_PicatinnyUnderMount;
class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class CUP_muzzle_snds_M16_camo;
	class CUP_muzzle_snds_M16;
	class CUP_arifle_M16_Base: Rifle_Base_f
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
		class M203: UGL_F
		{
			SOUND_GL
			SOUND_GL_RELOAD
		};
	};
	class CUP_arifle_M16A2;
	class CUP_arifle_M16A2_GL;
	class CUP_arifle_M16A4_Base;
	class CUP_arifle_M16A4_GL;
	class CUP_arifle_M16A4_Aim_Laser;
	class CUP_arifle_M16A4_GL_Laser;
	class CUP_arifle_M4_Base: CUP_arifle_M16A4_Base
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
		class M203: UGL_F
		{
			SOUND_GL
			SOUND_GL_RELOAD
		};
	};
	class CUP_arifle_M4A1_BUIS_Base;
	class CUP_arifle_M4A1_BUIS_GL;
	class CUP_arifle_M4A1_BUIS_camo_GL;
	class CUP_arifle_M4A1_BUIS_desert_GL;
	class CUP_arifle_M4A1;	
	class CUP_srifle_Mk12SPR: CUP_arifle_M4A1
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
};
//};
