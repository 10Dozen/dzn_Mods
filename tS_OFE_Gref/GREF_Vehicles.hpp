// class CfgVehicles
// {
	class Land;
	class Man: Land
	{
		class EventHandlers;
	};
	class CAManBase: Man
	{
		class HitPoints;
	};
	class SoldierGB: CAManBase
	{
		class HitPoints: HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
		};
	};
	
	class rhsgref_nat_base: SoldierGB
	{
		editorPreview = "";
		_generalMacro = "rhsgref_nat_base";
		scope = 0;
		author = "$STR_RHS_AUTHOR_FULL";
		side = 2;
		category = "Men";
		faction = "rhsgref_faction_nationalist";
		vehicleClass = "rhsgref_vehclass_infantry_militia";
		editorSubcategory = "rhsgref_EdSubcat_infantry_militia";
		identityTypes[] = {"LanguageCZ","Head_Euro","rhs_scarf","G_CIVIL_male"};
		genericNames = "RussianMen";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 1.0;
		sensitivity = 3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.0;
		minFireTime = 7;
		canCarryBackPack = 1;
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		modelSides[] = {0,3};
		nakedUniform = "U_BasicBody";
		uniformClass = "rhsgref_uniform_woodland";
		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.2;
		handgunAmmoCoef = 0.1;
		cost = 100000;
		class Wounds
		{
			tex[] = {};
			mat[] = {"rhsgref\addons\rhsgref_infantry\data_gue\saf_gear_m93.rvmat","rhsgref\addons\rhsgref_infantry\data_gue\saf_gear_m93_w1.rvmat","rhsgref\addons\rhsgref_infantry\data_gue\saf_gear_m93_w1.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		selectionbodywound = "body_injury";
		selectionlarmwound = "l_arm_injury";
		selectionlarmwound1 = "l_arm_injury";
		selectionlarmwound2 = "hl";
		selectionllegwound = "l_leg_injury";
		selectionllegwound1 = "l_leg_injury";
		selectionllegwound2 = "hl";
		selectionrarmwound = "r_arm_injury";
		selectionrarmwound1 = "r_arm_injury";
		selectionrarmwound2 = "hl";
		selectionrlegwound = "r_leg_injury";
		selectionrlegwound1 = "r_leg_injury";
		selectionrlegwound2 = "hl";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles: UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
		Items[] = {};
		RespawnItems[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
	};
	
	
	class rhsgref_nat_dpm: rhsgref_nat_base
	{
		_generalMacro = "rhsgref_nat_dpm";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		uniformClass = "rhsgref_uniform_dpm";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_dpm_co.paa"};
	};
	class rhsgref_nat_dpm_olive: rhsgref_nat_base
	{
		_generalMacro = "rhsgref_nat_dpm_olive";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		uniformClass = "rhsgref_uniform_dpm_olive";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_dpm_olive_co.paa"};
	};
	class rhsgref_nat_ERDL: rhsgref_nat_base
	{
		_generalMacro = "rhsgref_nat_ERDL";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		uniformClass = "rhsgref_uniform_ERDL";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_tanoa\m93_erdl_co.paa"};
	};
	class rhsgref_nat_flecktarn: rhsgref_nat_base
	{
		_generalMacro = "rhsgref_nat_uniform_fleck";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		uniformClass = "rhsgref_uniform_flecktarn";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\flecktarn_co.paa"};
	};
	class rhsgref_nat_flecktarn_full: rhsgref_nat_base
	{
		_generalMacro = "rhsgref_uniform_flecktarn_full";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		uniformClass = "rhsgref_uniform_flecktarn_full";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\fleck_full_co.paa"};
	};
	
	// OG-107
	class rhsgref_nat_og107: rhsgref_nat_base
	{
		_generalMacro = "rhsgref_nat_og107";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		uniformClass = "rhsgref_uniform_og107";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_tanoa\m93_og107_co.paa"};
	};
	class rhsgref_nat_og107_erdl: rhsgref_nat_base
	{
		_generalMacro = "rhsgref_nat_og107_erdl";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		uniformClass = "rhsgref_uniform_og107_erdl";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_tanoa\m93_og107_erdl_co.paa"};
	};
	
	
	class rhsgref_nat_tigerstripe: rhsgref_nat_base
	{
		_generalMacro = "rhsgref_nat_tigerstripe";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		uniformClass = "rhsgref_uniform_tigerstripe";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\tigerstripe_co.paa"};
	};
	class rhsgref_nat_olive: rhsgref_nat_base
	{
		_generalMacro = "rhsgref_nat_olive";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		uniformClass = "rhsgref_uniform_olive";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_olive_co.paa"};
	};
	class rhsgref_nat_woodland: rhsgref_nat_base
	{
		_generalMacro = "rhsgref_nat_woodland";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		uniformClass = "rhsgref_uniform_woodland";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_us_woodland_co.paa"};
	};
	class rhsgref_nat_woodland_olive: rhsgref_nat_base
	{
		_generalMacro = "rhsgref_nat_woodland_olive";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		uniformClass = "rhsgref_uniform_woodland_olive";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\m93_us_woodland_olive_co.paa"};
	};
	
// };