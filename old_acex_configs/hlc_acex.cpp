// ****************
//
// HLC_AK X ACEX_SM sound replacement
// by
// 10Dozen [MFOR]
//
// ****************
//
// All new content was taken from ACEX_SM mod. 
// No Steam Workshop allowed!

// ****************

#define _ARMA_

class CfgPatches
{
	class x_dzn_ak
	{
		units[] = {};
		weapons[] = {};
		requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core","hlcweapons_aks"};
		version = "V0.1";
		author = "10Dozen";	
	};
};

class cfgRecoils 
{
	dzn_AK_Recoil[] = { 0,0.06,0.027,		0.52,0.03,0.023,		0.73,0.028,0.025,		0.76,0.05,0.017};
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

class CfgMagazines 
{
	class 30Rnd_556x45_Stanag;
	class hlc_10rnd_12g_buck_S12: 30Rnd_556x45_Stanag
	{
		mass = 15;
		displayName = "$STR_xdzn_ak_10Rnd_12g_buck_s12";
		displayNameShort = "$STR_xdzn_ak_10Rnd_12g_buck_s12_short";
		descriptionShort = "$STR_xdzn_ak_10Rnd_12g_buck_s12_desc";
	};
	class hlc_10rnd_12g_slug_S12: 30Rnd_556x45_Stanag
	{
		mass = 15;
		displayName = "$STR_xdzn_ak_10Rnd_12g_slug_s12";
		displayNameShort = "$STR_xdzn_ak_10Rnd_12g_slug_s12_short";
		descriptionShort = "$STR_xdzn_ak_10Rnd_12g_slug_s12_desc";
	};
	
	class hlc_30Rnd_545x39_B_AK: 30Rnd_556x45_Stanag
	{
		mass = 12;
		displayName = "$STR_xdzn_ak_30Rnd_545_b_ak";
		displayNameShort = "$STR_xdzn_ak_30Rnd_545_b_ak_short";
		descriptionShort = "$STR_xdzn_ak_30Rnd_545_b_ak_desc";
	};
	class hlc_30Rnd_545x39_S_AK: 30Rnd_556x45_Stanag
	{
		mass = 12;
		displayName = "$STR_xdzn_ak_30Rnd_545_s_ak";
		displayNameShort = "$STR_xdzn_ak_30Rnd_545_s_ak_short";
		descriptionShort = "$STR_xdzn_ak_30Rnd_545_s_ak_desc";
	};
	class hlc_30Rnd_545x39_t_ak: hlc_30Rnd_545x39_B_AK
	{
		mass = 12;
		displayName = "$STR_xdzn_ak_30Rnd_545_t_ak";
		displayNameShort = "$STR_xdzn_ak_30Rnd_545_t_ak_short";
		descriptionShort = "$STR_xdzn_ak_30Rnd_545_t_ak_desc";
	};
	class hlc_45Rnd_545x39_t_rpk: hlc_30Rnd_545x39_T_ak
	{
		mass = 18;
		displayName = "$STR_xdzn_ak_45Rnd_545_t_rpk";
		displayNameShort = "$STR_xdzn_ak_45Rnd_545_t_rpk_short";
		descriptionShort = "$STR_xdzn_ak_45Rnd_545_t_rpk_desc";
	};
	class hlc_30Rnd_545x39_EP_ak: hlc_30Rnd_545x39_B_AK
	{
		mass = 12;
		displayName = "$STR_xdzn_ak_30Rnd_545_ep_ak";
		displayNameShort = "$STR_xdzn_ak_30Rnd_545_ep_ak_short";
		descriptionShort = "$STR_xdzn_ak_30Rnd_545_ep_ak_desc";
	};
	class hlc_30Rnd_762x39_b_ak: 30Rnd_556x45_Stanag
	{
		mass = 28;
		displayName = "$STR_xdzn_ak_30Rnd_762_b_ak";
		displayNameShort = "$STR_xdzn_ak_30Rnd_762_b_ak_short";
		descriptionShort = "$STR_xdzn_ak_30Rnd_762_b_ak_desc";
	};
	class hlc_30Rnd_762x39_t_ak: hlc_30Rnd_762x39_b_ak
	{
		mass = 28;
		displayName = "$STR_xdzn_ak_30Rnd_762_t_ak";
		displayNameShort = "$STR_xdzn_ak_30Rnd_762_t_ak_short";
		descriptionShort = "$STR_xdzn_ak_30Rnd_762_t_ak_desc";
	};
	class hlc_30rnd_762x39_s_ak: hlc_30Rnd_762x39_b_ak
	{
		mass = 28;
		displayName = "$STR_xdzn_ak_30Rnd_762_s_ak";
		displayNameShort = "$STR_xdzn_ak_30Rnd_762_s_ak_short";
		descriptionShort = "$STR_xdzn_ak_30Rnd_762_s_ak_desc";
	};
	class hlc_45Rnd_762x39_t_rpk: 30Rnd_556x45_Stanag
	{
		mass = 42;
		displayName = "$STR_xdzn_ak_45Rnd_762_t_rpk";
		displayNameShort = "$STR_xdzn_ak_45Rnd_762_t_rpk_short";
		descriptionShort = "$STR_xdzn_ak_45Rnd_762_t_rpk_desc";
	};
	class hlc_45Rnd_762x39_m_rpk: hlc_45Rnd_762x39_t_rpk
	{
		mass = 42;
		displayName = "$STR_xdzn_ak_45Rnd_762_m_rpk";
		displayNameShort = "$STR_xdzn_ak_45Rnd_762_m_rpk_short";
		descriptionShort = "$STR_xdzn_ak_45Rnd_762_m_rpk_desc";
	};
	class hlc_75Rnd_762x39_m_rpk: hlc_45Rnd_762x39_m_rpk
	{
		mass = 66;
		displayName = "$STR_xdzn_ak_75Rnd_762_m_rpk";
		displayNameShort = "$STR_xdzn_ak_75Rnd_762_m_rpk_short";
		descriptionShort = "$STR_xdzn_ak_75Rnd_762_m_rpk_desc";
	};
	class 1Rnd_HE_Grenade_shell;
	class hlc_VOG25_AK: 1Rnd_HE_Grenade_shell
	{
		mass = 8;
		displayName = "$STR_xdzn_ak_VOG25_HE";
		displayNameShort = "$STR_xdzn_ak_VOG25_HE_short";
		descriptionShort = "$STR_xdzn_ak_VOG25_HE_desc";
	};
	class hlc_GRD_White: 1Rnd_HE_Grenade_shell
	{
		mass = 6;
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
		displayname = "$STR_xdzn_ak_opt_pso1";
		descriptionShort  = "$STR_xdzn_ak_opt_pso1_desc";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 17;
		};
	};
	class HLC_Optic_1p29: HLC_Optic_PSO1
	{
		displayname = "$STR_xdzn_ak_opt_1p29";
		descriptionShort  = "$STR_xdzn_ak_opt_1p29_desc";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 20;
		};
	};
	class muzzle_snds_H;
	class hlc_muzzle_545SUP_AK: muzzle_snds_H
	{
		displayname = "$STR_xdzn_ak_muz_545_sd_ak";
		descriptionShort  = "$STR_xdzn_ak_muz_545_sd_ak_desc";
	};
	class ItemInfo;
	class muzzle_snds_M;
	class hlc_muzzle_762SUP_AK: muzzle_snds_M
	{
		displayName = "$STR_xdzn_ak_muz_762_sd_ak";
		descriptionShort  = "$STR_xdzn_ak_muz_762_sd_ak_desc";
	};
