#define _ARMA_

class CfgPatches
{
	class tS_Mag_CUP
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_Ammunition","CUP_Weapons_AK","CUP_Weapons_SVD","CUP_Weapons_PK"};
		magazines[] = {};
		ammo[] = {};
		
		version = "v0.1";
		author = "10Dozen";
	};
};

class cfgMagazines
{
	class CA_Magazine;
	// Type:	5.45x39mm
	#define		SET_CLASS_545x39mm	{ magazineGroup[] = {"tS_Mag_545x39mm"}; }
	
	class CUP_30Rnd_545x39_AK_M : CA_Magazine SET_CLASS_545x39mm
	class CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M : CUP_30Rnd_545x39_AK_M  SET_CLASS_545x39mm
	class CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M : CUP_30Rnd_545x39_AK_M SET_CLASS_545x39mm
	class CUP_30Rnd_TE1_White_Tracer_545x39_AK_M : CUP_30Rnd_545x39_AK_M SET_CLASS_545x39mm
	class CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M : CUP_30Rnd_545x39_AK_M SET_CLASS_545x39mm
	class CUP_30Rnd_Subsonic_545x39_AK_M : CUP_30Rnd_545x39_AK_M SET_CLASS_545x39mm
	/*
	class CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M : CA_Magazine SET_CLASS_545x39mm
	class CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M : CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M SET_CLASS_545x39mm
	

	// Type:		7.62x39mm AK mag
	#define		SET_CLASS_762x39mm	{ magazineGroup[] = {"tS_Mag_762x39mm"}; }
	class CUP_30Rnd_762x39_AK47_M : CA_Magazine SET_CLASS_762x39mm
	
	// Type:		762x54mmR SVD mag
	#define		SET_CLASS_762x54mmR_SVD	{ magazineGroup[] = {"tS_Mag_762x54mmR_SVD"}; }
	class CUP_10Rnd_762x54_SVD_M : CA_Magazine SET_CLASS_762x54mmR_SVD
	
	// Type:		762x54mmR MG box
	#define		SET_CLASS_762x54mmR_Box	{ magazineGroup[] = {"tS_Mag_762x54mmR_Box"}; }
	class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M : CA_Magazine SET_CLASS_762x54mmR_Box
	
	// Type:		VOG UGL round
	#define		SET_CLASS_VOG	{ magazineGroup[] = {"tS_Mag_VOG"}; }
	
	class 1Rnd_HE_Grenade_shell;
	class CUP_1Rnd_HE_GP25_M : CA_Magazine SET_CLASS_VOG
	class CUP_FlareWhite_GP25_M : CA_Magazine SET_CLASS_VOG
	class CUP_FlareGreen_GP25_M : CUP_FlareWhite_GP25_M SET_CLASS_VOG
	class CUP_FlareRed_GP25_M : CUP_FlareWhite_GP25_M SET_CLASS_VOG
	class CUP_FlareYellow_GP25_M : CUP_FlareWhite_GP25_M SET_CLASS_VOG
	class CUP_IlumFlareWhite_GP25_M : CUP_FlareWhite_GP25_M SET_CLASS_VOG
	class CUP_IlumFlareRed_GP25_M : CUP_FlareRed_GP25_M SET_CLASS_VOG
	class CUP_IlumFlareGreen_GP25_M : CUP_FlareGreen_GP25_M SET_CLASS_VOG
	class CUP_1Rnd_SMOKE_GP25_M : CUP_1Rnd_HE_GP25_M SET_CLASS_VOG
	class CUP_1Rnd_SmokeRed_GP25_M : CUP_1Rnd_SMOKE_GP25_M SET_CLASS_VOG
	class CUP_1Rnd_SmokeGreen_GP25_M : CUP_1Rnd_SMOKE_GP25_M SET_CLASS_VOG
	class CUP_1Rnd_SmokeYellow_GP25_M : CUP_1Rnd_SMOKE_GP25_M SET_CLASS_VOG
	*/
};
/*
class cfgWeapons
{
	
	#define	ADD_MAG_545x39mm	{ magazines[] += {"tS_Mag_545x39mm"}; };
	#define	ADD_MAG_762x39mm	{ magazines[] += {"tS_Mag_762x39mm"}; };
	#define	ADD_MAG_762x54R_Box	{ magazines[] += {"tS_Mag_762x54mmR_Box"}; };
	#define	ADD_MAG_762x54R_SVD	{ magazines[] += {"tS_Mag_762x54mmR_SVD"}; };
	#define	ADD_MAG_VOG		{ magazines[] += {"tS_Mag_VOG"}; };
	
	class Rifle_Base_F;	
	class Rifle_Long_Base_F: Rifle_Base_F;
	class CUP_lmg_PKM: Rifle_Long_Base_F ADD_MAG_762x54R_Box
	class CUP_lmg_Pecheneg: CUP_lmg_PKM ADD_MAG_762x54R_Box
	class CUP_lmg_Pecheneg_PScope: CUP_lmg_Pecheneg ADD_MAG_762x54R_Box

	class CUP_srifle_SVD: Rifle_Base_F ADD_MAG_762x54R_SVD
	class CUP_srifle_SVD_des: CUP_srifle_SVD ADD_MAG_762x54R_SVD
	class CUP_srifle_SVD_des_ghillie_pso: CUP_srifle_SVD ADD_MAG_762x54R_SVD
	class CUP_srifle_SVD_wdl_ghillie: CUP_srifle_SVD_des_ghillie_pso ADD_MAG_762x54R_SVD
};
*/