#include "macro.hpp"

// class CfgWeapons
// {

	class hlc_ak_base: Rifle_Base_F
	{
		magazineReloadSwitchPhase = 0.5;
		author = "Toadie";
		recoil = "recoil_mk20";
		deployedPivot = "deploypivot";
		hasBipod = 0;
		scope = 0;
		magazines[] = {};
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
		
	};
	
	// 7.62mm RPK
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
		magazines[] = tS_MAG_762x39mm;
		model = "\hlc_wp_ak\mesh\rpk\rpk_30rnd.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_rpk_x_ca";
		hiddenSelections[] = {"Main","Dovetail","Mount","magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\rifleman_akm\akm_co.paa"};
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		displayName = $STR_tSRPK_RPK;
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
			mass = 110;
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
			hlc_40Rnd_762x39_Mag = "hlc_rifle_rpk_45rnd";
			hlc_75Rnd_762x39_Drum = "hlc_rifle_rpk_75rnd";
			default = "hlc_rifle_rpk";
		};
	};
	class hlc_rifle_rpk_45rnd: hlc_rifle_rpk
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = $STR_tSRPK_RPK;
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
		displayName = $STR_tSRPK_RPK;
		reloadAction = "HLC_GestureReloadAK762Drum";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload",0.9,1,30};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.paa"};
		inertia = "0.48+0.145";
		dexterity = 0.99990404;
		aimTransitionSpeed = 0.6999328;
	};
	
	
	
	// 5.45mm RPK-74
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
		displayName = $STR_tSRPK_RPK74;
		descriptionShort = "Light Support Weapon<br/>Caliber: 5.45mm";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		cameraDir = "eye_look";
		magazines[] = tS_MAG_545x39mm;
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk74\rpk74_reload",0.9,1,30};
		model = "\hlc_wp_ak\mesh\rpk\rpk74_30rnd.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_rpk74_ca";
		hiddenSelections[] = {"Main","Dovetail","Mount","magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\rifleman_aks\aks_co.paa"};
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		modes[] = {"FullAuto","Single","50m","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar","AI_far_optic1","AI_toofar_optic1","AI_far_optic2","AI_toofar_optic2"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 103;
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
			rhs_45Rnd_545x39_AK = "hlc_rifle_rpk74n_45rnd";
			rhs_45Rnd_545x39_7N6_AK = "hlc_rifle_rpk74n_45rnd";
			rhs_45Rnd_545x39_7N10_AK = "hlc_rifle_rpk74n_45rnd";
			rhs_45Rnd_545x39_7N22_AK = "hlc_rifle_rpk74n_45rnd";
			rhs_45Rnd_545x39_AK_green = "hlc_rifle_rpk74n_45rnd";
			rhs_45Rnd_545x39_7U1_AK = "hlc_rifle_rpk74n_45rnd";

			CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M = "hlc_rifle_rpk74n_45rnd";
			CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M = "hlc_rifle_rpk74n_45rnd";
			
			default = "hlc_rifle_rpk74n";
		};
	};
	
	class hlc_rifle_rpk74n_45rnd: hlc_rifle_rpk74n
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = $STR_tSRPK_RPK74;
		model = "\hlc_wp_ak\mesh\rpk\rpk74.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\adept\wpn_ak_10_co.paa"};
		inertia = "0.47+0.081";
		dexterity = 1.0816942;
		aimTransitionSpeed = 0.75718594;
	};
	
	
	// 7.62 Valmet RK.62
	class hlc_rifle_RK62: hlc_ak_base
	{
		deployedPivot = "deploypivot";
		scope = 2;
		dlc = "Niarms_AK";
		author = "Nix";
		magazines[] = tS_MAG_762x39mm;
		model = "hlc_wp_ak\mesh\rk62\rk62.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_rk62_ca";
		hiddenSelections[] = {"Main"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\nix_rk62\rk62_co.paa"};
		displayName = "Valmet Rk.62";
		drysound[] = {"\hlc_wp_ak\snd\empty_assaultrifles",1.5,1,10};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rk62\rk62_reload",1,1,20};
		reloadAction = "HLC_GestureReloadAK";
		recoil = "recoil_mx";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 89;
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[] = {0.0,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.35;
		dexterity = 1.4711225;
		aimTransitionSpeed = 1.0297858;
		DescriptionShort = "Assault rifle<br/>Caliber: 7.62mm";
		discreteDistance[] = {150,100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye_150","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600"};
		cameraDir = "eye_look";
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_rk62_Shot_SoundSet","Nia_rk62_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_rpk_Shot_Silenced_SoundSet","Nia_rpk_ShotTail_Silenced_SoundSet"};
			};
			reloadTime = 0.085;
			dispersion = 0.000378155;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_rk62_Shot_SoundSet","Nia_rk62_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_rpk_Shot_Silenced_SoundSet","Nia_rpk_ShotTail_Silenced_SoundSet"};
			};
			reloadTime = 0.085;
			dispersion = 0.00049451;
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
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
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
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
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
		class nia_magSwitch
		{
			hlc_40Rnd_762x39_Mag = "hlc_rifle_RK62_45rnd";
			hlc_75Rnd_762x39_Drum = "hlc_rifle_RK62_75rnd";
			default = "hlc_rifle_RK62";
		};
	};
	class hlc_rifle_RK62_45rnd: hlc_rifle_RK62
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Valmet Rk.62";
		model = "hlc_wp_ak\mesh\rk62\rk62_45rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\nix_rk62\rk62_co.paa"};
		inertia = "0.35+0.07";
		dexterity = 1.2926446;
		aimTransitionSpeed = 0.9048512;
	};
	class hlc_rifle_RK62_75rnd: hlc_rifle_RK62
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Valmet Rk.62";
		model = "hlc_wp_ak\mesh\rk62\rk62_75rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\nix_rk62\rk62_co.paa"};
		reloadAction = "HLC_GestureReloadAK762Drum";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload",0.9,1,30};
		inertia = "0.35+0.145";
		dexterity = 1.1574228;
		aimTransitionSpeed = 0.8101959;
	};	
// };