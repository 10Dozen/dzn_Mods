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
	
	class RH_m4: Rifle_Base_F
	{
		scope = 2;
		author = "RobertHammer";
		magazines[] = tS_MAG_556x45mm;
		class Library
		{
			libTextDesc = "Colt M4";
		};
		reloadAction = "GestureReloadSMG_02";
		maxrecoilsway = 0.003;
		swaydecayspeed = 0;
		recoil = "RH_recoil_M4";
		initSpeed = -0.93;
		class GunParticles: GunParticles
		{
			/*
			class EjectEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_Rifle556Cartridge";
			};
			*/
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RH_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "RH_RifleSmokeTrail";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
			class PointerSlot{};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0,0.37};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.2};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "center";
			};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "Assault rifle<br/>Caliber: 5.56 mm";
		displayName = "M4";
		model = "\RH_m4\RH_m4.p3d";
		picture = "\RH_m4\inv\m4_x_ca.paa";
		discreteDistance[] = {100,200,300,400,500,600,800};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
		inertia = 0.4;
		maxZeroing = 1000;
		handAnim[] = {"OFP2_ManSkeleton","hlc_wp_ar15\gesture\newgesture\carbine_hands.rtm"};
		// handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_m16.rtm"};
		modes[] = {"Single","Burst","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			SOUND_MODES;
			
			/*
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m4_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m4_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m4_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4sd_s1",1,1,240};
				begin2[] = {"RH_m4\sound\m4sd_s2",1,1,240};
				begin3[] = {"RH_m4\sound\m4sd_s3",1,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			*/
			reloadTime = 0.075;
			recoil = "RH_M4_Recoil";
			recoilProne = "RH_M4_RecoilProne";
			dispersion = 0.00225;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst
		{
			SOUND_MODES;
			/*
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m4_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m4_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m4_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4sd_s1",1,1,240};
				begin2[] = {"RH_m4\sound\m4sd_s2",1,1,240};
				begin3[] = {"RH_m4\sound\m4sd_s3",1,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			*/
			reloadtime = 0.075;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
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
		class FullAuto: Mode_FullAuto
		{
			SOUND_MODES;
			
			/*
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2",0.56,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3",0.56,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4_s1.wss",1,1,1200};
				begin2[] = {"RH_m4\sound\m4_s2.wss",1,1,1200};
				begin3[] = {"RH_m4\sound\m4_s3.wss",1,1,1200};
				begin4[] = {"RH_m4\sound\m4_s4.wss",1,1,1200};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"RH_m4\sound\m4sd_s1",1,1,240};
				begin2[] = {"RH_m4\sound\m4sd_s2",1,1,240};
				begin3[] = {"RH_m4\sound\m4sd_s3",1,1,240};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
			*/
			reloadTime = 0.075;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.00225;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		class M203: UGL_F
		{
			displayName = "M203";
			descriptionShort = "$STR_A3_cfgweapons_3gl1";
			useModelOptics = 0;
			useExternalOptic = 0;
			recoil = "RH_M203GLBase";
			magazines[] = tS_MAG_40mmUGL;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
				soundClosure[] = {"closure1",1};
			};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"RH_m4\sound\m203",1,1,200};
				soundBegin[] = {"begin1",1};
			};
			reloadMagazineSound[] = {"RH_m4\sound\m203_reload",1,1,10};
			cameraDir = "OP_look";
			discreteDistance[] = {50,100,150,200,250};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4","OP_eye5"};
			discreteDistanceInitIndex = 1;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		changeFiremodeSound[] = {"\RH_m4\sound\m4_selector",0.5,1,10};
		drySound[] = {"\RH_m4\sound\dry",0.8,1,15};
		reloadMagazineSound[] = {"RH_m4\sound\m4_reload",1,1,15};
	};
	class RH_M4_M203: RH_m4
	{
		author = "RobertHammer";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_M4gl.rtm"};
		model = "\RH_M4\RH_m4_m203.p3d";
		displayName = "M4 M203";
		picture = "\RH_m4\inv\m4_m203_x_ca.paa";
		inertia = 0.5;
		muzzles[] = {"this","M203"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 91.34;
		};
	};
	
	class RH_M16a1: RH_m4
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a1.p3d";
		displayName = "M16A1";
		picture = "\RH_m4\inv\m16a1_x_ca.paa";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
		handAnim[] = {"OFP2_ManSkeleton","hlc_wp_ar15\gesture\newgesture\carbine_hands.rtm"};
		// handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_m16a1.rtm"};
		inertia = 0.5;
		recoil = "RH_recoil_M16";
		initSpeed = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 62.65;
			class CowsSlot{};
			class MuzzleSlot{};
			class PointerSlot{};
		};
		class Single: Mode_SemiAuto
		{
			SOUND_MODES;
			reloadTime = 0.08;
			recoil = "RH_M4_Recoil";
			recoilProne = "RH_M4_RecoilProne";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			SOUND_MODES;
			reloadTime = 0.08;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.002;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 80;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
		};
	};
	class RH_M16A1gl: RH_M16a1
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a1gl.p3d";
		picture = "\RH_m4\inv\m16a1gl_x_ca.paa";
		displayName = "M16A1 M203";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_M4gl.rtm"};
		inertia = 0.6;
		muzzles[] = {"this","M203"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 91.34;
		};
	};
	
	class RH_M16A2: RH_m4
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a2.p3d";
		displayName = "M16A2";
		picture = "\RH_m4\inv\m16a2_x_ca.paa";
		inertia = 0.5;
		recoil = "RH_recoil_M16";
		initSpeed = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 71.72;
			class CowsSlot{};
			class MuzzleSlot{};
			class PointerSlot{};
		};
		class Single: Mode_SemiAuto
		{
			SOUND_MODES;
			reloadtime = 0.071;
			recoil = "RH_M4_Recoil";
			recoilProne = "RH_M4_RecoilProne";
			dispersion = 0.00175;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst
		{
			SOUND_MODES;
			reloadtime = 0.071;
			recoil = "RH_M4_Recoil_Auto";
			recoilProne = "RH_M4_RecoilProneAuto";
			dispersion = 0.00175;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
		};
	};
	class RH_M16A2gl: RH_M16A2
	{
		author = "RobertHammer";
		model = "\RH_M4\RH_m16a2gl.p3d";
		displayName = "M16A2 M203";
		picture = "\RH_m4\inv\m16a2gl_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\RH_m4\anim\RH_M4gl.rtm"};
		inertia = 0.6;
		muzzles[] = {"this","M203"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 103.72;
		};
	};
	class RH_m4_tg: RH_m4
	{
		author = "RobertHammer";
		displayName = "M4 (TG camo)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\RH_m4\data\ar15_camo_co.paa"};
	};
	class RH_m4_des: RH_m4
	{
		author = "RobertHammer";
		displayName = "M4 (Tan camo)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\RH_m4\data\ar15_camo2_co.paa"};
	};
	class RH_m4_wdl: RH_m4
	{
		author = "RobertHammer";
		displayName = "M4 (Wdl camo)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\RH_m4\data\ar15_camo3_co.paa"};
	};
	class RH_m4_m203_tg: RH_M4_M203
	{
		author = "RobertHammer";
		displayName = "M4 M203 (TG camo)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\RH_m4\data\ar15_camo_co.paa","\RH_m4\data\bits_camo_co.paa","\RH_m4\data\sight_camo_co.paa"};
	};
	class RH_m4_m203_des: RH_M4_M203
	{
		author = "RobertHammer";
		displayName = "M4 M203 (Tan camo)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\RH_m4\data\ar15_camo2_co.paa","\RH_m4\data\bits_camo2_co.paa","\RH_m4\data\sight_camo2_co.paa"};
	};
	class RH_m4_m203_wdl: RH_M4_M203
	{
		author = "RobertHammer";
		displayName = "M4 M203 (Wdl camo)";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\RH_m4\data\ar15_camo3_co.paa","\RH_m4\data\bits_camo3_co.paa","\RH_m4\data\sight_camo3_co.paa"};
	};
	
	class RH_m4a1: RH_m4
	{
		author = "10Dozen";
		displayName = "M4A1";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
	};	
	class RH_m4a1_tg: RH_m4_tg
	{
		author = "10Dozen";
		displayName = "M4A1 (TG camo)";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
	};
	class RH_m4a1_des: RH_m4_des
	{
		author = "10Dozen";
		displayName = "M4A1 (Tan camo)";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
	};
	class RH_m4a1_wdl: RH_m4_wdl
	{
		author = "10Dozen";
		displayName = "M4A1 (Wdl camo)";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
	};
	
	class RH_m4a1_m203: RH_M4_M203
	{
		author = "10Dozen";
		displayName = "M4A1 M203";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
	};
	class RH_m4a1_m203_tg: RH_m4_m203_tg
	{
		author = "10Dozen";
		displayName = "M4A1 M203 (TG camo)";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
	};
	class RH_m4a1_m203_des: RH_m4_m203_des
	{
		author = "10Dozen";
		displayName = "M4A1 M203 (Tan camo)";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
	};
	class RH_m4a1_m203_wdl: RH_m4_m203_wdl
	{
		author = "10Dozen";
		displayName = "M4A1 M203 (Wdl camo)";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
	};
	
// };
