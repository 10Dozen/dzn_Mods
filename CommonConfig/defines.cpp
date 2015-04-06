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
#define SOUND_AKSU_SD			begin1[] = {"\SOUND_PATH\acex_sound\aks74un_fire",1,1,80};begin2[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,0.97,80};begin3[]={"\SOUND_PATH\acex_sound\aks74un_fire",1,1.016,80};soundBegin[]={"begin1",0.33,"begin2",0.33,"begin3"};
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






// M4 *****************************************
#define SOUND_M4				begin1[] = {"\SOUND_PATH\acex_sound\m4_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\m4_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\m4_fire2.wss",1.77828,0.97,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_M4_SD				begin1[] = {"\SOUND_PATH\acex_sound\m4sd_fire.wss",1,1,80};begin2[] = {"\SOUND_PATH\acex_sound\m4sd_fire.wss",1,0.96,80};begin3[] = {"\SOUND_PATH\acex_sound\m4sd_fire.wss",1,1.02,80};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define SOUND_M4_BURST			SOUND_M4
#define SOUND_M4_BURST_SD		SOUND_M4_SD
#define SOUND_M4_FA				begin1[] = {"\SOUND_PATH\acex_sound\m4_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\m4_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\m4_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.6};
#define SOUND_M4_FA_SD			begin1[] = {"\SOUND_PATH\acex_sound\m4sd_fire.wss",1,1,80};begin2[] = {"\SOUND_PATH\acex_sound\m4sd_fire.wss",1,0.96,80};begin3[] = {"\SOUND_PATH\acex_sound\m4sd_fire.wss",1,1.03,80};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};


// M16 ****************************************
#define SOUND_M16				begin1[] = {"\SOUND_PATH\acex_sound\m16_fire1.wss",1.77828,1,1100};soundBegin[] = {"begin1",1};
#define SOUND_M16_SD			SOUND_M4_SD
#define SOUND_M16_BURST			begin1[] = {"\SOUND_PATH\acex_sound\m16_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",1};
#define SOUND_M16_BURST_SD		SOUND_M4_BURST_SD
#define SOUND_M16_FA			begin1[] = {"\SOUND_PATH\acex_sound\m16_fire3.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\m16_fire3.wss",1.77828,0.97,1100};begin3[] = {"\SOUND_PATH\acex_sound\m16_fire3.wss",1.77828,1.03,1100};soundBegin[] = {"begin1",0.32,"begin2",0.35,"begin3",0.32};
#define SOUND_M16_FA_SD			SOUND_M4_FA_SD


// Mk12 and other AR-15 based rifles **********
#define SOUND_MK12				begin1[] = {"\SOUND_PATH\acex_sound\mk12_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\mk12_fire2.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.5,"begin2",0.5};
#define SOUND_MK12_SD			SOUND_M4_SD

#define SOUND_M110				begin1[] = {"\SOUND_PATH\acex_sound\mk17_fire1.wss",1.77828,1,1700};begin2[] = {"\SOUND_PATH\acex_sound\mk17_fire2.wss",1.77828,1,1700};begin3[] = {"\SOUND_PATH\acex_sound\mk17_fire2.wss",1.77828,0.98,1700};soundBegin[] = {"begin1",0.33,"begin2",0.34,"begin3",0.33};
#define SOUND_M110_SD			begin1[] = {"\SOUND_PATH\acex_sound\mk17sd_fire.wss",1,1,110};soundbegin[] = {"begin1",1};

#define SOUND_HB				SOUND_M4
#define SOUND_HB_SD				SOUND_M4_SD
#define SOUND_HB_FA				SOUND_M4_FA
#define SOUND_HB_FA_SD			SOUND_M4_FA_SD

#define SOUND_SBR9				SOUND_M4
#define SOUND_SBR9_SD			SOUND_M4_SD
#define SOUND_SBR9_FA			SOUND_M4_FA
#define SOUND_SBR9_FA_SD		SOUND_M4_FA_SD

// HK416 **************************************
#define SOUND_416				SOUND_M4
#define SOUND_416_SD			SOUND_M4_SD
#define SOUND_416_FA			SOUND_M4_FA
#define SOUND_416_FA_SD			SOUND_M4_FA_SD


// M249 ***************************************
#define	SOUND_M249				begin1[] = {"\SOUND_PATH\acex_sound\m249p_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\m249p_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\m249p_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define	SOUND_M249_SD			SOUND_M249

#define	SOUND_M249SAW			begin1[] = {"\SOUND_PATH\acex_sound\m249_fire1.wss",1.77828,1,1100};begin2[] = {"\SOUND_PATH\acex_sound\m249_fire2.wss",1.77828,1,1100};begin3[] = {"\SOUND_PATH\acex_sound\m249_fire3.wss",1.77828,1,1100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
#define	SOUND_M249SAW_SD		SOUND_M249SAW

// M240 ***************************************
#define	SOUND_M240				begin1[] = {"\SOUND_PATH\acex_sound\m240_fire1.wss",1.77828,1,1700};begin2[] = {"\SOUND_PATH\acex_sound\m240_fire2.wss",1.77828,1,1700};begin3[] = {"\SOUND_PATH\acex_sound\m240_fire3.wss",1.77828,1,1700};soundBegin[] = {"begin1",0.33,"begin2",0.34,"begin3",0.33};
#define	SOUND_M240_SD			SOUND_M240


// M203/AG36 **********************************
#define	SOUND_GL				sound[]={"\SOUND_PATH\acex_sound\m203_fire.wss",1,1,100};
#define	SOUND_GL_RELOAD			reloadMagazineSound[] = {"\SOUND_PATH\acex_sound\m203_reload.wss",0.0316228,1,20};

// Mk48
// begin1[] = {"\SOUND_PATH\acex_sound\mk48_fire1.wss",1.62341,1,1700};begin2[] = {"\SOUND_PATH\acex_sound\mk48_fire2.wss",1.62341,1,1700};begin3[] = {"\SOUND_PATH\acex_sound\mk48_fire3.wss",1.62341,1,1700};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};


// GP30
//begin1[] = {"\SOUND_PATH\acex_sound\gp30_fire.wss",1,1,100};begin2[] = {"\SOUND_PATH\acex_sound\gp30_fire.wss",1,0.96,100};begin3[] = {"\SOUND_PATH\acex_sound\gp30_fire.wss",1,0.94,100};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};

//M203
//begin1[] = {"\SOUND_PATH\acex_sound\m203_fire.wss",1,1,200};begin2[] = {"\SOUND_PATH\acex_sound\m203_fire.wss",1,0.96,200};begin3[] = {"\SOUND_PATH\acex_sound\m203_fire.wss",1,0.94,200};soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
