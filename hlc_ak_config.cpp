////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.59
//Sun Apr 05 11:44:34 2015 : Source 'file' date Sun Apr 05 11:44:34 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class hlc_wp_ak : config.bin{
class CfgPatches
{
	class hlcweapons_aks
	{
		requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
		units[] = {"HLC_AK_ammobox"};
		weapons[] = {"HLC_Optic_PSO1","HLC_Optic_1p29","hlc_muzzle_545SUP_AK","hlc_muzzle_762SUP_AK","hlc_rifle_ak74","hlc_rifle_aks74","hlc_optic_kobra","hlc_optic_goshawk","hlc_rifle_ak12","hlc_rifle_aks74u","hlc_rifle_ak47","hlc_rifle_akm","hlc_rifle_akmgl","hlc_rifle_rpk","hlc_rifle_aks74_GL","hlc_rifle_aek971","hlc_rifle_saiga12k","hlc_rifle_ak74_dirty","hlc_rifle_ak12GL","hlc_rifle_aku12","hlc_rifle_RPK12"};
		magazines[] = {"hlc_10rnd_12g_buck_S12","hlc_10rnd_12g_slug_S12","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_t_ak","hlc_45Rnd_545x39_t_rpk","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak","hlc_45Rnd_762x39_t_rpk","hlc_45Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_VOG25_AK","hlc_GRD_Red","hlc_GRD_blue","hlc_GRD_green","hlc_GRD_yellow","hlc_GRD_white","hlc_GRD_purple","hlc_GRD_orange","hlc_30Rnd_545x39_S_AK","hlc_30rnd_762x39_s_ak"};
		version = "V1.6";
		author = "toadie";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class ItemCore;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;
class GrenadeLauncher;
class UGL_F;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class CfgVehicles
{
	class NATO_Box_Base;
	class HLC_AK_ammobox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "HLC AK Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class _xx_hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 60;
			};
			class _xx_hlc_30Rnd_545x39_t_ak
			{
				magazine = "hlc_30Rnd_545x39_t_ak";
				count = 60;
			};
			class _XX_hlc_30Rnd_545x39_S_AK
			{
				magazine = "hlc_30Rnd_545x39_S_AK";
				count = 60;
			};
			class _xx_hlc_45Rnd_545x39_t_rpk
			{
				magazine = "hlc_45Rnd_545x39_t_rpk";
				count = 60;
			};
			class _xx_hlc_30Rnd_545x39_EP_ak
			{
				magazine = "hlc_30Rnd_545x39_EP_ak";
				count = 60;
			};
			class _xx_hlc_30Rnd_762x39_b_ak
			{
				magazine = "hlc_30Rnd_762x39_b_ak";
				count = 60;
			};
			class _xx_hlc_hlc_30Rnd_762x39_t_ak
			{
				magazine = "hlc_30Rnd_762x39_t_ak";
				count = 60;
			};
			class _xx_hlc_45Rnd_762x39_t_rpk
			{
				magazine = "hlc_45Rnd_762x39_t_rpk";
				count = 60;
			};
			class _xx_hlc_45Rnd_762x39_m_rpk
			{
				magazine = "hlc_45Rnd_762x39_m_rpk";
				count = 60;
			};
			class _xx_hlc_10rnd_12g_buck_S12
			{
				magazine = "hlc_10rnd_12g_buck_S12";
				count = 60;
			};
			class _xx_hlc_10rnd_12g_slug_S12
			{
				magazine = "hlc_10rnd_12g_slug_S12";
				count = 60;
			};
			class _xx_hlc_hlc_VOG25_AK
			{
				magazine = "hlc_VOG25_AK";
				count = 60;
			};
			class _xx_hlc_GRD_White
			{
				magazine = "hlc_GRD_White";
				count = 60;
			};
			class _xx_hlc_GRD_red
			{
				magazine = "hlc_GRD_red";
				count = 60;
			};
			class _xx_hlc_GRD_green
			{
				magazine = "hlc_GRD_green";
				count = 60;
			};
			class _xx_hlc_GRD_blue
			{
				magazine = "hlc_GRD_blue";
				count = 60;
			};
			class _xx_hlc_GRD_orange
			{
				magazine = "hlc_GRD_orange";
				count = 60;
			};
			class _xx_hlc_GRD_purple
			{
				magazine = "hlc_GRD_purple";
				count = 60;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_rifle_ak74
			{
				weapon = "hlc_rifle_ak74";
				count = 30;
			};
			class _xx_hlc_rifle_aks74
			{
				weapon = "hlc_rifle_aks74";
				count = 30;
			};
			class _xx_hlc_rifle_aks74u
			{
				weapon = "hlc_rifle_aks74u";
				count = 30;
			};
			class _xx_hlc_rifle_ak47
			{
				weapon = "hlc_rifle_ak47";
				count = 30;
			};
			class _xx_hlc_rifle_akm
			{
				weapon = "hlc_rifle_akm";
				count = 30;
			};
			class xxhlc_rifle_aku12
			{
				weapon = "hlc_rifle_aku12";
				count = 30;
			};
			class xxhlc_rifle_rpk1212
			{
				weapon = "hlc_rifle_rpk12";
				count = 30;
			};
			class _xx_hlc_rifle_rpk
			{
				weapon = "hlc_rifle_rpk";
				count = 30;
			};
			class _xx_hlc_rifle_ak12
			{
				weapon = "hlc_rifle_ak12";
				count = 30;
			};
			class _xx_hlc_rifle_ak12gp
			{
				weapon = "hlc_rifle_ak12gl";
				count = 30;
			};
			class _xx_hlc_rifle_akmgl
			{
				weapon = "hlc_rifle_akmgl";
				count = 30;
			};
			class _xx_hhlc_rifle_aks74_GL
			{
				weapon = "hlc_rifle_aks74_GL";
				count = 30;
			};
			class _xx_hhlc_rifle_aek
			{
				weapon = "hlc_rifle_aek971";
				count = 30;
			};
			class _xx_hhlc_rifle_s12jk
			{
				weapon = "hlc_rifle_saiga12k";
				count = 30;
			};
		};
		class TransportItems
		{
			class _xx_optic_Holosight
			{
				name = "optic_Holosight";
				count = 10;
			};
			class _xx_optic_hamr
			{
				name = "optic_hamr";
				count = 10;
			};
			class _xx_optic_rco
			{
				name = "optic_rco";
				count = 10;
			};
			class _xx_HLC_Optic_PSO1
			{
				name = "HLC_Optic_PSO1";
				count = 10;
			};
			class _xx_HLC_Optic_1p29
			{
				name = "HLC_Optic_1p29";
				count = 10;
			};
			class _xx_hlc_muzzle_545SUP_AK
			{
				name = "hlc_muzzle_545SUP_AK";
				count = 10;
			};
			class _xx_hlc_muzzle_762SUP_AK
			{
				name = "hlc_muzzle_762SUP_AK";
				count = 10;
			};
			class _xx_hlc_optic_kobra
			{
				name = "hlc_optic_kobra";
				count = 10;
			};
			class _xx_hlc_optic_goshawk
			{
				name = "hlc_optic_goshawk";
				count = 10;
			};
		};
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class hlc_10rnd_12g_buck_S12: 30Rnd_556x45_Stanag
	{
		author = "Toadie";
		ammo = "HLC_12G_Buck";
		count = 10;
		descriptionshort = "Caliber: 12 Gauge 00-Buck<br />Rounds: 12<br />Used in: Saiga12K";
		displayname = "Saiga Mag (Buckshot) 10rnd 12 Gauge";
		initspeed = 700;
		lastroundstracer = 1;
		picture = "\hlc_wp_ak\tex\ui\m_saiga12k_buck_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "00-Buck";
	};
	class hlc_10rnd_12g_slug_S12: 30Rnd_556x45_Stanag
	{
		author = "Toadie";
		ammo = "B_12Gauge_Slug";
		count = 10;
		descriptionshort = "Caliber: 12 Gauge 00-Buck<br />Rounds: 12<br />Used in: Saiga12K";
		displayname = "Saiga Mag (Slug) 10rnd 12 Gauge";
		initspeed = 700;
		lastroundstracer = 1;
		picture = "\hlc_wp_ak\tex\ui\m_saiga12k_slug_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "Slug";
	};
	class hlc_30Rnd_545x39_B_AK: 30Rnd_556x45_Stanag
	{
		author = "Toadie";
		ammo = "FH_545x39_Ball";
		count = 30;
		descriptionshort = "Caliber: 5.45x39mm 7N6<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
		displayname = "AK74 Mag (Ball) 30rnd 5.45mm";
		initSpeed = 880;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_ak74ball_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "7N6 Ball";
	};
	class hlc_30Rnd_545x39_S_AK: 30Rnd_556x45_Stanag
	{
		author = "Toadie";
		ammo = "FH_545x39_7u1";
		count = 30;
		descriptionshort = "Caliber: 5.45x39mm 7N6<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
		displayname = "AK74 Mag (Subsonic) 30rnd 5.45mm";
		initspeed = 300;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_ak74ball_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "7U1 Subsonic";
	};
	class hlc_30Rnd_545x39_t_ak: hlc_30Rnd_545x39_B_AK
	{
		author = "Toadie";
		ammo = "FH_545x39_Tracer";
		descriptionshort = "Caliber: 5.45x39mm 7T3<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
		displayname = "AK74 Mag (Tracer) 30rnd 5.45mm";
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 1;
		mass = 12;
		displaynameshort = "7T3 Tracer ";
		picture = "\hlc_core\tex\ui\ammo\m_ak74tracer_ca.paa";
	};
	class hlc_45Rnd_545x39_t_rpk: hlc_30Rnd_545x39_T_ak
	{
		author = "Toadie";
		ammo = "FH_545x39_Tracer";
		count = 45;
		descriptionshort = "Caliber: 5.45x39mm 7T3/7N6<br />Rounds: 45<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
		displayname = "RPK74 Mag (Tracer) 45rnd 5.45mm";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 3;
		mass = 14;
		displaynameshort = "Tracer/Ball";
		picture = "\hlc_core\tex\ui\ammo\m_rpk74mixed_ca.paa";
	};
	class hlc_30Rnd_545x39_EP_ak: hlc_30Rnd_545x39_B_AK
	{
		author = "Toadie";
		ammo = "FH_545x39_EP";
		descriptionshort = "Caliber: 5.45x39mm 7N24<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
		displayname = "AK74 Mag (Enhanced Peneterator) 30rnd 5.45mm";
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "7N24 Ball";
		initSpeed = 890;
		picture = "\hlc_core\tex\ui\ammo\m_ak74ep_ca.paa";
	};
	class hlc_30Rnd_762x39_b_ak: 30Rnd_556x45_Stanag
	{
		author = "Toadie";
		ammo = "HLC_762x39_Ball";
		count = 30;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231 (M43 Ball) AK47 Magazine <br />Rounds: 45<br />Used in: RPK";
		displayname = "AK47 Mag (Ball) 30rnd 7.62mm";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 1;
		mass = 13;
		displaynameshort = "Ball";
		picture = "\hlc_wp_ak\tex\ui\m_ak47_b_ca.paa";
		initspeed = 715;
	};
	class hlc_30Rnd_762x39_t_ak: hlc_30Rnd_762x39_b_ak
	{
		author = "Toadie";
		ammo = "HLC_762x39_Tracer";
		count = 30;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231P (Tracer) AK47 Magazine <br />Rounds: 45<br />Used in: RPK";
		displayname = "AK47 Mag (Tracer) 30rnd 7.62mm";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 1;
		mass = 13;
		displaynameshort = "Tracer";
		picture = "\hlc_wp_ak\tex\ui\m_ak47_t_ca.paa";
		initspeed = 715;
	};
	class hlc_30rnd_762x39_s_ak: hlc_30Rnd_762x39_b_ak
	{
		author = "Toadie";
		ammo = "HLC_762x39_Ball";
		count = 30;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231 (M43 Ball) AK47 Magazine <br />Rounds: 45<br />Used in: RPK";
		displayname = "AK47 Mag (Subsonic) 30rnd 7.62mm";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 1;
		mass = 13;
		displaynameshort = "Subsonic";
		picture = "\hlc_wp_ak\tex\ui\m_ak47_b_ca.paa";
		initspeed = 340;
	};
	class hlc_45Rnd_762x39_t_rpk: 30Rnd_556x45_Stanag
	{
		author = "Toadie";
		ammo = "HLC_762x39_Tracer";
		count = 45;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231P (Tracer) RPK Magazine <br />Rounds: 45<br />Used in: RPK";
		displayname = "RPK Mag (Tracer) 45rnd 7.62mm";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 1;
		mass = 16;
		displaynameshort = "Tracer";
		picture = "\hlc_wp_ak\tex\ui\m_rpk_tracer_ca.paa";
		initspeed = 745;
	};
	class hlc_45Rnd_762x39_m_rpk: hlc_45Rnd_762x39_t_rpk
	{
		author = "Toadie";
		ammo = "HLC_762x39_Tracer";
		count = 45;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231 (Tracer) RPK Magazine <br />Rounds: 45<br />Used in: RPK";
		displayname = "RPK Mag (Mixed) 45rnd 7.62mm";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 3;
		mass = 16;
		displaynameshort = "Tracer/Ball";
		picture = "\hlc_wp_ak\tex\ui\m_rpk_mixed_ca.paa";
		initspeed = 745;
	};
	class hlc_75Rnd_762x39_m_rpk: hlc_45Rnd_762x39_m_rpk
	{
		author = "Toadie";
		count = 75;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231 (Tracer) RPK Magazine <br />Rounds: 75<br />Used in: RPK";
		displayname = "RPK Drum (Mixed) 75rnd 7.62mm";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 3;
		mass = 32;
		displaynameshort = "Tracer/Ball";
		picture = "\hlc_wp_ak\tex\ui\m_rpk_mixed_ca.paa";
		initspeed = 745;
	};
	class 1Rnd_HE_Grenade_shell;
	class hlc_VOG25_AK: 1Rnd_HE_Grenade_shell
	{
		author = "Toadie";
		ammo = "G_40mm_HE";
		count = 1;
		descriptionshort = "Type: High Explosive Grenade Round<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "VOG25 HE Grenade Round";
		displaynameshort = "HE Grenade";
		initspeed = 76;
		mass = 4;
		namesound = "";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		reloadaction = "HLC_GestureReloadGP30";
		scope = 2;
		type = 16;
	};
	class hlc_GRD_White: 1Rnd_HE_Grenade_shell
	{
		author = "Toadie";
		ammo = "G_40mm_Smoke";
		descriptionshort = "Type: Smoke Round - White<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (White)";
		displaynameshort = "White Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		reloadaction = "HLC_GestureReloadGP30";
	};
	class hlc_GRD_Red: hlc_grd_white
	{
		ammo = "G_40mm_SmokeRed";
		descriptionshort = "Type: Smoke Round - Red<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Red)";
		displaynameshort = "Red Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
	};
	class hlc_GRD_green: hlc_grd_white
	{
		ammo = "G_40mm_SmokeGreen";
		descriptionshort = "Type: Smoke Round - Green<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Green)";
		displaynameshort = "Green Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
	};
	class hlc_GRD_yellow: hlc_grd_white
	{
		ammo = "G_40mm_SmokeYellow";
		descriptionshort = "Type: Smoke Round - Yellow<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Yellow)";
		displaynameshort = "Yellow Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
	};
	class hlc_GRD_orange: hlc_grd_white
	{
		ammo = "G_40mm_SmokeOrange";
		descriptionshort = "Type: Smoke Round - Orange<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Orange)";
		displaynameshort = "Orange Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
	};
	class hlc_GRD_purple: hlc_grd_white
	{
		ammo = "G_40mm_SmokePurple";
		descriptionshort = "Type: Smoke Round - Purple<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Purple)";
		displaynameshort = "Purple Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
	};
	class hlc_GRD_blue: hlc_grd_white
	{
		ammo = "G_40mm_SmokeBlue";
		descriptionshort = "Type: Smoke Round - Blue<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Blue)";
		displaynameshort = "Blue Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
	};
};
class CfgWeapons
{
	class Rifle;
	class WeaponSlotsInfo;
	class optic_Hamr;
	class LMG_Zafir_F;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class optic_dms;
	class HLC_Optic_PSO1: optic_dms
	{
		author = "Bohemia Interactive, Toadie";
		descriptionshort = "PSO1 Optical Sniper Sight<br />Magnification: 4x";
		displayname = "PSO-1M";
		model = "\hlc_wp_ak\mesh\pso1\pso1.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_pso1_x_ca";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 7;
			modelOptics = "\hlc_wp_ak\mesh\pso1\pso_optics";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
					discreteDistance[] = {400};
					discreteDistanceInitIndex = 0;
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
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
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
	};
	class HLC_Optic_1p29: HLC_Optic_PSO1
	{
		author = "Bionic, Toadie";
		descriptionshort = "1P29 Combat Optic<br />Magnification: 4x";
		displayname = "1P29";
		model = "\hlc_wp_ak\mesh\1p29\1p29.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_1p29_ca";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 7;
			modelOptics = "\hlc_wp_ak\mesh\1p29\1p29_optics";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
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
	};
	class muzzle_snds_H;
	class hlc_muzzle_545SUP_AK: muzzle_snds_H
	{
		author = "Bohemia Interactive, Toadie";
		displayName = "PBS4 AK Suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\hlc_wp_ak\mesh\PBS4\pbs4";
	};
	class ItemInfo;
	class muzzle_snds_M;
	class hlc_muzzle_762SUP_AK: muzzle_snds_M
	{
		author = "Jason9Jason, Toadie";
		displayName = "PBS1 AK Suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\hlc_wp_ak\mesh\PBS1\pbs1";
	};
	class hlc_ak_base: Rifle_Base_F
	{
		inertia = 0.5;
		author = "Toadie";
		scope = 0;
		aidispersioncoefx = 3;
		aidispersioncoefy = 5;
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_EP_AK","hlc_45Rnd_545x39_t_rpk","hlc_30Rnd_545x39_S_AK"};
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
			mass = 33;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"hlc_muzzle_545SUP_AK"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
		};
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
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
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire2",1,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.086;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			dispersion = 0.000654498;
			minRange = 2;
			minRangeProbab = 0.7;
			midRange = 75;
			midRangeProbab = 0.08;
			maxRange = 250;
			maxRangeProbab = 0.0015;
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
				begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74m_fire2",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire2",1,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.086;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
			dispersion = 0.000654498;
			minRange = 0;
			minRangeProbab = 0.03;
			midRange = 75;
			midRangeProbab = 0.005;
			maxRange = 250;
			maxRangeProbab = 0.0003;
			aiRateOfFire = 1e-006;
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
				begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74m_fire2",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
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
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		drysound[] = {"hlc_core\sound\empty_assaultrifles",1,1,10};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\ak74m_reload",0.74,1,30};
	};
	class hlc_rifle_ak74: hlc_ak_base
	{
		AB_barrelTwist = 7.87;
		AB_barrelLength = 16.3;
		author = "MrRifleman, Toadie";
		scope = 2;
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_EP_AK","hlc_45Rnd_545x39_t_rpk","hlc_30Rnd_545x39_S_AK"};
		displayName = "Izhmash AK74";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak74_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		bg_bipod = 0;
		aidispersioncoefx = 4;
		aidispersioncoefy = 6;
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		drysound[] = {"hlc_core\sound\empty_assaultrifles",1.01,1,10};
		handAnim[] = {"OFP2_ManSkeleton","hlc_core\animation\oldgesture\ak74_hands.rtm"};
		changeFiremodeSound[] = {"hlc_wp_ak\snd\ak_selector",1,1,20};
		class Single: Mode_SemiAuto
		{
			airateoffire = "1e-006";
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.086;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.000654498;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
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
				begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74m_fire2",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			airateoffire = "1e-006";
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.086;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			dispersion = 0.000654498;
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
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
				begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74m_fire2",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 61.4;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
			};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\ak74m_reload",0.74,1,30};
	};
	class hlc_rifle_ak74_dirty: hlc_rifle_ak74
	{
		author = "MrRifleman, Millenia, Toadie";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty.p3d";
		displayName = "Izhmash AK74(Worn)";
	};
	class hlc_rifle_aks74: hlc_rifle_ak74
	{
		inertia = 0.45;
		author = "MrRifleman, Toadie";
		reloadAction = "HLC_GestureReloadAK";
		scope = 2;
		model = "\hlc_wp_ak\mesh\aks74\aks74.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_aks74_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "Izhmash AKS74";
		discretedistance[] = {200,100,200,300,400,500,600,700,800,900,1000};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		drysound[] = {"\hlc_core\sound\empty_assaultrifles",1,1,10};
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		changeFiremodeSound[] = {"hlc_wp_ak\snd\ak_selector",1,1,20};
		class Single: Mode_SemiAuto
		{
			airateoffire = "1e-006";
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.086;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.000654498;
			minRange = 2;
			minRangeProbab = 0.7;
			midRange = 75;
			midRangeProbab = 0.08;
			maxRange = 250;
			maxRangeProbab = 0.0015;
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
				begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74m_fire2",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			airateoffire = "1e-006";
			begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			begin2[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.086;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			dispersion = 0.000654498;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
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
				begin1[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74m_fire2",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74m_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 59.4;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
			};
		};
	};
	class optic_ACO_grn;
	class hlc_optic_kobra: optic_ACO_grn
	{
		author = "Tigg, Toadie";
		descriptionshort = "Open Face Collimator Optic";
		displayname = "Kobra Sight";
		model = "\hlc_wp_ak\mesh\Kobra\kobra.p3d";
		picture = "\A3\weapons_F\Data\UI\gear_acco_aco_CA.paa";
		scope = 2;
		weaponinfotype = "RscWeaponZeroing";
	};
	class hlc_optic_goshawk: optic_ACO_grn
	{
		author = "Bohemia Interactive, Toadie";
		scope = 2;
		displayName = "Goshawk";
		descriptionshort = "Goshawk Adaptable Thermal Optic<br />Magnification: 3.6x";
		picture = "\hlc_wp_ak\tex\ui\gear_goshawk_ca.paa";
		model = "\hlc_wp_ak\mesh\goshawk\goshawk.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
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
	};
	class hlc_rifle_ak12: hlc_rifle_aks74
	{
		inertia = 0.5;
		author = "Maibatsu, Toadie";
		scope = 2;
		displayName = "Izhmash AK12";
		model = "\hlc_wp_ak\mesh\ak12\ak12.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak12_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 2;
		bg_bipod = 0;
		drysound[] = {"\hlc_core\sound\empty_assaultrifles",1,1,10};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\ak12_reload",0.74,1,30};
		modes[] = {"Burst","Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		handanim[] = {"OFP2_ManSkeleton","hlc_core\animation\gesture\handpose_ak12.rtm"};
		reloadAction = "HLC_GestureReloadAK12";
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.000654498;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.00062541;
			recoil = "recoil_auto_mk20";
			recoilprone = "recoil_auto_prone_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.06;
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			dispersion = 0.00062541;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			burst = 3;
			minRange = 1;
			minRangeProbab = 0.03;
			midRange = 75;
			midRangeProbab = 0.015;
			maxRange = 200;
			maxRangeProbab = 0.0005;
		};
		class Library
		{
			libTextDesc = "Izhmash AK12 5.45mm";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"hlc_muzzle_545SUP_AK"};
			};
			class asdg_OpticRail_AK12: asdg_OpticRail1913{};
			class asdg_FrontSideRail_AK12: asdg_FrontSideRail{};
			class CowsSlot{};
		};
	};
	class hlc_rifle_ak12GL: hlc_rifle_aks74
	{
		inertia = 0.5;
		author = "Maibatsu, Toadie";
		scope = 2;
		displayName = "Izhmash AK12(GL)";
		model = "\hlc_wp_ak\mesh\ak12\ak12GP.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak12_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 2;
		bg_bipod = 0;
		drysound[] = {"\hlc_core\sound\empty_assaultrifles",1,1,10};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\ak12_reload",0.74,1,30};
		modes[] = {"Burst","Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		handanim[] = {"OFP2_ManSkeleton","hlc_core\animation\gesture\handpose_gp25.rtm"};
		reloadAction = "HLC_GestureReloadAK12";
		muzzles[] = {"this","hlc_GP30_AK12"};
		class hlc_GP30_AK12: UGL_F
		{
			cameradir = "GL Look";
			discreteDistance[] = {100,200,300,400};
			discreteDistanceCameraPoint[] = {"GL Eye1","GL Eye2","GL Eye3","GL Eye4"};
			discreteDistanceInitIndex = 1;
			displayname = "GP30";
			useModelOptics = 0;
			useExternalOptic = 0;
			optics = 1;
			drysound[] = {"A3\sounds_f\Weapons\other\sfx5",1,1,400};
			cursoraim = "gl";
			magazinereloadtime = 0;
			magazines[] = {"hlc_VOG25_AK","hlc_GRD_White","hlc_GRD_Red","hlc_GRD_Green","hlc_GRD_Yellow","hlc_GRD_Purple","hlc_GRD_Blue","hlc_GRD_Orange"};
			opticszoominit = 0.75;
			opticszoommax = 1.1;
			opticszoommin = 0.375;
			reloadmagazinesound[] = {"\hlc_wp_ak\snd\gp30_reload",0.1,1,20};
			reloadtime = 0.1;
			sound[] = {"\hlc_wp_ak\snd\gp30_fire",1.0,1,400};
		};
		weaponinfotype = "RscWeaponZeroing";
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.000654498;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.00062541;
			recoil = "recoil_auto_mk20";
			recoilprone = "recoil_auto_prone_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.06;
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			dispersion = 0.00062541;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak12_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			burst = 3;
			minRange = 1;
			minRangeProbab = 0.03;
			midRange = 75;
			midRangeProbab = 0.015;
			maxRange = 200;
			maxRangeProbab = 0.0005;
		};
		class Library
		{
			libTextDesc = "Izhmash AK12 5.45mm";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"hlc_muzzle_545SUP_AK"};
			};
			class asdg_OpticRail_AK12: asdg_OpticRail1913{};
			class CowsSlot{};
		};
	};
	class hlc_rifle_aku12: hlc_rifle_ak12
	{
		AB_barrelTwist = 6.3;
		AB_barrelLength = 8.3;
		inertia = 0.4;
		author = "Maibatsu, Toadie";
		scope = 2;
		initspeed = -0.816667;
		displayName = "Izhmash AKU12";
		model = "\hlc_wp_ak\mesh\ak12\akU12.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak12_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 2;
		bg_bipod = 0;
		drysound[] = {"\hlc_core\sound\empty_assaultrifles",1,1,10};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\ak12_reload",0.74,1,30};
		modes[] = {"Burst","Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		handanim[] = {"OFP2_ManSkeleton","hlc_core\animation\gesture\handpose_ak12.rtm"};
		reloadAction = "HLC_GestureReloadAK12";
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.000972294;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.000972294;
			recoil = "recoil_auto_mk20";
			recoilprone = "recoil_auto_prone_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.06;
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			dispersion = 0.000972294;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			burst = 3;
			minRange = 1;
			minRangeProbab = 0.03;
			midRange = 75;
			midRangeProbab = 0.015;
			maxRange = 200;
			maxRangeProbab = 0.0005;
		};
		class Library
		{
			libTextDesc = "Izhmash AK12 5.45mm";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 61;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"hlc_muzzle_545SUP_AK"};
			};
			class asdg_OpticRail_AK12: asdg_OpticRail1913{};
			class asdg_FrontSideRail_AK12: asdg_FrontSideRail{};
			class CowsSlot{};
		};
	};
	class hlc_rifle_RPK12: hlc_rifle_ak12
	{
		AB_barrelLength = 23.2;
		agm_bipod = 1;
		cse_bipod = 1;
		bg_bipod = 1;
		inertia = 0.66;
		magazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_EP_AK","hlc_30Rnd_545x39_S_AK"};
		author = "Maibatsu, Toadie";
		scope = 2;
		displayName = "Izhmash RPK12";
		model = "\hlc_wp_ak\mesh\ak12\rpk12.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak12_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 2;
		drysound[] = {"\hlc_core\sound\empty_assaultrifles",1,1,10};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\rpk_reload_me",0.74,1,30};
		modes[] = {"Burst","Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		handanim[] = {"OFP2_ManSkeleton","hlc_core\animation\gesture\handpose_ak12.rtm"};
		reloadAction = "HLC_GestureReloadRPK";
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk74_silenced",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\rpk74_silenced",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			recoil = "recoil_auto_mk20";
			recoilprone = "recoil_auto_prone_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk74_silenced",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\rpk74_silenced",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.06;
			begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			dispersion = 0.000972294;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\rpk74m_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk74_silenced",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\rpk74_silenced",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			burst = 3;
			minRange = 1;
			minRangeProbab = 0.03;
			midRange = 75;
			midRangeProbab = 0.015;
			maxRange = 200;
			maxRangeProbab = 0.0005;
		};
		class Library
		{
			libTextDesc = "Izhmash AK12 5.45mm";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 98;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"hlc_muzzle_545SUP_AK"};
			};
			class asdg_OpticRail_AK12: asdg_OpticRail1913{};
			class asdg_FrontSideRail_AK12: asdg_FrontSideRail{};
			class CowsSlot{};
		};
	};
	class hlc_rifle_aks74u: hlc_rifle_ak74
	{
		AB_barrelTwist = 6.3;
		AB_barrelLength = 8.3;
		author = "Millenia, Toadie";
		scope = 2;
		displayName = "Izhmash AKS74U";
		initspeed = -0.816667;
		model = "\hlc_wp_ak\mesh\millaks74u\aks74u.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_aks74u_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		drysound[] = {"hlc_core\sound\empty_assaultrifles",1,1,10};
		discretedistance[] = {350,500};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.086;
			begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.000972294;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
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
				begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.086;
			begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.000972294;
			recoil = "recoil_auto_mk20";
			recoilprone = "recoil_auto_prone_mk20";
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
				begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak74u_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak74_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Library
		{
			libTextDesc = "Izhmash AKS74U";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 54;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
			};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
	};
	class hlc_rifle_ak47: hlc_rifle_ak74
	{
		AB_barrelTwist = 9.45;
		AB_barrelLength = 16.3;
		author = "Twinke Masta, Marcius, Toadie";
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak","hlc_45Rnd_762x39_m_rpk","HLC_45rnd_762x39_T_RPK","hlc_30rnd_762x39_s_ak"};
		displayName = "Izhmash AK47";
		model = "\hlc_wp_ak\mesh\ak47\ak47.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak47_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		drysound[] = {"\hlc_core\sound\empty_assaultrifles",1,1,10};
		discretedistance[] = {100,200,300,500,600,700,800,900,1000};
		discretedistanceinitindex = 2;
		bg_bipod = 0;
		descriptionShort = "Assault rifle<br/>Caliber: 7.62mm";
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\ak47_reload",0.74,1,30};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.097;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
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
				begin1[] = {"\hlc_wp_ak\snd\ak47_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak47_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak47_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak47_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak47_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.097;
			recoil = "recoil_single_mx";
			recoilprone = "recoil_single_prone_mx";
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
				begin1[] = {"\hlc_wp_ak\snd\ak47_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak47_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak47_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak47_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak47_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Library
		{
			libTextDesc = "Izhmash AK47 (Type 1)";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 74.5;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"hlc_muzzle_762SUP_AK"};
			};
		};
	};
	class hlc_rifle_akm: hlc_rifle_ak47
	{
		AB_barrelTwist = 7.87;
		AB_barrelLength = 16.3;
		author = "MrRifleman, Bull5hit, Toadie";
		model = "\hlc_wp_ak\mesh\akm\akm.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_akm_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "Izhmash AKM";
		descriptionShort = "Assault rifle,Grenade Launcher<br/>Caliber: 7.62mm";
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.097;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
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
				begin1[] = {"\hlc_wp_ak\snd\ak47_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak47_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak47_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak47_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak47_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.097;
			recoil = "recoil_single_mx";
			recoilprone = "recoil_single_prone_mx";
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
				begin1[] = {"\hlc_wp_ak\snd\ak47_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\ak47_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\ak47_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\ak47_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\ak47_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 62;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"hlc_muzzle_762SUP_AK"};
			};
		};
	};
	class hlc_rifle_akmgl: hlc_rifle_akm
	{
		inertia = 0.55;
		author = "MrRifleman, Bull5hit, Bohemia Interactive, Toadie";
		model = "\hlc_wp_ak\mesh\akmgl\akm.p3d";
		handanim[] = {"OFP2_ManSkeleton","hlc_core\animation\gesture\handpose_gp.rtm"};
		displayName = "Izhmash AKM (GL)";
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		muzzles[] = {"this","hlc_GP25_AKM"};
		class hlc_GP25_AKM: UGL_F
		{
			cameraDir = "OP_look";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye1","OP_eye2","OP_eye3","OP_eye4","OP_eye5","OP_eye6","OP_eye7"};
			discreteDistanceInitIndex = 2;
			displayname = "GP25";
			useModelOptics = 0;
			useExternalOptic = 0;
			optics = 1;
			drysound[] = {"A3\sounds_f\Weapons\other\sfx5",1,1,400};
			cursoraim = "gl";
			magazinereloadtime = 0;
			magazines[] = {"hlc_VOG25_AK","hlc_GRD_White","hlc_GRD_Red","hlc_GRD_Green","hlc_GRD_Yellow","hlc_GRD_Purple","hlc_GRD_Blue","hlc_GRD_Orange"};
			opticszoominit = 0.75;
			opticszoommax = 1.1;
			opticszoommin = 0.375;
			reloadmagazinesound[] = {"\hlc_wp_ak\snd\gp30_reload",0.1,1,20};
			reloadtime = 0.1;
			sound[] = {"\hlc_wp_ak\snd\gp30_fire",1.0,1,400};
			weaponinfotype = "RscWeaponZeroing";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 92;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"hlc_muzzle_762SUP_AK"};
			};
		};
	};
	class hlc_rifle_rpk: hlc_rifle_ak47
	{
		inertia = 0.6;
		author = "Booly, Toadie";
		reloadAction = "HLC_GestureReloadRPK";
		scope = 2;
		aidispersioncoefx = 10;
		aidispersioncoefy = 12;
		AB_barrelTwist = 9.45;
		AB_barrelLength = 23.2;
		agm_bipod = 1;
		cse_bipod = 1;
		bg_bipod = 1;
		magazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_45Rnd_762x39_m_rpk","HLC_45rnd_762x39_T_RPK","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak","hlc_30rnd_762x39_s_ak"};
		model = "\hlc_wp_ak\mesh\rpk\rpk.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_rpk_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "Izhmash RPK";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 0;
		descriptionShort = "Light Support Weapon<br/>Caliber: 7.62mm";
		drysound[] = {"\hlc_core\sound\empty_assaultrifles",1,1,10};
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\rpk_reload_me",0.74,1,30};
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2","medium","close"};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.1;
			recoil = "recoil_auto_mx";
			recoilProne = "recoil_auto_prone_mx";
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
				begin1[] = {"\hlc_wp_ak\snd\rpk_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\rpk_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\rpk_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\rpk_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			recoil = "recoil_single_mx";
			recoilprone = "recoil_single_prone_mx";
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
				begin1[] = {"\hlc_wp_ak\snd\rpk_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\rpk_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\rpk_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\rpk_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\rpk_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 5;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 200;
		};
		class medium: fullauto_medium
		{
			showToPlayer = 0;
			airateoffire = 0.2;
			airateoffiredistance = 600;
			burst = 3;
			maxrange = 600;
			maxrangeprobab = 0.1;
			midrange = 400;
			midrangeprobab = 0.6;
			minrange = 200;
			minrangeprobab = 0.05;
		};
		class close: FullAuto
		{
			showToPlayer = 0;
			airateoffire = 0.1;
			airateoffiredistance = 50;
			burst = 10;
			maxrange = 50;
			maxrangeprobab = 0.04;
			midrange = 30;
			midrangeprobab = 0.7;
			minrange = 0;
			minrangeprobab = 0.05;
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 96;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"hlc_muzzle_762SUP_AK"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
			};
		};
	};
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
		inertia = 0.55;
		author = "MrRifleman, Tigg, Toadie";
		model = "\hlc_wp_ak\mesh\aks74gl\aks74gl.p3d";
		handanim[] = {"OFP2_ManSkeleton","hlc_core\animation\gesture\handpose_gp25.rtm"};
		displayName = "Izhmash AKS74(GL)";
		picture = "\hlc_wp_ak\tex\ui\gear_aks74gl_x_ca";
		drysound[] = {"hlc_core\sound\empty_assaultrifles",1,1,10};
		muzzles[] = {"this","hlc_GP30_AKS74"};
		bg_bipod = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85.4;
		};
		class hlc_GP30_AKS74: UGL_F
		{
			cameradir = "GL Look";
			discreteDistance[] = {100,200,300,400};
			discreteDistanceCameraPoint[] = {"GL Eye1","GL Eye2","GL Eye3","GL Eye4"};
			discreteDistanceInitIndex = 1;
			displayname = "GP30";
			useModelOptics = 0;
			useExternalOptic = 0;
			optics = 1;
			drysound[] = {"A3\sounds_f\Weapons\other\sfx5",1,1,400};
			cursoraim = "gl";
			magazinereloadtime = 0;
			magazines[] = {"hlc_VOG25_AK","hlc_GRD_White","hlc_GRD_Red","hlc_GRD_Green","hlc_GRD_Yellow","hlc_GRD_Purple","hlc_GRD_Blue","hlc_GRD_Orange"};
			opticszoominit = 0.75;
			opticszoommax = 1.1;
			opticszoommin = 0.375;
			reloadmagazinesound[] = {"\hlc_wp_ak\snd\gp30_reload",0.1,1,20};
			reloadtime = 0.1;
			sound[] = {"\hlc_wp_ak\snd\gp30_fire",1.0,1,400};
			weaponinfotype = "RscWeaponZeroing";
		};
	};
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
		author = "Arby26, Millenia, Toadie";
		scope = 2;
		displayName = "ZID AEK971S";
		model = "\hlc_wp_ak\mesh\aek971\aek971.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_aek_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		drysound[] = {"hlc_core\sound\empty_assaultrifles",1,1,10};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\aek_reload",0.74,1,30};
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		modes[] = {"FullAuto","Burst","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.0681;
			begin1[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.0005563233;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak2_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak2_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\aek_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\aek_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.0681;
			begin1[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
			closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			dispersion = 0.0005563233;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_mk20";
			burst = 3;
			minRange = 1;
			minRangeProbab = 0.03;
			midRange = 75;
			midRangeProbab = 0.015;
			maxRange = 200;
			maxRangeProbab = 0.0005;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak2_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak2_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\aek_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\aek_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.0681;
			begin1[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.0005563233;
			recoil = "recoil_auto_mk20";
			recoilprone = "recoil_auto_prone_mk20";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak2_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak2_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\aek_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\aek_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class Library
		{
			libTextDesc = "ZID AEK971S";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"hlc_optic_pso1","hlc_optic_goshawk","hlc_optic_kobra","hlc_optic_1p29"};
			};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
	};
	class hlc_rifle_saiga12k: hlc_rifle_ak47
	{
		inertia = 0.55;
		author = "Bohemia Interactive, Toadie";
		reloadAction = "HLC_GestureReloadRPK";
		scope = 2;
		magazines[] = {"hlc_10rnd_12g_buck_S12","hlc_10rnd_12g_slug_S12"};
		model = "\hlc_wp_ak\mesh\saiga\saiga12k.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_saiga_x_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		displayName = "Izhmash Saiga12K";
		discretedistance[] = {100,200,300,400};
		discretedistanceinitindex = 0;
		descriptionShort = "Shotgun<br/>Caliber:12 Gauge";
		bg_bipod = 1;
		drysound[] = {"\hlc_core\sound\empty_shotguns.wav",1,1,10};
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\saiga_reload",0.74,1,30};
		modes[] = {"Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			begin1[] = {"\hlc_wp_ak\snd\saiga_fire",1.0,1,1200};
			begin2[] = {"\hlc_wp_ak\snd\saiga_fire",1.0,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
			dispersion = 0.001666789;
			recoil = "recoil_single_gm6";
			recoilprone = "recoil_single_prone_gm6";
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
				begin1[] = {"\hlc_wp_ak\snd\saiga_fire",1,1,1200};
				begin2[] = {"\hlc_wp_ak\snd\saiga_fire",1,1,1200};
				begin3[] = {"\hlc_wp_ak\snd\saiga_fire",1,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				begin2[] = {"\hlc_wp_ak\snd\aek_sil",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 70;
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
		};
	};
};
//};