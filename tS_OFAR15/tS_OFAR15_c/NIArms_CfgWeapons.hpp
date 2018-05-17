#include "macro.hpp"

// class CfgWeapons
// {
	// class Rifle;
	// class UGL_F;
	// class WeaponSlotsInfo;
	// class Rifle_Base_F: Rifle
	// {
		// class WeaponSlotsInfo;
		// class GunParticles;
	// };
	// class ItemCore;
	// class ItemInfo;
	// class InventoryItem_Base_F;
	// class InventoryMuzzleItem_Base_F;
	// class InventoryOpticsItem_Base_F;
	// class InventoryFlashLightItem_Base_F;
	// class Zasleh2;	
	class hlc_ar15_base: Rifle_Base_F
	{
		magazineReloadSwitchPhase = 0.5;
		scope = 1;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 292.1;
		aidispersioncoefx = 4;
		aidispersioncoefy = 6;
		magazines[] = tS_MAG_556x45mm;
		class Library
		{
			libTextDesc = "AR15";
		};
		reloadAction = "HLC_GestureReloadAK";
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.2;
			};
		};
		descriptionShort = "Assault rifle<br/>Caliber: 5.45mm";
		handAnim[] = {"OFP2_ManSkeleton","hlc_core\animation\oldgesture\ak74_hands.rtm"};
		dexterity = 1.8;
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
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ar15\snd\ar15c_close",1,1,10};
				closure2[] = {"\hlc_wp_ar15\snd\ar15c_close",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"carbine_Shot_SoundSet","carbine_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"carbine_silencerShot_SoundSet","carbine_silencerTail_SoundSet"};
			};
			reloadTime = 0.067;
			dispersion = 0.000347248;
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
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ar15\snd\ar15c_close",1,1,10};
				closure2[] = {"\hlc_wp_ar15\snd\ar15c_close",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"carbine_Shot_SoundSet","carbine_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"carbine_silencerShot_SoundSet","carbine_silencerTail_SoundSet"};
			};
			reloadTime = 0.079;
			dispersion = 0.000347248;
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
			burst = 3;
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
		drysound[] = {"\hlc_wp_ar15\snd\ar15_trigger",1,1,10};
		reloadMagazineSound[] = {"\hlc_wp_ar15\snd\ar15_reload_A3_std",0.74,1,30};
		changeFiremodeSound[] = {"\hlc_wp_ar15\snd\ar15_selector",1,1,8};
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class hlc_M203: UGL_F
		{
			cameraDir = "gl_look";
			discreteDistance[] = {100,150,200,250,300};
			discreteDistanceCameraPoint[] = {"gl_eye_50m","gl_eye_100m","gl_eye_150m","gl_eye_200m","gl_eye_250m"};
			discreteDistanceInitIndex = 1;
			displayname = "M203";
			useModelOptics = 0;
			useExternalOptic = 0;
			reloadAction = "GestureReloadTrgUGL";
			cursoraim = "gl";
			aiRateOfFire = 4;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 4;
			minRange = 60;
			minRangeProbab = 0.45;
			midRange = 200;
			midRangeProbab = 0.65;
			maxRange = 400;
			maxRangeProbab = 0.01;
			magazines[] = tS_MAG_40mmUGL;
		};
	};
	
	class hlc_M4_Carbine: hlc_ar15_base
	{
		dlc = "Niarms_AR15";
		deployedPivot = "deploypivot";
		hasBipod = 0;
		AB_barrelTwist = 7;
		AB_barrelLength = 14.5;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368.3;
		initspeed = -0.93;
		author = "Twinke Masta, Stoke, Tigg, Toadie";
		reloadAction = "HLC_GestureReloadAR15_catch_WS";
		// reloadAction = "GestureReloadSMG_02";
		scope = 2;
		model = "hlc_wp_ar15\mesh\carbine\colt727.p3d";
		picture = "\hlc_wp_ar15\tex\ui\gear_colt727_ca";
		displayName = "M4 Carbine";
		descriptionShort = "Early version of M4 Carbine with unremovable carry handle.<br /> Assault rifle<br/>Caliber: 5.56mm";
		discretedistance[] = {100,200,300,400,500,600};
		discretedistanceinitindex = 2;
		discreteDistanceCameraPoint[] = {"eye","eye2","eye3","eye4","eye5","eye6"};
		hiddenSelections[] = {"upper","lower","Barrel","Stock"};
		hiddenSelectionsTextures[] = {"hlc_wp_ar15\tex\trhm16a2upper_co.paa","hlc_wp_ar15\tex\trhm16a2rec_co.paa","hlc_wp_ar15\tex\m16barrel_co.paa","hlc_wp_ar15\tex\m4furniture_co.paa"};
		cameraDir = "look";
		bg_bipod = 0;
		handAnim[] = {"OFP2_ManSkeleton","hlc_wp_ar15\gesture\newgesture\carbine_hands.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot
			{
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
			};
		};
		inertia = 0.27;
		dexterity = 1.7781698;
		aimTransitionSpeed = 1.2447188;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		modes[] = {"Single","Burst","single_medium_optics1","single_far_optics2"};
		class Single: Single
		{
			reloadTime = 0.079;
			dispersion = 0.000333358;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ar15\snd\ar15c_close",1,1,10};
				closure2[] = {"\hlc_wp_ar15\snd\ar15c_close",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"carbine_Shot_SoundSet","carbine_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"carbine_silencerShot_SoundSet","carbine_silencerTail_SoundSet"};
			};
			reloadtime = 0.0795;
			dispersion = 0.00225;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
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
		class Library
		{
			libTextDesc = "Early version of M4 Carbine with unremovable carry handle.<br /> Assault rifle<br/>Caliber: 5.56mm";
		};
	};
	
	class hlc_M4_Carbine_M203: hlc_M4_Carbine
	{
		dlc = "Niarms_AR15";
		deployedPivot = "deploypivot";
		hasBipod = 0;
		author = "Twinke Masta, Stoke, Tigg, Toadie";
		scope = 2;
		model = "hlc_wp_ar15\mesh\carbinegl\colt727_gl.p3d";
		picture = "\hlc_wp_ar15\tex\ui\gear_colt727gl_ca";
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_ar15\gesture\newgesture\gl_hands.rtm"};
		displayName = "M4 Carbine M203";
		descriptionShort = "Early version of M4 Carbine with M203 grenade launched<br />Assault rifle<br/>Caliber: 5.56mm";
		muzzles[] = {"this","hlc_M203"};
		hiddenSelections[] = {"upper","lower","Barrel","Stock","GL"};
		hiddenSelectionsTextures[] = {"hlc_wp_ar15\tex\trhm16a2upper_co.paa","hlc_wp_ar15\tex\trhm16a2rec_co.paa","hlc_wp_ar15\tex\m16barrel_co.paa","hlc_wp_ar15\tex\m4furniture_co.paa","hlc_wp_ar15\tex\m203_co.paa"};
		bg_bipod = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 91.34;
		};
		inertia = 0.6;
		dexterity = 1.3326038;
		aimTransitionSpeed = 0.93282264;
		class hlc_M203: hlc_M203
		{
			discreteDistance[] = {100,150,200,250,300};
		};
	};
	
// };