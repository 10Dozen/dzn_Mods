// This is 10Dozen's upgrade to CUP PK


#define _ARMA_

//ndefs=4
enum {
	StabilizedInAxesNone = 0,
	StabilizedInAxisX = 1,
	StabilizedInAxisY = 2,
	StabilizedInAxesBoth = 3
};

//Class cup_weapons_pk : config.bin{
class CfgPatches
{
	class x_dzn_acex_cup_pk
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_PK","CUP_Weapons_WeaponsCore","CUP_Weapons_East_Attachments","CUP_Weapons_Ammunition"};
	};
};


// PKM/PKP ************************************
#define SOUND_PKM				begin1[] = {"\x_dzn_acex_cup_pk\CUP\Weapons\CUP_Weapons_PK\acex_sound\pkm_fire1.wss",1.77828,1,1700};begin2[] = {"\x_dzn_acex_cup_pk\CUP\Weapons\CUP_Weapons_PK\acex_sound\pkm_fire2.wss",1.77828,1,1700};begin3[] = {"\x_dzn_acex_cup_pk\CUP\Weapons\CUP_Weapons_PK\acex_sound\pkm_fire3.wss",1.77828,1,1700};begin4[] = {"\x_dzn_acex_cup_pk\CUP\Weapons\CUP_Weapons_PK\acex_sound\pkm_fire2.wss",1.77828,1,1700};soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
#define SOUND_PKM_SD			SOUND_PKM

#define SOUND_PKP				SOUND_PKM
#define SOUND_PKP_SD			SOUND_PKM
#define SOUND_PKP_FA			SOUND_PKM
#define SOUND_PKP_FA_SD			SOUND_PKM



class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_PerchenegMount;
class CUP_EastMuzzleSlotPBS4;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class CUP_lmg_PKM: Rifle_Long_Base_F
	{		
		class manual: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SOUND_PKM
			};
		};
	};	
};
//};
