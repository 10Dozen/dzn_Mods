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

#define SOUND_AKM
#define SOUND_AKM_SD
#define SOUND_AKM_FA
#define SOUND_AKM_FA_SD

#define SOUND_AK74
#define SOUND_AK74_SD
#define SOUND_AK74_FA
#define SOUND_AK74_FA_SD

#define SOUND_RPK74
#define SOUND_RPK74_SD
#define SOUND_RPK74_FA
#define SOUND_RPK74_FA_SD

#define SOUND_PKP
#define SOUND_PKP_SD
#define SOUND_PKP_FA
#define SOUND_PKP_FA_SD

#define SOUND_PKM
#define SOUND_PKM_SD


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
		sounds[] = {"StandardSound"};
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
