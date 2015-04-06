// This is 10Dozen's upgrade to HLC AK.

#define _ARMA_

//Class hlc_wp_ak : config.bin{
class CfgPatches
{
	class x_dzn_acex_hlcak
	{
		units[] = {};
		weapons[] = {};		
		magazines[] = {};
		requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core","hlcweapons_aks"};
		
		version = "V0.1";
		author = "10Dozen";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class ItemCore;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;
class GrenadeLauncher;
class UGL_F;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;

// DEFINES
#define	STRNAME(NAME)	displayName = "NAME";displayNameShort = "NAME_short";descriptionShort = "NAME_desc";
#define STRNAME2(NAME)	displayname = "NAME";descriptionShort = "NAME_desc";



#define SOUND_PATH  x_dzn_acex_hlcak
// AK 74 **************************************
#define SOUND_AK74				begin1[] = {"\SOUND_PATH\acex_sound\ak74_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\ak74_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\ak74_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AK74_SD			begin1[] = {"\SOUND_PATH\acex_sound\aks74un_fire.wss",1,1,80};begin2[] = {"\SOUND_PATH\acex_sound\aks74un_fire.wss",1,0.97,80};begin3[] = {"\SOUND_PATH\acex_sound\aks74un_fire.wss",1,1.016,80};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AK74_BURST		begin1[] = {"\SOUND_PATH\acex_sound\ak74_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\ak74_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\ak74_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AK74_BURST_SD		SOUND_AK74_SD
#define SOUND_AK74_FA			begin1[] = {"\SOUND_PATH\acex_sound\ak74_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\ak74_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\ak74_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AK74_FA_SD		begin1[] = {"\SOUND_PATH\acex_sound\aks74un_fire.wss",1,1,80};begin2[] = {"\SOUND_PATH\acex_sound\aks74un_fire.wss",1,0.97,80};begin3[] = {"\SOUND_PATH\acex_sound\aks74un_fire.wss",1,1.016,80};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};

#define SOUND_AEK				SOUND_AK74
#define SOUND_AEK_SD			SOUND_AK74_SD
#define SOUND_AEK_FA			SOUND_AK74_BURST
#define SOUND_AEK_FA_SD			SOUND_AK74_BURST_SD
#define SOUND_AEK_BURST			SOUND_AK74_FA
#define SOUND_AEK_BURST_SD		SOUND_AK74_FA_SD

#define SOUND_AK12				SOUND_AK74
#define SOUND_AK12_SD			SOUND_AK74_SD
#define SOUND_AK12_FA			SOUND_AK74_BURST
#define SOUND_AK12_FA_SD		SOUND_AK74_BURST_SD
#define SOUND_AK12_BURST		SOUND_AK74_FA
#define SOUND_AK12_BURST_SD		SOUND_AK74_FA_SD

// AKS 74 U / Carbine *************************
#define SOUND_AKSU				begin1[] = {"\SOUND_PATH\acex_sound\aks74u_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\aks74u_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\aks74u_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKSU_SD			begin1[] = {"\SOUND_PATH\acex_sound\aks74un_fire",1,1,80};begin2[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,0.97,80};begin3[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,1.016,80};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3"
#define SOUND_AKSU_BURST		begin1[] = {"\SOUND_PATH\acex_sound\aks74u_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\aks74u_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\aks74u_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKSU_BURST_SD		SOUND_AKSU_SD
#define SOUND_AKSU_FA			begin1[] = {"\SOUND_PATH\acex_sound\aks74u_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\aks74u_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\aks74u_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKSU_FA_SD		SOUND_AKSU_SD

#define SOUND_AK12U				SOUND_AKSU
#define SOUND_AK12U_SD			SOUND_AKSU_SD
#define SOUND_AK12U_BURST		SOUND_AKSU_BURST
#define SOUND_AK12U_BURST_SD	SOUND_AKSU_BURST_SD
#define SOUND_AK12U_FA			SOUND_AKSU_FA
#define SOUND_AK12U_FA_SD		SOUND_AKSU_FA_SD

// AKM ****************************************
#define SOUND_AKM				begin1[] = {"\SOUND_PATH\acex_sound\akm_fire1.wss",1.77828,1,1700};begin2[] = {"\SOUND_PATH\acex_sound\akm_fire2.wss",1.77828,1,1700};begin3[] = {"\SOUND_PATH\acex_sound\akm_fire2.wss",1.77828,1.027,1700};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKM_SD			SOUND_AK74_SD
#define SOUND_AKM_BURST			begin1[] = {"\SOUND_PATH\acex_sound\akm_fire1.wss",1.77828,1,1700};begin2[] = {"\SOUND_PATH\acex_sound\akm_fire2.wss",1.77828,1,1700};begin3[] = {"\SOUND_PATH\acex_sound\akm_fire2.wss",1.77828,1.027,1700};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKM_BURST_SD		SOUND_AK74_BURST_SD
#define SOUND_AKM_FA			begin1[] = {"\SOUND_PATH\acex_sound\akm_fire1.wss",1.77828,1,1700};begin2[] = {"\SOUND_PATH\acex_sound\akm_fire2.wss",1.77828,1,1700};begin3[] = {"\SOUND_PATH\acex_sound\akm_fire2.wss",1.77828,1.027,1700};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKM_FA_SD			SOUND_AK74_FA_SD

// RPK 762 ************************************
#define SOUND_RPK				SOUND_AKM
#define SOUND_RPK_SD			SOUND_AK74_SD
#define SOUND_RPK_FA			SOUND_AKM_FA
#define SOUND_RPK_FA_SD			SOUND_AKM_FA_SD

// RPK74 **************************************
#define SOUND_RPK12				begin1[] = {"\SOUND_PATH\acex_sound\rpk74_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\rpk74_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\rpk74_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.34,"begin3",0.33};
#define SOUND_RPK12_SD			SOUND_AK74_SD
#define SOUND_RPK12_BURST		SOUND_RPK12
#define SOUND_RPK12_BURST_SD	SOUND_AK74_BURST_SD
#define SOUND_RPK12_FA			begin1[] = {"\SOUND_PATH\acex_sound\rpk74_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\rpk74_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\rpk74_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_RPK12_FA_SD		SOUND_AK74_FA_SD

// PKM/PKP ************************************
#define SOUND_PKM				begin1[] = {"\SOUND_PATH\acex_sound\pkm_fire1.wss",1.77828,1,1700};begin2[] = {"\SOUND_PATH\acex_sound\pkm_fire2.wss",1.77828,1,1700};begin3[] = {"\SOUND_PATH\acex_sound\pkm_fire3.wss",1.77828,1,1700};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_PKM_SD			SOUND_PKM

#define SOUND_PKP				SOUND_PKM
#define SOUND_PKP_SD			SOUND_PKM
#define SOUND_PKP_FA			SOUND_PKM
#define SOUND_PKP_FA_SD			SOUND_PKM

// GP-25/30 ***********************************
#define	SOUND_GP				sound[]={"\SOUND_PATH\acex_sound\gp30_fire.wss",1,1,100};
#define	SOUND_GP_RELOAD			reloadMagazineSound[]={"\SOUND_PATH\acex_sound\gp30_reload.wss",0.0316228,1,20};





// CONFIGS
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class hlc_10rnd_12g_buck_S12: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_ak_10Rnd_12g_buck_s12")
	};
	class hlc_10rnd_12g_slug_S12: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_ak_10Rnd_12g_slug_s12")
	};
	class hlc_30Rnd_545x39_B_AK: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_ak_30Rnd_545_b_ak")
	};
	class hlc_30Rnd_545x39_S_AK: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_ak_30Rnd_545_s_ak")
	};
	class hlc_30Rnd_545x39_t_ak: hlc_30Rnd_545x39_B_AK
	{
		STRNAME("$STR_xdzn_ak_30Rnd_545_t_ak")
	};
	class hlc_45Rnd_545x39_t_rpk: hlc_30Rnd_545x39_T_ak
	{
		STRNAME("$STR_xdzn_ak_45Rnd_545_t_rpk")
	};
	class hlc_30Rnd_545x39_EP_ak: hlc_30Rnd_545x39_B_AK
	{
		STRNAME("$STR_xdzn_ak_30Rnd_545_ep_ak")
	};
	class hlc_30Rnd_762x39_b_ak: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_ak_30Rnd_762_b_ak")
	};
	class hlc_30Rnd_762x39_t_ak: hlc_30Rnd_762x39_b_ak
	{
		STRNAME("$STR_xdzn_ak_30Rnd_762_t_ak")
	};
	class hlc_30rnd_762x39_s_ak: hlc_30Rnd_762x39_b_ak
	{
		STRNAME("$STR_xdzn_ak_30Rnd_762_s_ak")
	};
	class hlc_45Rnd_762x39_t_rpk: 30Rnd_556x45_Stanag
	{
		STRNAME("$STR_xdzn_ak_45Rnd_762_t_rpk")
	};
	class hlc_45Rnd_762x39_m_rpk: hlc_45Rnd_762x39_t_rpk
	{
		STRNAME("$STR_xdzn_ak_45Rnd_762_m_rpk")
	};
	class hlc_75Rnd_762x39_m_rpk: hlc_45Rnd_762x39_m_rpk
	{
		STRNAME("$STR_xdzn_ak_75Rnd_762_m_rpk")
	};
	class 1Rnd_HE_Grenade_shell;
	class hlc_VOG25_AK: 1Rnd_HE_Grenade_shell
	{
		STRNAME("$STR_xdzn_ak_VOG25_HE")
	};
	
	class hlc_GRD_White: 1Rnd_HE_Grenade_shell
	{
		STRNAME("$STR_xdzn_ak_GRD_White")
	};
	class hlc_GRD_Red: hlc_grd_white
	{
		STRNAME("$STR_xdzn_ak_GRD_Red")
	};
	class hlc_GRD_green: hlc_grd_white
	{
		STRNAME("$STR_xdzn_ak_GRD_Green")
	};
	class hlc_GRD_yellow: hlc_grd_white
	{
		STRNAME("$STR_xdzn_ak_GRD_Yellow")
	};
	class hlc_GRD_orange: hlc_grd_white
	{
		STRNAME("$STR_xdzn_ak_GRD_Orange")
	};
	class hlc_GRD_purple: hlc_grd_white
	{
		STRNAME("$STR_xdzn_ak_GRD_Purple")
	};
	class hlc_GRD_blue: hlc_grd_white
	{
		STRNAME("$STR_xdzn_ak_GRD_Blue")
	};
};


