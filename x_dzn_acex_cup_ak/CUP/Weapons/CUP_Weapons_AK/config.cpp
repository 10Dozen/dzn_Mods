// This is 10Dozen's upgrade to RHS RU

#define _ARMA_

//ndefs=4
enum {
	StabilizedInAxesNone = 0,
	StabilizedInAxisX = 1,
	StabilizedInAxisY = 2,
	StabilizedInAxesBoth = 3
};

//Class cup_weapons_ak : config.bin{
class CfgPatches
{
	class x_dzn_acex_cup_ak
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_AK","CUP_Weapons_WeaponsCore","CUP_Weapons_East_Attachments","CUP_Weapons_Ammunition"};
	};
};


// AK 74 **************************************
#define SOUND_AK74				begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\ak74_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\ak74_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\ak74_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AK74_SD			begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74un_fire.wss",1,1,80};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74un_fire.wss",1,0.97,80};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74un_fire.wss",1,1.016,80};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AK74_BURST		begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\ak74_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\ak74_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\ak74_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AK74_BURST_SD		SOUND_AK74_SD
#define SOUND_AK74_FA			begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\ak74_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\ak74_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\ak74_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AK74_FA_SD		begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74un_fire.wss",1,1,80};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74un_fire.wss",1,0.97,80};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74un_fire.wss",1,1.016,80};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};

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
#define SOUND_AKSU				begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74u_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74u_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74u_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKSU_SD			begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74un_fire",1,1,80};begin2[]={"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74un_fire",1,0.97,80};begin3[]={"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74un_fire",1,1.016,80};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKSU_BURST		begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74u_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74u_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74u_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKSU_BURST_SD		SOUND_AKSU_SD
#define SOUND_AKSU_FA			begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74u_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74u_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\aks74u_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKSU_FA_SD		SOUND_AKSU_SD

#define SOUND_AK12U				SOUND_AKSU
#define SOUND_AK12U_SD			SOUND_AKSU_SD
#define SOUND_AK12U_BURST		SOUND_AKSU_BURST
#define SOUND_AK12U_BURST_SD	SOUND_AKSU_BURST_SD
#define SOUND_AK12U_FA			SOUND_AKSU_FA
#define SOUND_AK12U_FA_SD		SOUND_AKSU_FA_SD

// AKM ****************************************
#define SOUND_AKM				begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\akm_fire1.wss",1.77828,1,1700};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\akm_fire2.wss",1.77828,1,1700};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\akm_fire2.wss",1.77828,1.027,1700};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKM_SD			SOUND_AK74_SD
#define SOUND_AKM_BURST			begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\akm_fire1.wss",1.77828,1,1700};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\akm_fire2.wss",1.77828,1,1700};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\akm_fire2.wss",1.77828,1.027,1700};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKM_BURST_SD		SOUND_AK74_BURST_SD
#define SOUND_AKM_FA			begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\akm_fire1.wss",1.77828,1,1700};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\akm_fire2.wss",1.77828,1,1700};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\akm_fire2.wss",1.77828,1.027,1700};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKM_FA_SD			SOUND_AK74_FA_SD

// RPK 762 ************************************
#define SOUND_RPK				SOUND_AKM
#define SOUND_RPK_SD			SOUND_AK74_SD
#define SOUND_RPK_FA			SOUND_AKM_FA
#define SOUND_RPK_FA_SD			SOUND_AKM_FA_SD

// RPK74 **************************************
#define SOUND_RPK74				begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\rpk74_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\rpk74_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\rpk74_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.34,"begin3",0.33};
#define SOUND_RPK74_SD			SOUND_AK74_SD
#define SOUND_RPK74_BURST		SOUND_RPK74
#define SOUND_RPK74_BURST_SD	SOUND_AK74_SD
#define SOUND_RPK74_FA			begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\rpk74_fire1.wss",1.77828,1,1100};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\rpk74_fire2.wss",1.77828,1,1100};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\rpk74_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_RPK74_FA_SD		SOUND_AK74_FA_SD


