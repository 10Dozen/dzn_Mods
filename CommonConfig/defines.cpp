#define SOUND_PATH  x_dzn_acex_hlcak


// AK 74 **************************************
#define SOUND_AK74				begin1[]={"\SOUND_PATH\acex_sound\ak74_fire1",1.77828,1,1100};begin2[]={"\SOUND_PATH\acex_sound\ak74_fire2",1.77828,1,1100};begin3[]={"\SOUND_PATH\acex_sound\ak74_fire3",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AK74_SD			begin1[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,1,80};begin2[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,0.97,80};begin3[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,1.016,80};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3",0.33};	
#define SOUND_AK74_FA
#define SOUND_AK74_FA_SD

#define SOUND_AEK				SOUND_AK74
#define SOUND_AEK_SD			SOUND_AK74_SD
#define SOUND_AEK_FA			SOUND_AK74
#define SOUND_AEK_FA_SD			SOUND_AK74_SD
#define SOUND_AEK_BURST			SOUND_AK74
#define SOUND_AEK_BURST_SD		SOUND_AK74_SD

#define SOUND_AK12
#define SOUND_AK12_SD
#define SOUND_AK12_FA
#define SOUND_AK12_FA_SD
#define SOUND_AK12_BURST		SOUND_AK74
#define SOUND_AK12_BURST_SD		SOUND_AK74_SD

// AKS 74 U / Carbine *************************
#define SOUND_AKSU				begin1[]={"\SOUND_PATH\acex_sound\aks74u_fire1",1.77828,1,1100};begin2[]={"\SOUND_PATH\acex_sound\aks74u_fire2",1.77828,1,1100};begin3[]={"\SOUND_PATH\acex_sound\aks74u_fire3",1.77828,1,1100};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKSU_SD			begin1[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,1,80};begin2[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,0.97,80};begin3[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,1.016,80};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3"
#define SOUND_AKSU_FA
#define SOUND_AKSU_FA_SD

#define SOUND_AK12U
#define SOUND_AK12U_SD
#define SOUND_AK12U_BURST
#define SOUND_AK12U_BURST_SD
#define SOUND_AK12U_FA
#define SOUND_AK12U_FA_SD

// AKM ****************************************
#define SOUND_AKM				begin1[]={"\SOUND_PATH\acex_sound\akm_fire1",1.77828,1,1700};begin2[]={"\SOUND_PATH\acex_sound\akm_fire2",1.77828,1,1700};begin3[]={"\SOUND_PATH\acex_sound\akm_fire2",1.77828,1.027,1700};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKM_SD			SOUND_AK74_SD
#define SOUND_AKM_FA			SOUND_AKM
#define SOUND_AKM_FA_SD			SOUND_AK74_SD

// RPK 762 ************************************
#define SOUND_RPK				SOUND_AKM
#define SOUND_RPK_SD			SOUND_AK74_SD
#define SOUND_RPK_FA			SOUND_AKM
#define SOUND_RPK_FA_SD			SOUND_AK74_SD

// RPK74 **************************************
#define SOUND_RPK12
#define SOUND_RPK12_SD
#define SOUND_RPK12_BURST
#define SOUND_RPK12_BURST_SD
#define SOUND_RPK12_FA
#define SOUND_RPK12_FA_SD


// PKM/PKP ************************************
#define SOUND_PKP
#define SOUND_PKP_SD
#define SOUND_PKP_FA
#define SOUND_PKP_FA_SD

#define SOUND_PKM
#define SOUND_PKM_SD


// GP-25/30 ***********************************
#define	SOUND_GP				sound[]={"\SOUND_PATH\acex_sound\gp30_fire",1,1,100};
#define	SOUND_GP_RELOAD			reloadMagazineSound[]={"\SOUND_PATH\acex_sound\gp30_reload",1.0,1,10};



// M4 *****************************************
#define SOUND_M4
#define SOUND_M4_SD
#define SOUND_M4_BURST
#define SOUND_M4_BURST_SD
#define SOUND_M4_FA
#define SOUND_M4_FA_SD

// M16 ****************************************
#define SOUND_M16
#define SOUND_M16_SD
#define SOUND_M16_BURST
#define SOUND_M16_BURST_SD
#define SOUND_M16_FA
#define SOUND_M16_FA_SD


// Mk12 and other AR-15 based rifles **********
#define SOUND_MK12
#define SOUND_MK12_SD

#define SOUND_M110
#define SOUND_M110_SD

#define SOUND_HB
#define SOUND_HB_SD
#define SOUND_HB_FA
#define SOUND_HB_FA_SD

#define SOUND_SBR9
#define SOUND_SBR9_SD
#define SOUND_SBR9_FA
#define SOUND_SBR9_FA_SD

// HK416 **************************************
#define SOUND_416
#define SOUND_416_SD
#define SOUND_416_FA
#define SOUND_416_FA_SD


// M249 ***************************************
#define	SOUND_M249
#define	SOUND_M249_SD

// M240 ***************************************
#define	SOUND_M240
#define	SOUND_M240_SD


// M203/AG36 **********************************
#define	SOUND_GL
#define	SOUND_GL_RELOAD
