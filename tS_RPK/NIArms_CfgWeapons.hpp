class CfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class ItemCore;
	class optic_ACO_grn: ItemCore
	{
		class ItemInfo;
	};
	class optic_dms;
	class HLC_Optic_PSO1: optic_dms
	{
		dlc = "Niarms_AK";
		author = "Bohemia Interactive, Toadie";
		descriptionshort = "PSO1 Optical Sniper Sight<br />Magnification: 4x";
		displayname = "PSO-1M";
		model = "\hlc_wp_ak\mesh\pso1\pso1.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_pso1_x_ca";
		ACE_ScopeAdjust_Vertical[] = {0,0};
		ACE_ScopeAdjust_Horizontal[] = {-10,10};
		ACE_ScopeAdjust_Increment = 0.5;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 12;
			modelOptics = "\hlc_wp_ak\mesh\pso1\pso_optics";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					discreteDistance[] = {100,200,300,400,450,500,550,600,650,700,750,800,850,900,950,1000};
					discreteDistanceInitIndex = 3;
					distanceZoomMin = 400;
					distanceZoomMax = 400;
					discretefov[] = {0.0623};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\hlc_wp_ak\mesh\pso1\pso_optics"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Snip_ILLUM
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					discreteDistance[] = {400};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 400;
					distanceZoomMax = 400;
					discretefov[] = {0.0623};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\hlc_wp_ak\mesh\pso1\pso_optics_illum"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
		inertia = 0.06;
	};
	class HLC_Optic_1p29: HLC_Optic_PSO1
	{
		dlc = "Niarms_AK";
		author = "Bionic, Toadie";
		descriptionshort = "1P29 Combat Optic<br />Magnification: 4x";
		displayname = "1P29";
		model = "\hlc_wp_ak\mesh\1p29\1p29.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_1p29_ca";
		ACE_ScopeAdjust_Vertical[] = {};
		ACE_ScopeAdjust_Horizontal[] = {};
		ACE_ScopeAdjust_Increment = 0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 16;
			modelOptics = "\hlc_wp_ak\mesh\1p29\1p29_optics";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.06225;
					opticsZoomMax = 0.06225;
					opticsZoomInit = 0.06225;
					discreteDistance[] = {300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 400;
					distanceZoomMax = 400;
					discretefov[] = {0.0623};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\hlc_wp_ak\mesh\1p29\1p29_optics"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
		inertia = 0.08;
	};
	class hlc_optic_kobra: optic_ACO_grn
	{
		dlc = "Niarms_AK";
		author = "Tigg, Toadie";
		descriptionshort = "Open Face Collimator Optic";
		displayname = "Kobra EKP-1S-03M";
		model = "\hlc_wp_ak\mesh\Kobra\kobra.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_kobra_ca";
		scope = 2;
		weaponinfotype = "RscWeaponZeroing";
		class ItemInfo: ItemInfo
		{
			mass = 8;
		};
		inertia = 0.04;
	};
	class hlc_optic_goshawk: optic_ACO_grn
	{
		dlc = "Niarms_AK";
		author = "Bohemia Interactive, Toadie";
		scope = 2;
		displayName = "Goshawk TIWS";
		descriptionshort = "Goshawk Thermal Immaging Weapon Sight<br />Magnification: 3.6x";
		picture = "\hlc_wp_ak\tex\ui\gear_goshawk_ca";
		model = "\hlc_wp_ak\mesh\goshawk\goshawk.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 32;
			modelOptics = "\hlc_wp_ak\mesh\goshawk\TI_goshawk_optic.p3d";
			class OpticsModes
			{
				class Goshawk_TI
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsZoomMin = 0.06944444;
					opticsZoomMax = 0.06944444;
					opticsZoomInit = 0.06944444;
					distanceZoomMin = 300;
					distanceZoomMax = 2200;
					opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200};
					discreteDistanceInitIndex = 1;
					modelOptics[] = {"\hlc_wp_ak\mesh\goshawk\TI_goshawk_optic.p3d"};
					memoryPointCamera = "eye2";
					visionmode[] = {"Ti","Normal"};
					thermalMode[] = {0,1};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "eye";
				};
			};
		};
		inertia = 0.16;
	};
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo;
	};
	class hlc_muzzle_545SUP_AK: muzzle_snds_H
	{
		dlc = "Niarms_AK";
		author = "Bohemia Interactive, Toadie";
		displayName = "PBS4 Suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\hlc_wp_ak\mesh\PBS4\pbs4";
		class ItemInfo: ItemInfo
		{
			mass = 12;
		};
		inertia = 0.08;
	};
	class hlc_muzzle_762SUP_AK: hlc_muzzle_545SUP_AK
	{
		dlc = "Niarms_AK";
		author = "Jason9Jason, Toadie";
		displayName = "PBS1 Suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\hlc_wp_ak\mesh\PBS1\pbs1";
	};
	class UGL_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hlc_ak_base: Rifle_Base_F
	{
		magazineReloadSwitchPhase = 0.5;
		author = "Toadie";
		recoil = "recoil_mk20";
		deployedPivot = "deploypivot";
		hasBipod = 0;
		scope = 0;
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_EP_AK","hlc_45Rnd_545x39_t_rpk","hlc_30Rnd_545x39_S_AK","hlc_60Rnd_545x39_t_rpk","hlc_45Rnd_545x39_m_rpk","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_Green_F"};
		class Library
		{
			libTextDesc = "Izhmash AK74";
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
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.2;
			};
			class CowsSlot
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
		descriptionShort = "Assault rifle<br/>Caliber: 5.45mm";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","hlc_wp_ak\anim\new_akhandgesture.rtm"};
		changeFiremodeSound[] = {"hlc_wp_ak\snd\ak_selector",1,1,8};
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
		modes[] = {"FullAuto","Single","AI_Burst_close","AI_Burst_far","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			reloadtime = "(60/650)";
			dispersion = 0.000654498;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak74_Shot_SoundSet","Nia_ak74_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak74_silencerShot_SoundSet","Nia_ak74_silencerTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadtime = "(60/650)";
			dispersion = 0.000654498;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.8;
			maxRange = 30;
			maxRangeProbab = 0.3;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak74_Shot_SoundSet","Nia_ak74_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak74_silencerShot_SoundSet","Nia_ak74_silencerTail_SoundSet"};
			};
		};
		class AI_Burst_close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.2;
		};
		class AI_Burst_far: AI_Burst_close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 5;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
			showToPlayer = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
		drysound[] = {"\hlc_wp_ak\snd\empty_assaultrifles",1,1,10};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\ak74\ak74m_reload",0.8,1,20};
		aidispersioncoefx = 4;
		aidispersioncoefy = 6;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class hlc_GP30: UGL_F
		{
			cameradir = "GL_Look";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"GL_eye_50m","GL_eye_100m","GL_eye_150m","GL_eye_200m","GL_eye_250m","GL_eye_300m","GL_eye_350m","GL_eye_400m"};
			discreteDistanceInitIndex = 1;
			displayname = "GP30";
			useModelOptics = 0;
			useExternalOptic = 0;
			optics = 1;
			drysound[] = {"A3\sounds_f\Weapons\other\sfx5",1,1,400};
			cursoraim = "gl";
			magazinereloadtime = 0;
			magazines[] = {"hlc_VOG25_AK","hlc_GRD_White","hlc_GRD_Red","hlc_GRD_Green","hlc_GRD_Yellow","hlc_GRD_Purple","hlc_GRD_Blue","hlc_GRD_Orange"};
			reloadmagazinesound[] = {"\hlc_wp_ak\snd\gp30_reload",1,1,20};
			reloadtime = 0.1;
			sound[] = {"\hlc_wp_ak\snd\gp30_fire",1.0,1,400};
			weaponinfotype = "RscWeaponZeroing";
			reloadAction = "HLC_GestureReloadGP30";
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
		class hlc_GP25: hlc_GP30
		{
			cameraDir = "OP_look";
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye1","OP_eye2","OP_eye3","OP_eye4","OP_eye5","OP_eye6","OP_eye7"};
			discreteDistanceInitIndex = 2;
			displayname = "GP25";
		};
	};
	class hlc_rifle_rpk: hlc_ak_base
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		hasBipod = 1;
		soundBipodDown[] = {"\hlc_wp_ak\snd\rpk_bipodin","db-3",1,20};
		soundBipodUp[] = {"\hlc_wp_ak\snd\rpk_bipodout","db-3",1,20};
		author = "Booly, Toadie";
		reloadAction = "HLC_GestureReloadRPK";
		cursor = "mg";
		scope = 2;
		aidispersioncoefx = 10;
		aidispersioncoefy = 12;
		AB_barrelTwist = 9.45;
		AB_barrelLength = 23.2;
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 589.28;
		agm_bipod = 1;
		cse_bipod = 1;
		bg_bipod = 1;
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak","hlc_45Rnd_762x39_m_rpk","HLC_45rnd_762x39_T_RPK","hlc_30rnd_762x39_s_ak","hlc_75Rnd_762x39_m_rpk","hlc_30Rnd_762x39_AP_ak","hlc_45Rnd_762x39_AP_rpk","hlc_75Rnd_762x39_AP_rpk","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_Green_F"};
		model = "\hlc_wp_ak\mesh\rpk\rpk_30rnd.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_rpk_x_ca";
		hiddenSelections[] = {"Main","Dovetail","Mount","magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\rifleman_akm\akm_co.paa"};
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		displayName = "Izhmash RPK";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		cameraDir = "eye_look";
		descriptionShort = "Light Support Weapon<br/>Caliber: 7.62mm";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\rpk_reload",0.9,1,30};
		modes[] = {"FullAuto","Single","50m","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar","AI_far_optic1","AI_toofar_optic1","AI_far_optic2","AI_toofar_optic2"};
		class FullAuto: FullAuto
		{
			reloadtime = "(60/600)";
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_rpk_Shot_SoundSet","Nia_rpk_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_rpk_Shot_Silenced_SoundSet","Nia_rpk_ShotTail_Silenced_SoundSet"};
			};
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
		};
		class Single: Single
		{
			reloadtime = "(60/600)";
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_rpk_Shot_SoundSet","Nia_rpk_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_rpk_Shot_Silenced_SoundSet","Nia_rpk_ShotTail_Silenced_SoundSet"};
			};
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class 50m: FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
		};
		class AI_long: 50m
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
		};
		class AI_close: AI_long
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
		};
		class AI_short: AI_close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
		};
		class AI_medium: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class AI_far: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class AI_toofar: AI_far
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
		};
		class AI_toofar_optic1: AI_far_optic1
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
		};
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 96;
			class CowsSlot: asdg_OpticSideMount
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.2;
			};
		};
		inertia = 0.48;
		dexterity = 1.1810873;
		aimTransitionSpeed = 0.82676107;
		class nia_magSwitch
		{
			HLC_45rnd_762x39_T_RPK = "hlc_rifle_rpk_45rnd";
			hlc_45Rnd_762x39_m_rpk = "hlc_rifle_rpk_45rnd";
			hlc_75Rnd_762x39_m_rpk = "hlc_rifle_rpk_75rnd";
			hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_rpk_45rnd";
			hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_rpk_75rnd";
			default = "hlc_rifle_rpk";
		};
	};
	class hlc_rifle_rpk_45rnd: hlc_rifle_rpk
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash RPK";
		model = "\hlc_wp_ak\mesh\rpk\rpk.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\bl_rpk\mag_co.paa"};
		inertia = "0.48+0.07";
		dexterity = 1.0816942;
		aimTransitionSpeed = 0.75718594;
	};
	class hlc_rifle_rpk_75rnd: hlc_rifle_rpk
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		model = "\hlc_wp_ak\mesh\rpk\rpk_75rnd.p3d";
		displayName = "Izhmash RPK";
		reloadAction = "HLC_GestureReloadAK762Drum";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload",0.9,1,30};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.paa"};
		inertia = "0.48+0.145";
		dexterity = 0.99990404;
		aimTransitionSpeed = 0.6999328;
	};
	class hlc_rifle_rpk74n: hlc_ak_base
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		hasBipod = 1;
		soundBipodDown[] = {"\hlc_wp_ak\snd\rpk_bipodin","db-3",1,20};
		soundBipodUp[] = {"\hlc_wp_ak\snd\rpk_bipodout","db-3",1,20};
		author = "Booly, Toadie";
		reloadAction = "HLC_GestureReloadRPK";
		scope = 2;
		aidispersioncoefx = 10;
		aidispersioncoefy = 12;
		AB_barrelTwist = 9.45;
		AB_barrelLength = 23.2;
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 589.28;
		agm_bipod = 1;
		cse_bipod = 1;
		bg_bipod = 1;
		displayName = "Izhmash RPK74";
		descriptionShort = "Light Support Weapon<br/>Caliber: 5.45mm";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		cameraDir = "eye_look";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk74\rpk74_reload",0.9,1,30};
		model = "\hlc_wp_ak\mesh\rpk\rpk74_30rnd.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_rpk74_ca";
		hiddenSelections[] = {"Main","Dovetail","Mount","magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\rifleman_aks\aks_co.paa"};
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		modes[] = {"FullAuto","Single","50m","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar","AI_far_optic1","AI_toofar_optic1","AI_far_optic2","AI_toofar_optic2"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 94;
			class CowsSlot: asdg_OpticSideMount
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.47;
		dexterity = 1.1977026;
		aimTransitionSpeed = 0.83839184;
		class FullAuto: FullAuto
		{
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_rpk74_Shot_SoundSet","Nia_rpk74_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_rpk74_silencerShot_SoundSet","Nia_rpk74_silencerTail_SoundSet"};
			};
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
		};
		class Single: Single
		{
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_rpk74_Shot_SoundSet","Nia_rpk74_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_rpk74_silencerShot_SoundSet","Nia_rpk74_silencerTail_SoundSet"};
			};
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class 50m: FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
		};
		class AI_long: 50m
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
		};
		class AI_close: AI_long
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
		};
		class AI_short: AI_close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
		};
		class AI_medium: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class AI_far: AI_close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class AI_toofar: AI_far
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
		};
		class AI_toofar_optic1: AI_far_optic1
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
		};
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_rpk74n_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_rpk74n_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_rpk74n_60rnd";
			default = "hlc_rifle_rpk74n";
		};
	};
	class hlc_rifle_rpk74n_45rnd: hlc_rifle_rpk74n
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash RPK74";
		model = "\hlc_wp_ak\mesh\rpk\rpk74.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\adept\wpn_ak_10_co.paa"};
		inertia = "0.47+0.081";
		dexterity = 1.0816942;
		aimTransitionSpeed = 0.75718594;
	};
	class hlc_rifle_rpk74n_60rnd: hlc_rifle_rpk74n
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash RPK74";
		model = "\hlc_wp_ak\mesh\rpk\rpk74_60rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\rifleman_akmags\texture_co.paa"};
		inertia = "0.47+0.1";
		dexterity = 1.0816942;
		aimTransitionSpeed = 0.75718594;
	};
	
};