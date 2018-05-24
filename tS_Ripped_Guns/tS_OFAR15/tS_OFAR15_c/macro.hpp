#define		tS_MAG_556x45mm		{ \
	"30Rnd_556x45_Stanag" \
	, "30Rnd_556x45_Stanag_Tracer_Red" \
	, "30Rnd_556x45_Stanag_Tracer_Green" \
	, "30Rnd_556x45_Stanag_Tracer_Yellow" \
	, "30Rnd_556x45_Stanag_red" \
	, "30Rnd_556x45_Stanag_green" \
	, "20Rnd_556x45_Stanag" \
	, "20Rnd_556x45_Stanag_Tracer_Red" \
	, "rhs_mag_30Rnd_556x45_Mk318_Stanag" \
	, "rhs_mag_30Rnd_556x45_Mk262_Stanag" \
	, "rhs_mag_30Rnd_556x45_M855A1_Stanag" \
	, "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer" \
	, "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red" \
	, "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green" \
	, "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow" \
	, "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange" \
	, "rhs_mag_30Rnd_556x45_M200_Stanag" \
}


#define		tS_MAG_40mmUGL		{ \
	"1Rnd_HE_Grenade_shell" \
	, "UGL_FlareWhite_F" \
	, "UGL_FlareGreen_F" \
	, "UGL_FlareRed_F" \
	, "UGL_FlareYellow_F" \
	, "UGL_FlareCIR_F" \
	, "1Rnd_Smoke_Grenade_shell" \
	, "1Rnd_SmokeRed_Grenade_shell" \
	, "1Rnd_SmokeGreen_Grenade_shell" \
	, "1Rnd_SmokeYellow_Grenade_shell" \
	, "1Rnd_SmokePurple_Grenade_shell" \
	, "1Rnd_SmokeBlue_Grenade_shell" \
	, "1Rnd_SmokeOrange_Grenade_shell" \
	, "rhs_mag_M441_HE" \
	, "rhs_mag_M433_HEDP" \
	, "rhs_mag_M781_Practice" \
	, "rhs_mag_M4009" \
	, "rhs_mag_m576" \
	, "rhs_mag_M585_white" \
	, "rhs_mag_M661_green" \
	, "rhs_mag_M662_red" \
	, "rhs_mag_M713_red" \
	, "rhs_mag_M714_white" \
	, "rhs_mag_M715_green" \
	, "rhs_mag_M716_yellow" \
}


#define	SOUND_MODES		sounds[] = {"StandardSound","SilencedSound"}; \
			class BaseSoundModeType \
			{ \
				weaponSoundEffect = "DefaultRifle"; \
				closure1[] = {"\hlc_wp_ar15\snd\ar15c_close",1,1,10}; \
				closure2[] = {"\hlc_wp_ar15\snd\ar15c_close",1,1,10}; \
				soundClosure[] = {"closure1",0.5,"closure2",0.5}; \
			}; \
			class StandardSound: BaseSoundModeType \
			{ \
				soundSetShot[] = {"carbine_Shot_SoundSet","carbine_Tail_SoundSet"}; \
			}; \
			class SilencedSound: BaseSoundModeType \
			{ \
				soundSetShot[] = {"carbine_silencerShot_SoundSet","carbine_silencerTail_SoundSet"}; \
			} \
			