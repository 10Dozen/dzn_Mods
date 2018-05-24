
#define ARMOR_NIJ_1	8
#define ARMOR_NIJ_2	12
#define ARMOR_NIJ_3	22
#define ARMOR_NIJ_4	28

#define PASS_NIJ_1 	0.5
#define PASS_NIJ_2 	0.4
#define PASS_NIJ_3 	0.2
#define PASS_NIJ_4 	0.1

#define ARMOR_GOST_1	8
#define ARMOR_GOST_2	12
#define ARMOR_GOST_3	16
#define ARMOR_GOST_4	22
#define ARMOR_GOST_5	25
#define ARMOR_GOST_6	28

#define PASS_GOST_1 	0.5
#define PASS_GOST_2 	0.4
#define PASS_GOST_3 	0.3
#define PASS_GOST_4 	0.3
#define PASS_GOST_5 	0.2
#define PASS_GOST_6 	0.1


//GREF 6b5 Vests
	class rhs_6b5_khaki: rhs_6b23
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_NAME";
		picture = "\rhsafrf\addons\rhs_infantry2\inventory\gear_icon_6b13_ca.paa";
		model = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_rifleman";
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_co.paa"};
		descriptionShort = "Armor Level 6";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_rifleman";
			containerClass = "Supply70";
			mass = 132;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 8;
					PassThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class rhs_6b5_officer_khaki: rhs_6b5_khaki
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_OFFICER_NAME";
		model = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_officer";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_officer";
			containerClass = "Supply110";
			mass = 142;
		};
	};
	class rhs_6b5_medic_khaki: rhs_6b5_khaki
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_MEDIC_NAME";
		model = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_medic";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_medic";
			containerClass = "Supply130";
			mass = 152;
		};
	};
	class rhs_6b5_sniper_khaki: rhs_6b5_khaki
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_SNIPER_NAME";
		model = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_sniper";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_sniper";
			containerClass = "Supply90";
			mass = 137;
		};
	};
	class rhs_6b5_rifleman_khaki: rhs_6b5_khaki
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_RIFLEMAN_NAME";
		model = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_6sh46_rifleman";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_6sh46_rifleman";
			containerClass = "Supply120";
			mass = 147;
		};
	};

	
// GREF ALICE Webbing
	class rhsgref_alice_webbing: rhs_6b23
	{
		Scope = 2;
		dlc = "RHS_GREF";
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "ALICE Webbing";
		picture = "\rhsgref\addons\rhsgref_infantry\data_cdf\gear_icon_alice_webbing.paa";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		model = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_alice_webbing";
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_alice_webbing";
			containerClass = "Supply120";
			mass = 25;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};	
	

	
/*
	class rhs_6b5_officer: rhs_6b5
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_OFFICER_OLIVE_NAME";
		model = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_officer";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_officer";
			containerClass = "Supply110";
			mass = 142;
		};
	};
	class rhs_6b5_medic: rhs_6b5
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_MEDIC_OLIVE_NAME";
		model = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_medic";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_medic";
			containerClass = "Supply130";
			mass = 152;
		};
	};
	class rhs_6b5_sniper: rhs_6b5
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_SNIPER_OLIVE_NAME";
		model = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_sniper";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_sniper";
			containerClass = "Supply90";
			mass = 137;
		};
	};
	class rhs_6b5_rifleman: rhs_6b5
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_RIFLEMAN_OLIVE_NAME";
		model = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_6sh46_rifleman";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_cdf\vests\rhs_6b5_6sh46_rifleman";
			containerClass = "Supply120";
			mass = 147;
		};
	};
	
	
	class rhs_6b5_khaki: rhs_6b5
	{
		Scope = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_NAME";
		picture = "\rhsafrf\addons\rhs_infantry2\inventory\gear_icon_6b13_ca.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_khaki_co.paa"};
	};
	class rhs_6b5_officer_khaki: rhs_6b5_officer
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_OFFICER_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_khaki_co.paa"};
	};
	class rhs_6b5_medic_khaki: rhs_6b5_medic
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_MEDIC_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_khaki_co.paa"};
	};
	class rhs_6b5_sniper_khaki: rhs_6b5_sniper
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_SNIPER_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_khaki_co.paa"};
	};
	class rhs_6b5_rifleman_khaki: rhs_6b5_rifleman
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_RIFLEMAN_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_khaki_co.paa"};
	};
	class rhs_6b5_vsr: rhs_6b5
	{
		Scope = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_VSR_NAME";
		picture = "\rhsafrf\addons\rhs_infantry2\inventory\gear_icon_6b13_ca.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_vsr_co.paa"};
	};
	class rhs_6b5_officer_vsr: rhs_6b5_officer
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_OFFICER_VSR_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_vsr_co.paa"};
	};
	class rhs_6b5_medic_vsr: rhs_6b5_medic
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_MEDIC_VSR_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_vsr_co.paa"};
	};
	class rhs_6b5_sniper_vsr: rhs_6b5_sniper
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_SNIPER_VSR_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_vsr_co.paa"};
	};
	class rhs_6b5_rifleman_vsr: rhs_6b5_rifleman
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_RIFLEMAN_VSR_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_vsr_co.paa"};
	};
	class rhs_6b5_ttsko: rhs_6b5
	{
		Scope = 2;
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_TTsKO_NAME";
		picture = "\rhsafrf\addons\rhs_infantry2\inventory\gear_icon_6b13_ca.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_ttsko_co.paa"};
	};
	class rhs_6b5_officer_ttsko: rhs_6b5_officer
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_OFFICER_TTsKO_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_ttsko_co.paa"};
	};
	class rhs_6b5_medic_ttsko: rhs_6b5_medic
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_MEDIC_TTsKO_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_ttsko_co.paa"};
	};
	class rhs_6b5_sniper_ttsko: rhs_6b5_sniper
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_SNIPER_TTsKO_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_ttsko_co.paa"};
	};
	class rhs_6b5_rifleman_ttsko: rhs_6b5_rifleman
	{
		author = "$STR_RHS_AUTHOR_FULL";
		displayName = "$STR_RHSGREF_6B5_RIFLEMAN_TTsKO_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b5_ttsko_co.paa"};
	};
	*/