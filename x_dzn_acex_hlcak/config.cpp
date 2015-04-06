// This is 10Dozen's upgrade to HLC AK.

#define _ARMA_

//Class hlc_wp_ak : config.bin{
class CfgPatches
{
	class x_dzn_hlcak
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

#define	STRNAME(NAME)	displayName = "NAME";displayNameShort = "NAME_short";descriptionShort = "NAME_desc";
#define STRNAME2(NAME)	displayname = "NAME";descriptionShort = "NAME_desc";

#define SOUND_AK74	begin1[]={"\x_dzn_acex_hlcak\acex_sound\ak74_fire1",1.77828,1,1100};begin2[]={"\x_dzn_acex_hlcak\acex_sound\ak74_fire2",1.77828,1,1100};begin3[]={"\x_dzn_acex_hlcak\acex_sound\ak74_fire3",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AK74_SD	begin1[]={"\x_dzn_acex_hlcak\acex_sound\aks74un_fire",1,1,80};begin2[]={"\x_dzn_acex_hlcak\acex_sound\aks74un_fire",1,0.97,80};begin3[]={"\x_dzn_acex_hlcak\acex_sound\aks74un_fire",1,1.016,80};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3",0.33};	
#define SOUND_AKSU	begin1[]={"\x_dzn_acex_hlcak\acex_sound\aks74u_fire1",1.77828,1,1100};begin2[]={"\x_dzn_acex_hlcak\acex_sound\aks74u_fire2",1.77828,1,1100};begin3[]={"\x_dzn_acex_hlcak\acex_sound\aks74u_fire3",1.77828,1,1100};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKSU_SD	begin1[]={"\x_dzn_acex_hlcak\acex_sound\aks74un_fire",1,1,80};begin2[]={"\x_dzn_acex_hlcak\acex_sound\aks74un_fire",1,0.97,80};begin3[]={"\x_dzn_acex_hlcak\acex_sound\aks74un_fire",1,1.016,80};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3"
#define SOUND_AKM
#define SOUND_AKM_SD
#define SOUND_RPK
#define SOUND_RPL_SD
#define SOUND_AEK
#define SOUND_AEK_SD
#define	SOUND_GP
#define	SOUND_GP_RELOAD

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
	/*
	class hlc_GRD_White: 1Rnd_HE_Grenade_shell
	{
		STRNAME("$STR_xdzn_ak_30Rnd_545_ep_ak")
	};
	class hlc_GRD_Red: hlc_grd_white
	{
		STRNAME("$STR_xdzn_ak_30Rnd_545_ep_ak")
	};
	class hlc_GRD_green: hlc_grd_white
	{
		STRNAME("$STR_xdzn_ak_30Rnd_545_ep_ak")
	};
	class hlc_GRD_yellow: hlc_grd_white
	{
		STRNAME("$STR_xdzn_ak_30Rnd_545_ep_ak")
	};
	class hlc_GRD_orange: hlc_grd_white
	{
		STRNAME("$STR_xdzn_ak_30Rnd_545_ep_ak")
	};
	class hlc_GRD_purple: hlc_grd_white
	{
		STRNAME("$STR_xdzn_ak_30Rnd_545_ep_ak")
	};
	class hlc_GRD_blue: hlc_grd_white
	{
		STRNAME("$STR_xdzn_ak_30Rnd_545_ep_ak")
	};
	*/
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
		STRNAME("$STR_xdzn_ak_ak_base")
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
			class BaseSoundModeType
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_SD
			};
		};
	};
	
	class hlc_rifle_ak74: hlc_ak_base
	{
		STRNAME("$STR_xdzn_ak_ak74")
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
				SOUND_AK74
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_SD
			};
		};
	};
	
	class hlc_rifle_ak74_dirty: hlc_rifle_ak74
	{
		STRNAME("$STR_xdzn_ak_ak74_worn")
	};
	
	class hlc_rifle_aks74: hlc_rifle_ak74
	{
		STRNAME("$STR_xdzn_ak_aks74")
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
				SOUND_AK74
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_SD
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
		STRNAME("$STR_xdzn_ak_ak12")
		class FullAuto: Mode_FullAuto
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
		/*
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		*/
	};
	
	/*
	class hlc_rifle_ak12GL: hlc_rifle_aks74
	{
	
		class hlc_GP30_AK12: UGL_F
		{
			sound[] = {"\hlc_wp_ak\snd\gp30_fire",1.0,1,400};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	
	class hlc_rifle_aku12: hlc_rifle_ak12
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	
	class hlc_rifle_RPK12: hlc_rifle_ak12
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk74_silenced",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\rpk74_silenced",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk74_silenced",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\rpk74_silenced",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk74_silenced",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\rpk74_silenced",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	*/
	
	
	class hlc_rifle_aks74u: hlc_rifle_ak74
	{
		STRNAME("$STR_xdzn_ak_aks74u")
		class FullAuto: Mode_FullAuto
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
		STRNAME("$STR_xdzn_ak_ak47")
		class FullAuto: Mode_FullAuto
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
		STRNAME("$STR_xdzn_ak_akm)
		class FullAuto: Mode_FullAuto
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
		STRNAME("$STR_xdzn_ak_akm_gl")
		class hlc_GP25_AKM: UGL_F
		{
			SOUND_GP
			SOUND_GP_RELOAD
		};
	};
	
	
	class hlc_rifle_rpk: hlc_rifle_ak47
	{
		STRNAME("$STR_xdzn_ak_rpk")
		class FullAuto: Mode_FullAuto
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
		STRNAME("$STR_xdzn_ak_aks74_gl")
		class hlc_GP30_AKS74: UGL_F
		{
			SOUND_GP
			SOUND_GP_RELOAD
		};
	};
	
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
		STRNAME("$STR_xdzn_ak_aek971")
		class FullAuto: Mode_FullAuto
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
		class Burst: Mode_Burst
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
		STRNAME("$STR_xdzn_ak_saiga12k")
		/*
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\saiga_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\saiga_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\saiga_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		*/
	};
};
//};
