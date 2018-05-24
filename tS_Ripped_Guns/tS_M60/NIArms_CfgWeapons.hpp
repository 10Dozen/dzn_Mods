// class CfgWeapons
// {
	// class Rifle;
	// class Rifle_Base_F: Rifle
	// {
		// class WeaponSlotsInfo;
		// class GunParticles;
	// };
	
	class hlc_M60e4_base: Rifle_Base_F
	{
		dlc = "Niarms_M60";
		ACE_Overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		ACE_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		ACE_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		scope = 1;
		cursor = "mg";
		cursoraim = "EmptyCursor";
		magazineReloadSwitchPhase = 0.5;
		magazines[] = {"hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_Mdim_M60E4","150Rnd_762x51_Box","150Rnd_762x51_Box_Tracer"};
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		aidispersioncoefx = 10;
		aidispersioncoefy = 12;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
			class AmmoBeltEject
			{
				directionName = "linkeject_end";
				effectName = "MachineGunEject2";
				positionName = "linkeject_start";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot
			{
				iconPosition[] = {0.5,0.3};
				iconScale = 0.2;
			};
			class PointerSlot{};
		};
		descriptionShort = "Light Machine Gun<br/>Caliber: 7.62mm";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
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
		modes[] = {"FullAuto","close","short","medium","medium_burst","far","veryfar","far_optic1","toofar_optic1","far_optic2","toofar_optic2"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_M60E4\snd\m60_first",1,1,10};
				closure2[] = {"\hlc_wp_M60E4\snd\m60_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"M60E4_Shot_SoundSet","M60E4_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"M60e4_silencerShot_SoundSet","M60e4_silencerTail_SoundSet"};
			};
			reloadTime = 0.105;
			dispersion = 0.000261799;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
		};
		class close: FullAuto
		{
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
			showToPlayer = 0;
		};
		class short: close
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
		class medium: close
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
		class medium_burst: close
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
		class far: close
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
		class veryfar: close
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
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
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
		class toofar_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
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
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		class toofar_optic2: far_optic2
		{
			requiredOpticType = 2;
			showToPlayer = 0;
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
		drysound[] = {"\hlc_core\sound\empty_machineguns",1,1,10};
		reloadmagazinesound[] = {"\hlc_wp_M60E4\snd\m60_reload",1,1,10};
	};
	
	class hlc_m60: hlc_M60e4_base
	{
		magazines[] = {
			"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51_m61_ap","rhsusf_50Rnd_762x51_m62_tracer","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m82_blank","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51_m993","rhsusf_100Rnd_762x51_m993"
			
			, "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
			
			,"150Rnd_762x54_Box","150Rnd_762x54_Box_Tracer"
		};
		maxZeroing = 1100;
		AGM_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		agm_bipod = 1;
		AGM_Overheating_allowSwapBarrel = 1;
		tmr_autorest_deployable = 1;
		hasBipod = 1;
		deployedpivot = "deploypivot";
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db-3",1,20};
		bg_bipod = 1;
		cse_bipod = 1;
		author = "Twinke Masta, Millenia, Toadie";
		AB_barrelTwist = 12;
		AB_barrelLength = 22;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 558.8;
		scope = 2;
		inertia = 1.05;
		dexterity = 0.85710883;
		aimTransitionSpeed = 0.5999762;
		displayName = "M60";
		picture = "\hlc_wp_M60E4\tex\ui\gear_m60_x_ca";
		model = "\hlc_wp_M60E4\mesh\m60classic\M60.p3d";
		hiddenSelections[] = {"Box","Reciever","Stock","Fore_opaq","Bipod_transp"};
		hiddenSelectionsTextures[] = {"hlc_wp_m60e4\tex\mil m60\ammobox_co.paa","hlc_wp_m60e4\tex\mil m60\body_co.paa","hlc_wp_m60e4\tex\mil m60\body2_co.paa","hlc_wp_m60e4\tex\mil m60\fore_co.paa","hlc_wp_m60e4\tex\mil m60\fore_ca.paa"};
		reloadaction = "HLC_GestureReloadM60";
		discretedistance[] = {300,400,500,600,700,800,900,1000,1100};
		cameradir = "aim_point";
		discreteDistanceCameraPoint[] = {"eye3","eye4","eye5","eye6","eye7","eye8","eye9","eye10","eye11"};
		distanceZoomMin = 100;
		distanceZoomMax = 1100;
		discretedistanceinitindex = 0;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_m60e4\gesture\m60e4.rtm"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class Library
		{
			libTextDesc = "US Ordnance M60";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 231;
		};
	};
	
	
// };