

class CfgPatches
{
	class tS_RPK74
	{
		units[] = {};
		weapons[] = {
			"hlc_m60"
		};
		
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","cba_jr","hlcweapons_core"};
		
		version = "v0.1";
		author = "toadie & 10Dozen";
	};
};

#include "NIArms_Stuff.hpp"

class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail;
class asdg_OpticSideMount: asdg_OpticRail
{
	class compatibleItems
	{
		HLC_Optic_PSO1 = 1;
		HLC_Optic_1p29 = 1;
		hlc_optic_kobra = 1;
		hlc_optic_goshawk = 1;
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		hlc_muzzle_545SUP_AK = 1;
	};
};
class asdg_MuzzleSlot_762R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		hlc_muzzle_762SUP_AK = 1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

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
	
	#include "NIArms_CfgWeapons.hpp"
};



