#include "macro.hpp"

// class CfgWeapons
// {
	// class UGL_F;
	// class Rifle;
	// class Rifle_Base_F: Rifle
	// {
		// class WeaponSlotsInfo;
		// class GunParticles;
	// };
	// class InventoryOpticsItem_Base_F;
	// class optic_Arco;
	// #include "NIArms_Attachements.hpp"

	class hlc_G36_base: Rifle_Base_F
	{
		scope = 1;
		recoil = "recoil_trg20";
		maxZeroing = 1600;
		deployedpivot = "deploypivot";
		hasBipod = 0;
		magazineReloadSwitchPhase = 0.5;
		magazines[] = tS_MAG_556x45mm;
		class Library
		{
			libTextDesc = "H&K Gewehr36";
		};
		reloadAction = "GestureReloadEBR";
		aiDispersionCoefX = 6;
		aiDispersionCoefY = 8;
		cameraDir = "";
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.398107,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.281838,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.281838,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.281838,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.398107,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.398107,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.398107,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.281838,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.281838,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.281838,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.281838,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.281838,1,15};
		drysound[] = {"hlc_wp_g36\snd\g36_dryfire",1.01,1,10};
		reloadmagazinesound[] = {"hlc_wp_g36\snd\G36_reload",0.9,1,35};
		changeFiremodeSound[] = {"\hlc_wp_g36\snd\g36_switch",1,1,8};
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class hlc_GL_AG36: UGL_F
		{
			cameradir = "gl_look";
			discreteDistance[] = {50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[] = {"gl_eye_50m","gl_eye_100m","gl_eye_150m","gl_eye_200m","gl_eye_250m","gl_eye_300m","gl_eye_350m"};
			discreteDistanceInitIndex = 1;
			displayname = "AG36";
			useModelOptics = 0;
			useExternalOptic = 0;
			optics = 1;
			cursoraim = "gl";
			magazinereloadtime = 0;
			reloadtime = 0.1;
			reloadAction = "HLC_GestureReloadAG36";
			reloadMagazineSound[] = {"hlc_wp_g36\snd\ag36_reload",1.0,1,10};
			drySound[] = {"hlc_wp_g36\snd\ag36_drystrike",0.66,1,10};
			magazines[] = tS_MAG_40mmUGL;
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					closure1[] = {"hlc_wp_g36\snd\ag36_striker",1.0,1,10};
					soundClosure[] = {"closure1",1};
					begin1[] = {"hlc_wp_g36\snd\ag36_launch",0.70794576,1,200};
					begin2[] = {"hlc_wp_g36\snd\ag36_launch",0.70794576,1,200};
					soundBegin[] = {"begin1",0.5,"begin2",0.5};
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"\hlc_wp_g36\snd\AG36_indoor",1,1,200};
						frequency = 1;
						volume = "interior";
					};
				};
				recoil = "M240Recoil";
				recoilProne = "M240Recoil";
				aiRateOfFire = 4;
				aiRateOfFireDistance = 50;
				aiRateOfFireDispersion = 4;
				minRange = 60;
				minRangeProbab = 0.45;
				midRange = 200;
				midRangeProbab = 0.65;
				maxRange = 400;
				maxRangeProbab = 0.01;
			};
		};
		soundbullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot{};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
		};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","AI_Burst_close"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				closure2[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36_Shot_SoundSet","g36_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36_silencerShot_SoundSet","g36_silencerTail_SoundSet"};
			};
			dispersion = 0.000555596;
			reloadtime = "(60/750)";
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				closure2[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36_Shot_SoundSet","g36_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36_silencerShot_SoundSet","g36_silencerTail_SoundSet"};
			};
			dispersion = 0.000555596;
			reloadtime = "(60/750)";
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 40;
			maxRangeProbab = 0.1;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				closure2[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36_Shot_SoundSet","g36_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36_silencerShot_SoundSet","g36_silencerTail_SoundSet"};
			};
			dispersion = 0.000555596;
			reloadtime = "(60/750)";
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
		};
		class Burst2rnd: Burst
		{
			burst = 2;
			textureType = "dual";
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.2;
		};
	};
	
	
	class hlc_rifle_G36A1: hlc_G36_base
	{
		dlc = "Niarms_G36";
		author = "Toadie";
		AB_barrelTwist = 12;
		AB_barrelLength = 18.25;
		ACE_barrelTwist = 178;
		ACE_barrelLength = 480;
		scope = 2;
		deployedpivot = "deploypivot";
		hasBipod = 0;
		displayName = "HK G36A1";
		descriptionShort = "Infantry Rifle<br/>Caliber: 5.56mm NATO";
		reloadAction = "HLC_GestureReloadG36A1";
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_g36\anim\handpose_ar18.rtm"};
		class OpticsModes
		{
			class Kolimator
			{
				cameradir = "";
				distancezoommax = 100;
				distancezoommin = 100;
				memorypointcamera = "RD_eye";
				opticsdisableperipherialvision = 0;
				opticsflare = 0;
				opticsid = 1;
				opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				usemodeloptics = 0;
				visionmode[] = {};
			};
			class ACOG
			{
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				opticsZoomMin = 0.07114;
				opticsZoomMax = 0.07114;
				opticsZoomInit = 0.07114;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				memorypointcamera = "eye";
				opticsid = 2;
				visionmode[] = {"Normal"};
			};
		};
		model = "hlc_wp_g36\mesh\G36A1\G36.p3d";
		picture = "\hlc_wp_g36\tex\ui\Gear_G36A1_ca.paa";
		discretedistance[] = {200};
		discretedistanceinitindex = 0;
		memoryPointCamera = "eye";
		hiddenSelections[] = {"Reciever","Optics","Magwell","Stock"};
		hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_a1_co.paa","hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 81.2;
			class CowsSlot: niarms_G36_OpticSlot{};
			class UnderBarrelSlot
			{
				linkproxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				class compatibleItems
				{
					HLC_Bipod_G36 = 1;
				};
			};
		};
		inertia = 0.36;
		dexterity = 1.4413774;
		aimTransitionSpeed = 1.0089642;
		class nia_magSwitch
		{
			hlc_100rnd_556x45_G36 = "hlc_rifle_G36A1_CMAG";
			default = "hlc_rifle_G36A1";
		};
	};
	class hlc_rifle_G36A1_CMAG: hlc_rifle_G36A1
	{
		scopeArsenal = 0;
		dlc = "Niarms_G36";
		author = "Toadie";
		model = "hlc_wp_g36\mesh\G36A1\G36_CMag.p3d";
		picture = "\hlc_wp_g36\tex\ui\Gear_G36A1-cmag_ca.paa";
		inertia = "0.36+0.21";
		dexterity = 1.0577794;
		aimTransitionSpeed = 0.7404456;
	};
	
	
	class hlc_rifle_G36A1AG36: hlc_rifle_G36A1
	{
		dlc = "Niarms_G36";
		author = "Toadie";
		displayName = "HK G36A1 AG36";
		muzzles[] = {"this","hlc_GL_AG36"};
		model = "hlc_wp_g36\mesh\G36A1\AG36.p3d";
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_g36\anim\handpose_ag36.rtm"};
		picture = "\hlc_wp_g36\tex\ui\gear_AG36A1_ca.paa";
		hiddenSelections[] = {"Reciever","Optics","Magwell","Stock","AG36"};
		hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_a1_co.paa","hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\g36_ag36_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 114.85;
			class CowsSlot: niarms_G36_OpticSlot{};
			class UnderBarrelSlot
			{
				class compatibleItems
				{
					HLC_Bipod_G36 = 0;
				};
			};
		};
		inertia = 0.51;
		dexterity = 1.13515;
		aimTransitionSpeed = 0.79460496;
		class nia_magSwitch
		{
			hlc_100rnd_556x45_G36 = "hlc_rifle_G36A1AG36_CMAG";
			default = "hlc_rifle_G36A1AG36";
		};
	};
	class hlc_rifle_G36A1AG36_CMAG: hlc_rifle_G36A1AG36
	{
		scopeArsenal = 0;
		dlc = "Niarms_G36";
		author = "Toadie";
		model = "hlc_wp_g36\mesh\G36A1\AG36_CMag.p3d";
		picture = "\hlc_wp_g36\tex\ui\Gear_AG36A1-cmag_ca.paa";
		inertia = "0.51+0.21";
		dexterity = 0.920761;
		aimTransitionSpeed = 0.6445327;
	};
	
	
	class hlc_rifle_G36KA1: hlc_rifle_G36A1
	{
		dlc = "Niarms_G36";
		ACE_barrelTwist = 178;
		ACE_barrelLength = 318;
		author = "Toadie";
		displayName = "HK G36KA1";
		descriptionShort = "Infantry Carbine<br/>Caliber: 5.56mm NATO";
		model = "hlc_wp_g36\mesh\G36A1\G36K.p3d";
		picture = "\hlc_wp_g36\tex\ui\gear_G36k_ca.paa";
		hiddenSelections[] = {"Reciever","Optics","Magwell","Stock"};
		hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_k1_co.paa","hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 75.45;
		};
		inertia = 0.34;
		dexterity = 1.5360194;
		aimTransitionSpeed = 1.0752136;
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"g36k_Shot_SoundSet","g36k_Tail_SoundSet"};
			};
			dispersion = 0.0008727;
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"g36k_Shot_SoundSet","g36k_Tail_SoundSet"};
			};
			dispersion = 0.0008727;
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"g36k_Shot_SoundSet","g36k_Tail_SoundSet"};
			};
			dispersion = 0.0008727;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.2;
		};
		class nia_magSwitch
		{
			hlc_100rnd_556x45_G36 = "hlc_rifle_G36KA1_CMAG";
			default = "hlc_rifle_G36KA1";
		};
	};
	class hlc_rifle_G36KA1_CMAG: hlc_rifle_G36KA1
	{
		scopeArsenal = 0;
		dlc = "Niarms_G36";
		author = "Toadie";
		model = "hlc_wp_g36\mesh\G36A1\G36k_CMag.p3d";
		picture = "\hlc_wp_g36\tex\ui\Gear_g36k-cmag_ca.paa";
		inertia = "0.34+0.21";
		dexterity = 1.0816942;
		aimTransitionSpeed = 0.75718594;
	};
	
	
	class hlc_rifle_G36C: hlc_G36_base
	{
		dlc = "Niarms_G36";
		author = "Toadie";
		AB_barrelTwist = 12;
		AB_barrelLength = 18.25;
		ACE_barrelTwist = 178;
		ACE_barrelLength = 318;
		scope = 2;
		deployedpivot = "deploypivot";
		hasBipod = 0;
		displayName = "HK G36C";
		descriptionShort = "Compact Carbine<br/>Caliber: 5.56mm NATO";
		reloadAction = "HLC_GestureReloadG36A1";
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_g36\anim\handpose_ar18.rtm"};
		discretedistance[] = {100,200,300,400,500};
		discretedistanceinitindex = 1;
		model = "hlc_wp_g36\mesh\G36E1\G36C.p3d";
		picture = "\hlc_wp_g36\tex\ui\gear_G36C_ca.paa";
		hiddenSelections[] = {"Reciever","Optics","Magwell","Stock"};
		hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_c_co.paa","hlc_wp_g36\tex\placeholder\g36_opticrails_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa"};
		memoryPointCamera = "eye";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66.72;
			class CowsSlot: asdg_OpticRail1913{};
			class PointerSlot: asdg_FrontSideRail{};
		};
		inertia = 0.28;
		dexterity = 1.7388076;
		aimTransitionSpeed = 1.2171652;
		modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				closure2[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36c_Shot_SoundSet","g36c_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36_silencerShot_SoundSet","g36_silencerTail_SoundSet"};
			};
			dispersion = 0.0008727;
			reloadtime = "(60/750)";
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class Burst: Mode_Burst
		{
			burst = 2;
			textureType = "dual";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				closure2[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36c_Shot_SoundSet","g36c_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36_silencerShot_SoundSet","g36_silencerTail_SoundSet"};
			};
			dispersion = 0.0008727;
			reloadtime = "(60/750)";
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				closure2[] = {"\hlc_wp_g36\snd\g36_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36c_Shot_SoundSet","g36c_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"g36_silencerShot_SoundSet","g36_silencerTail_SoundSet"};
			};
			dispersion = 0.0008727;
			reloadtime = "(60/750)";
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.2;
		};
		class nia_magSwitch
		{
			hlc_100rnd_556x45_G36 = "hlc_rifle_G36c_CMAG";
			default = "hlc_rifle_G36C";
		};
	};
	class hlc_rifle_G36c_CMAG: hlc_rifle_G36C
	{
		scopeArsenal = 0;
		dlc = "Niarms_G36";
		author = "Toadie";
		model = "hlc_wp_g36\mesh\G36E1\G36c_CMag.p3d";
		picture = "\hlc_wp_g36\tex\ui\Gear_g36c-cmag_ca.paa";
		inertia = "0.28+0.21";
		dexterity = 1.16515;
		aimTransitionSpeed = 0.81560504;
	};
// };