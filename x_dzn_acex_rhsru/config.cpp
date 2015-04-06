// This is 10Dozen's upgrade to RHS RU

#define _ARMA_

//Class rhs_sounds : config.bin{
class CfgPatches
{
	class x_dzn_acex_rhsru
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"rhs_c_weapons","rhs_c_heavyWeapons","rhs_sounds"};
		magazines[] = {};
		ammo[] = {};
		
		version = "V0.1";
		author = "10Dozen";
	};
};

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
	class rhs_weap_ak74m: rhs_weap_ak74m_Base_F{};
	class rhs_weap_akm: rhs_weap_ak74m
	{
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
	};
	
	class rhs_weap_ak103_base: rhs_weap_akm{};
	class rhs_weap_ak103: rhs_weap_ak103_base{};
	class rhs_weap_ak103_1: rhs_weap_ak103_base{};
	class rhs_weap_ak103_2: rhs_weap_ak103_base{};
	class rhs_pkp_base: Rifle_Long_Base_F
	{		
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_PKP
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_PKP_SD
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_PKP_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_PKP_FA_SD
			};
		};
	};
	class rhs_weap_pkp: rhs_pkp_base{};
	class rhs_weap_rpk74m: rhs_weap_pkp
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_RPK74
			};
		};
		class Manual: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_RPK74_FA
			};
		};
	};
	class PKT: MGun{};
	class rhs_weap_pkt: PKT
	{
		class StandardSound
		{
			SOUND_PKM
		};
		class manual: MGun
		{
			class StandardSound
			{
				SOUND_PKM
			};
		};
	};	
	
};
//};