#define SOUND_RPK12				SOUND_RPK74
#define SOUND_RPK12_SD			SOUND_RPK74_SD
#define SOUND_RPK12_BURST		SOUND_RPK74_BURST
#define SOUND_RPK12_BURST_SD	SOUND_RPK74_BURST_SD
#define SOUND_RPK12_FA			SOUND_RPK74_FA
#define SOUND_RPK12_FA_SD		SOUND_RPK74_FA_SD

// PKM/PKP ************************************
#define SOUND_PKM				begin1[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\pkm_fire1.wss",1.77828,1,1700};begin2[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\pkm_fire2.wss",1.77828,1,1700};begin3[] = {"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\pkm_fire3.wss",1.77828,1,1700};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_PKM_SD			SOUND_PKM

#define SOUND_PKP				SOUND_PKM
#define SOUND_PKP_SD			SOUND_PKM
#define SOUND_PKP_FA			SOUND_PKM
#define SOUND_PKP_FA_SD			SOUND_PKM

// GP-25/30 ***********************************
#define	SOUND_GP				sound[]={"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\gp30_fire.wss",1,1,100};
#define	SOUND_GP_RELOAD			reloadMagazineSound[]={"\x_dzn_acex_cup_ak\CUP\Weapons\CUP_Weapons_AK\acex_sound\gp30_reload.wss",0.0316228,1,20};





class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_DovetailMount;
class CUP_EastMuzzleSlotPBS4;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class CUP_arifle_AK_Base: Rifle_Base_F
	{		
		class Single;
		class Burst;
		class FullAuto;
		class GP25Muzzle: UGL_F
		{
			SOUND_GP
			SOUND_GP_RELOAD
		};		
	};
	class CUP_arifle_AKS_Base;
	class CUP_arifle_AK107_Base;
	class CUP_arifle_AK47: CUP_arifle_AK_Base
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
		class Burst: Mode_Burst
		{
			
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AKM_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AKM_BURST_SD
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
	class CUP_arifle_AK74: CUP_arifle_AK_Base
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
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_BURST_SD
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
	class CUP_arifle_AK74M: CUP_arifle_AK_Base
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
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_BURST_SD
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
	class CUP_arifle_AK74M_GL: CUP_arifle_AK_Base
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
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_BURST_SD
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
	class CUP_arifle_AK107: CUP_arifle_AK107_Base
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
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_BURST_SD
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
	class CUP_arifle_AK107_GL: CUP_arifle_AK107_Base
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
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_BURST_SD
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
	class CUP_arifle_AKS74: CUP_arifle_AKS_Base
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
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_BURST_SD
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
	class CUP_arifle_AKS74U: CUP_arifle_AKS_Base
	{
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
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AKSU_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AKSU_BURST_SD
			};
		};
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
	};
	class CUP_arifle_AK74_GL: CUP_arifle_AK_Base
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
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_AK74_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AK74_BURST_SD
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
	class CUP_arifle_AKM: CUP_arifle_AK_Base
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
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType
			{
				SOUND_AKM_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AKM_BURST_SD
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
	class CUP_arifle_AKS: CUP_arifle_AKM
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
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType
			{
				SOUND_AKM_BURST
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_AKM_BURST_SD
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
	class CUP_arifle_AKS_Gold;
	class CUP_arifle_RPK74: CUP_arifle_AK74
	{
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType
			{
				SOUND_RPK74_FA
			};
		};
		class manual: Mode_FullAuto
		{
			
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType
			{
				SOUND_RPK74_FA
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_RPK74_FA_SD
			};
		};		
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;			
			class StandardSound: BaseSoundModeType
			{
				SOUND_RPK74
			};
			class SilencedSound: BaseSoundModeType
			{
				SOUND_RPK74_SD
			};
		};
	};	
};
//};