class CfgWeapons
{
	class Rifle;
	class WeaponSlotsInfo;
	class optic_Hamr;
	class LMG_Zafir_F;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class optic_dms;
	class HLC_Optic_PSO1: optic_dms
	{
		STRNAME2("$STR_xdzn_ak_opt_pso1")
	};
	class HLC_Optic_1p29: HLC_Optic_PSO1
	{
		STRNAME2("$STR_xdzn_ak_opt_1p29")
	};
	class muzzle_snds_H;
	class hlc_muzzle_545SUP_AK: muzzle_snds_H
	{
		STRNAME2("$STR_xdzn_ak_muz_545_sd_ak")
	};
	class ItemInfo;
	class muzzle_snds_M;
	class hlc_muzzle_762SUP_AK: muzzle_snds_M
	{
		STRNAME2("$STR_xdzn_ak_muz_762_sd_ak")
	};
	
	class hlc_ak_base: Rifle_Base_F
	{
		STRNAME2("$STR_xdzn_ak_ak_base")
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_SD
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_FA_SD
			};
		};
	};
	
	class hlc_rifle_ak74: hlc_ak_base
	{
		STRNAME2("$STR_xdzn_ak_ak74")
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_SD
			};
		};
		class FullAuto: Mode_FullAuto
		{
			
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_FA_SD
			};
		};
	};
	
	class hlc_rifle_ak74_dirty: hlc_rifle_ak74
	{
		STRNAME2("$STR_xdzn_ak_ak74_worn")
	};
	
	class hlc_rifle_aks74: hlc_rifle_ak74
	{
		STRNAME2("$STR_xdzn_ak_aks74")
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_SD
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_FA_SD
			};
		};
	};
	
	
	class optic_ACO_grn;
	class hlc_optic_kobra: optic_ACO_grn
	{
		STRNAME2("$STR_xdzn_ak_opt_kobra")
	};
	class hlc_optic_goshawk: optic_ACO_grn
	{
		STRNAME2("$STR_xdzn_ak_opt_goshawk")
	};
	
	
	class hlc_rifle_ak12: hlc_rifle_aks74
	{
		STRNAME2("$STR_xdzn_ak_ak12")
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK12_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK12_FA_SD
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK12
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK12_SD
			};
		};
		/*
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK12_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK12_BURST_SD
			};
		};
		*/
	};
	
	
	class hlc_rifle_ak12GL: hlc_rifle_aks74
	{
		STRNAME2("$STR_xdzn_ak_ak12_gl")
		class hlc_GP30_AK12: UGL_F
		{
			SOUND_GP
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK12_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK12_FA_SD
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK12
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK12_SD
			};
		};
		/*
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK12_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK12_BURST_SD
			};
		};
		*/
	};
	
	class hlc_rifle_aku12: hlc_rifle_ak12
	{
		STRNAME2("$STR_xdzn_ak_ak12u")
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK12U_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK12U_FA_SD
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK12U
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK12U_SD
			};
		};
		/*
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK12U_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK12U_BURST_SD
			};
		};
		*/
	};
	
	class hlc_rifle_RPK12: hlc_rifle_ak12
	{
		STRNAME2("$STR_xdzn_ak_rpk12")
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_RPK12_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_RPK12_FA_SD
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_RPK12
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_RPK12_SD
			};
		};
		/*
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_RPK12_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_RPK12_BURST_SD
			};
		};
		*/
	};
	
	
	
	class hlc_rifle_aks74u: hlc_rifle_ak74
	{
		STRNAME2("$STR_xdzn_ak_aks74u")
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AKSU_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AKSU_FA_SD
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AKSU
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AKSU_SD
			};
		};
	};
	
	
	class hlc_rifle_ak47: hlc_rifle_ak74
	{
		STRNAME2("$STR_xdzn_ak_ak47")
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AKM_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AKM_FA_SD
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AKM
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AKM_SD
			};
		};
	};
	
	class hlc_rifle_akm: hlc_rifle_ak47
	{
		STRNAME2("$STR_xdzn_ak_akm")
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AKM_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AKM__FASD
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AKM
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AKM_SD
			};
		};
	};
	
	class hlc_rifle_akmgl: hlc_rifle_akm
	{
		STRNAME2("$STR_xdzn_ak_akm_gl")
		class hlc_GP25_AKM: UGL_F
		{
			SOUND_GP
			SOUND_GP_RELOAD
		};
	};
	
	
	class hlc_rifle_rpk: hlc_rifle_ak47
	{
		STRNAME2("$STR_xdzn_ak_rpk")
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_RPK_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_RPK_FA_SD
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_RPK
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_RPK_SD
			};
		};
	};
	
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
		STRNAME2("$STR_xdzn_ak_aks74_gl")
		class hlc_GP30_AKS74: UGL_F
		{
			SOUND_GP
			SOUND_GP_RELOAD
		};
	};
	
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
		STRNAME2("$STR_xdzn_ak_aek971")
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AEK_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AEK_FA_SD
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AEK_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AEK_BURST_SD
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AEK
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AEK_SD
			};
		};
	};
	
	
	class hlc_rifle_saiga12k: hlc_rifle_ak47
	{
		STRNAME2("$STR_xdzn_ak_saiga12k")
		/*
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_12K
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_12K_SD
			};
		};
		*/
	};
};
//};