//
// Weapons
//
	class hlc_ak_base: Rifle_Base_F
	{		
		displayName = "$STR_xdzn_ak_ak_base";
		class Library
		{
			libTextDesc = "$STR_xdzn_ak_ak_base";
		};
		descriptionShort  = "$STR_xdzn_ak_ak_base_desc";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 88;
		};		
		reloadAction = "HLC_GestureReloadRPK";
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
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire1",1.77828,1,1100};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire2",1.77828,1,1100};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire3",1.77828,1,1100};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};		
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		class FullAuto: Mode_FullAuto
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
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire1",1.77828,1,1100};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire2",1.77828,1,1100};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire3",1.77828,1,1100};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\rpk_reload_me",0.74,1,30};
	};
	class hlc_rifle_ak74: hlc_ak_base
	{
		displayName = "$STR_xdzn_ak_ak74";
		descriptionShort  = "$STR_xdzn_ak_ak74_desc";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 88;
		};
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
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire1",1.77828,1,1100};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire2",1.77828,1,1100};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire3",1.77828,1,1100};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};		
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		class FullAuto: Mode_FullAuto
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
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire1",1.77828,1,1100};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire2",1.77828,1,1100};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire3",1.77828,1,1100};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\rpk_reload_me",0.74,1,30};
	};
	class hlc_rifle_ak74_dirty: hlc_rifle_ak74
	{
		displayName = "$STR_xdzn_ak_ak74_worn";
		descriptionShort  = "$STR_xdzn_ak_ak74_worn_desc";
	};
	class hlc_rifle_aks74: hlc_rifle_ak74
	{
		displayName = "$STR_xdzn_ak_aks74";
		descriptionShort  = "$STR_xdzn_ak_aks74_desc";
		reloadAction = "HLC_GestureReloadRPK";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
		};
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
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire1",1.77828,1,1100};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire2",1.77828,1,1100};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire3",1.77828,1,1100};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};		
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		class FullAuto: Mode_FullAuto
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
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire1",1.77828,1,1100};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire2",1.77828,1,1100};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\ak74_fire3",1.77828,1,1100};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};	
	};
	class optic_ACO_grn;
	class hlc_optic_kobra: optic_ACO_grn
	{
		displayName = "$STR_xdzn_ak_opt_kobra";
		descriptionShort  = "$STR_xdzn_ak_opt_kobra_desc";
	};
	class hlc_optic_goshawk: optic_ACO_grn
	{
		displayName = "$STR_xdzn_ak_opt_goshawk";
		descriptionShort  = "$STR_xdzn_ak_opt_goshawk_desc";
	};

	class hlc_rifle_ak12: hlc_rifle_aks74
	{
		displayName = "$STR_xdzn_ak_ak12";
		descriptionShort  = "$STR_xdzn_ak_ak12_desc";	
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 92;
		};	
	};
	class hlc_rifle_aks74u: hlc_rifle_ak74
	{
		displayName = "$STR_xdzn_ak_aks74u";
		descriptionShort  = "$STR_xdzn_ak_aks74u_desc";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 78;
		};	
		class FullAuto: Mode_FullAuto
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
			begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74u_fire1",1.77828,1,1100};
			begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74u_fire2",1.77828,1,1100};
			begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74u_fire3",1.77828,1,1100};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
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
			begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74u_fire1",1.77828,1,1100};
			begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74u_fire2",1.77828,1,1100};
			begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74u_fire3",1.77828,1,1100};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		class Library
		{
			libTextDesc = "$STR_xdzn_ak_aks74u";
		};
	};

	class hlc_rifle_ak47: hlc_rifle_ak74
	{
		displayName = "$STR_xdzn_ak_ak47";
		descriptionShort  = "$STR_xdzn_ak_ak47_desc";
		recoil = "dzn_AK_Recoil";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 124;
		};	
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\rpk_reload_me",0.74,1,30};
		class FullAuto: Mode_FullAuto
		{
			recoil = "recoil_auto_dmr";
			recoilProne = "recoil_auto_prone_dmr";
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire1",1.77828,1,1700};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire2",1.77828,1,1700};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire2",1.77828,1.027,1700};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		class Single: Mode_SemiAuto
		{		
			recoil = "recoil_single_dmr";
			recoilProne = "recoil_single_prone_dmr";
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire1",1.77828,1,1700};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire2",1.77828,1,1700};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire2",1.77828,1.027,1700};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		class Library
		{
			libTextDesc = "Izhmash AK47 (Type 1)";
		};
	};
	class hlc_rifle_akm: hlc_rifle_ak47
	{
		displayName = "$STR_xdzn_ak_akm";
		descriptionShort  = "$STR_xdzn_ak_akm_desc";
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 91;
		};
		class FullAuto: Mode_FullAuto
		{
			recoil = "recoil_auto_dmr";
			recoilProne = "recoil_auto_prone_dmr";
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire1",1.77828,1,1700};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire2",1.77828,1,1700};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire2",1.77828,1.027,1700};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		class Single: Mode_SemiAuto
		{
			recoil = "recoil_single_dmr";
			recoilProne = "recoil_single_prone_dmr";
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire1",1.77828,1,1700};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire2",1.77828,1,1700};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire2",1.77828,1.027,1700};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
	};
	class hlc_rifle_akmgl: hlc_rifle_akm
	{
		displayName = "$STR_xdzn_ak_akm_gl";
		descriptionShort  = "$STR_xdzn_ak_akm_gl_desc";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 131;
		};
		class hlc_GP25_AKM: UGL_F
		{
			reloadMagazineSound[] = {"\x_dzn_ak\dzn_acex_sound\gp30_reload",1.0,1,10};		
			sound[] = {"\x_dzn_ak\dzn_acex_sound\gp30_fire",1,1,100};		
		};
	};
	class hlc_rifle_rpk: hlc_rifle_ak47
	{
		displayName = "$STR_xdzn_ak_rpk";
		descriptionShort  = "$STR_xdzn_ak_rpk_desc";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 139;
		};
		class FullAuto: Mode_FullAuto
		{
			recoil = "recoil_auto_dmr";
			recoilProne = "recoil_auto_prone_dmr";
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire1",1.77828,1,1700};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire2",1.77828,1,1700};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire2",1.77828,1.027,1700};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
		class Single: Mode_SemiAuto
		{
			recoil = "recoil_single_dmr";
			recoilProne = "recoil_single_prone_dmr";
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire1",1.77828,1,1700};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire2",1.77828,1,1700};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\akm_fire2",1.77828,1.027,1700};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1,80};
				begin2[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,0.97,80};
				begin3[] = {"\x_dzn_ak\dzn_acex_sound\aks74un_fire",1,1.016,80};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			};
		};
	};
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
		displayName = "$STR_xdzn_ak_aks74_gl";
		descriptionShort  = "$STR_xdzn_ak_aks74_gl_desc";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 126;
		};
		class hlc_GP30_AKS74: UGL_F
		{
			reloadMagazineSound[] = {"\x_dzn_ak\dzn_acex_sound\gp30_reload",1.0,1,10};
			sound[] = {"\x_dzn_ak\dzn_acex_sound\gp30_fire",1,1,100};			
		};
	};
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
		displayName = "$STR_xdzn_ak_aek971";
		descriptionShort  = "$STR_xdzn_ak_aek971_desc";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 95;
		};
	};
	class hlc_rifle_saiga12k: hlc_rifle_ak47
	{
		displayName = "$STR_xdzn_ak_saiga12k";
		descriptionShort  = "$STR_xdzn_ak_saiga12k_desc";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
};
//};
