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
	
	class HLC_Optic_G36dualoptic35x: optic_Arco
	{
		dlc = "Niarms_G36";
		author = "Toadie";
		descriptionshort = "Hensoldt-Wetzlar Dual Optic Sight for the G36 Rifle<br />Magnification: 3.5x";
		displayname = "G36 Dual-Optic 3.5x";
		model = "\hlc_wp_G36\mesh\optics\dualoptic3-5x.p3d";
		picture = "\hlc_wp_G36\tex\ui\gear_dualoptic_ca";
		inertia = 0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 7;
			modelOptics = "\hlc_wp_G36\mesh\optics\reticle3-5x2d";
			class OpticsModes
			{
				class Snip
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
				class Iron: Snip
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
			};
		};
		tmr_optics_enhanced = 0;
	};
	class HLC_Optic_G36dualoptic35x2d: HLC_Optic_G36dualoptic35x
	{
		dlc = "Niarms_G36";
		author = "Toadie";
		displayname = "G36 Dual-Optic 3.5x(2D)";
		inertia = 0;
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					useModelOptics = 1;
				};
				class Iron: Iron{};
			};
		};
	};
	class HLC_Optic_G36Export35x: HLC_Optic_G36dualoptic35x
	{
		author = "Toadie";
		descriptionshort = "Hensoldt-Wetzlar Optic Sight for the G36 Rifle(Export Variant)<br />Magnification: 3.5x";
		displayname = "G36 Export Optic 3.5x";
		model = "\hlc_wp_G36\mesh\optics\Export3-5x.p3d";
		picture = "\hlc_wp_G36\tex\ui\gear_exportoptic_ca";
	};
	class HLC_Optic_G36Export35x2d: HLC_Optic_G36Export35x
	{
		dlc = "Niarms_G36";
		author = "Toadie";
		displayname = "G36 Export Optic 3.5x(2D)";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					useModelOptics = 1;
				};
				class Iron: Iron{};
			};
		};
	};
	class HLC_Optic_G36Dualoptic15x: HLC_Optic_G36dualoptic35x
	{
		dlc = "Niarms_G36";
		author = "Toadie";
		displayname = "G36 Dual-Optic 1.5x";
		descriptionshort = "Hensoldt-Wetzlar Dual Optic Sight for the G36 Rifle<br />Magnification: 1.5x";
		model = "\hlc_wp_G36\mesh\optics\dualoptic1-5x.p3d";
		picture = "\hlc_wp_G36\tex\ui\gear_dualoptic_ca";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 7;
			modelOptics = "\hlc_wp_G36\mesh\optics\reticle1-5x2d";
			class OpticsModes
			{
				class Snip
				{
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.166;
					opticsZoomMax = 0.166;
					opticsZoomInit = 0.166;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					memorypointcamera = "eye";
					opticsid = 2;
					visionmode[] = {"Normal"};
				};
				class Iron: Snip
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
			};
		};
	};
	class HLC_Optic_G36Dualoptic15x2d: HLC_Optic_G36Dualoptic15x
	{
		dlc = "Niarms_G36";
		author = "Toadie";
		descriptionshort = "Hensoldt-Wetzlar Dual Optic Sight for the G36 Rifle<br />Magnification: 1.5x";
		displayname = "G36 Dual-Optic 1.5x(2D)";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					useModelOptics = 1;
				};
				class Iron: Iron{};
			};
		};
	};
	class HLC_Optic_G36Export15x: HLC_Optic_G36dualoptic15x
	{
		dlc = "Niarms_G36";
		author = "Toadie";
		descriptionshort = "Hensoldt-Wetzlar Optic Sight for the G36 Rifle(Export Variant)<br />Magnification: 1.5x";
		displayname = "G36 Export Optic 1.5x";
		model = "\hlc_wp_G36\mesh\optics\Export1-5xy.p3d";
		picture = "\hlc_wp_G36\tex\ui\gear_exportoptic_ca";
	};
	class HLC_Optic_G36Export15x2d: HLC_Optic_G36Export15x
	{
		dlc = "Niarms_G36";
		author = "Toadie";
		descriptionshort = "Hensoldt-Wetzlar Optic Sight for the G36 Rifle(Export Variant)<br />Magnification: 1.5x";
		displayname = "G36 Export Optic 1.5x(2D)";
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					useModelOptics = 1;
				};
				class Iron: Iron{};
			};
		};
	};
	class ItemCore;
	class InventoryUnderItem_Base_F;
	class HLC_Bipod_G36: ItemCore
	{
		scope = 2;
		displayName = "G36 Bipod";
		picture = "\A3\Weapons_F_Mark\Data\UI\gear_accu_bipod_01_snd_CA.paa";
		model = "hlc_wp_g36\mesh\acc\MG_Bipod.p3d";
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot = "bipod";
			hasBipod = 1;
			mass = 10;
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down","db-3",1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up","db-3",1,20};
		};
		inertia = 0.02;
	};