#define SOUND_PATH  x_dzn_acex_hlcak


// AK 74 **************************************
#define SOUND_AK74				begin1[]={"\SOUND_PATH\acex_sound\ak74_fire1",1.77828,1,1100};begin2[]={"\SOUND_PATH\acex_sound\ak74_fire2",1.77828,1,1100};begin3[]={"\SOUND_PATH\acex_sound\ak74_fire3",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AK74_SD			begin1[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,1,80};begin2[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,0.97,80};begin3[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,1.016,80};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3",0.33};	

#define SOUND_AEK				SOUND_AK74
#define SOUND_AEK_SD			SOUND_AK74_SD

#define SOUND_AK12_BURST		SOUND_AK74
#define SOUND_AK12_BURST_SD		SOUND_AK74_SD

// AKS 74 U / Carbine *************************
#define SOUND_AKSU				begin1[]={"\SOUND_PATH\acex_sound\aks74u_fire1",1.77828,1,1100};begin2[]={"\SOUND_PATH\acex_sound\aks74u_fire2",1.77828,1,1100};begin3[]={"\SOUND_PATH\acex_sound\aks74u_fire3",1.77828,1,1100};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKSU_SD			begin1[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,1,80};begin2[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,0.97,80};begin3[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,1.016,80};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3"


// AKM ****************************************
#define SOUND_AKM				begin1[]={"\SOUND_PATH\acex_sound\akm_fire1",1.77828,1,1700};begin2[]={"\SOUND_PATH\acex_sound\akm_fire2",1.77828,1,1700};begin3[]={"\SOUND_PATH\acex_sound\akm_fire2",1.77828,1.027,1700};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_AKM_SD			SOUND_AK74_SD

// RPK 762 ************************************
#define SOUND_RPK				SOUND_AKM
#define SOUND_RPK_SD			SOUND_AK74_SD

// RPK74 **************************************

// PKM/PKP ************************************

// GP-25/30 ***********************************
#define	SOUND_GP				sound[]={"\SOUND_PATH\acex_sound\gp30_fire",1,1,100};
#define	SOUND_GP_RELOAD			reloadMagazineSound[]={"\SOUND_PATH\acex_sound\gp30_reload",1.0,1,10};

// M4 *****************************************

// M16 ****************************************

// Mk12 and other AR-15 based rifles **********

// M249 ***************************************

// M240 ***************************************

// M203/AG36 **********************************

