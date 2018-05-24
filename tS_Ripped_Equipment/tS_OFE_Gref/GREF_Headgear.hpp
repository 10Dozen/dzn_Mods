

class rhsgref_un_beret : ItemCore
{
	dlc = "RHS_GREF";

	scope = 2;
	scopeCurator = 2;

	author = "RHS GREF Team";

	displayName = "Beret (UN)";
	weaponPoolAvailable = 1;
	picture = "\rhsgref\addons\rhsgref_infantry\gear_cdf\head\gear_icon_beret_UN_ca.paa";
	model = "\rhsgref\addons\rhsgref_infantry\gear_cdf\head\gref_UN_Beret";

	class ItemInfo : HeadGearItem {
		mass = 10;
		allowedSlots[] = {801, 901, 701, 605};
		uniformModel = "\rhsgref\addons\rhsgref_infantry\gear_cdf\head\gref_UN_Beret";
		modelSides[] = {6};
	};
};

class rhsgref_M56 : H_HelmetB
{
	scope = 2;

	author = "RHS GREF Team";
	allowedFacewear[] = {"rhs_scarf","G_Aviator"};
	displayName = "M56";
	picture = "\rhsgref\addons\rhsgref_infantry\gear\head\gear_icon_m56_ca.paa";

	model = "\rhsgref\addons\rhsgref_infantry\gear\head\m56";

	hidddenSelections[] = {"Camo2"};
	//hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\ssh68_cloth_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo2"};
		mass = 40;
		uniformModel = "\rhsgref\addons\rhsgref_infantry\gear\head\m56";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {3,1};

		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 2;
				passThrough = 0.5;
			};
		};
	};
};

//TANOA M1s

class rhsgref_helmet_M1_bare : H_HelmetB
{
	author = "RHS GREF Team";
	displayName = "M1 (OG-107)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapdown";
	picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_m1_helmet_od_ca.paa";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\M1_co.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapdown";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 2;
				passThrough = 0.5;
			};
		};
	};
};

class rhsgref_helmet_M1_bare_alt01 : rhsgref_helmet_M1_bare
{
	author = "RHS GREF Team";
	displayName = "M1 (OG-107/Alt.)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapup";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\M1_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapup";
	};
};

//PAINTED TANOA M1s

class rhsgref_helmet_M1_painted : rhsgref_helmet_M1_bare
{
	author = "RHS GREF Team";
	displayName = "M1 (Painted)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapdown";
	picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_m1_helmet_painted_ca.paa";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\M1_painted_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapdown";
	};
};

class rhsgref_helmet_M1_painted_alt01 : rhsgref_helmet_M1_bare
{
	author = "RHS GREF Team";
	displayName = "M1 (Painted/Alt.)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapup";
	picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_m1_helmet_painted_ca.paa";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\M1_painted_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapup";
	};
};

class rhsgref_helmet_M1_vine : rhsgref_helmet_M1_bare_alt01
{	
	displayName = "M1 (Vine Leaf)";
	picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_m1_helmet_painted_ca.paa";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\M1_vine_co.paa"};
};

// PASGT
class rhsgref_helmet_pasgt_flecktarn : H_HelmetB
{
	author = "RHS GREF Team";
	displayName = "PASGT (Flecktarn)";  //plz stringtable
	scope = 2;
	
	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
	picture = "\rhsgref\addons\rhsgref_infantry\data_gue\gear_icon_pasgt_helmet_flecktarn_ca.paa";
	
	hiddenSelections[] = {"Camo"};	
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_gue\pasgt_helmet_flecktarn_co.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet_rhino";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};		
	};
};

class rhsgref_helmet_pasgt_un : rhsgref_helmet_pasgt_flecktarn
{
	author = "RHS GREF Team";
	displayName = "PASGT (UN)";  //plz stringtable
	scope = 2;
	picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_un_ca.paa";
	
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\pasgt_helmet_un_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
	};
};

class rhsgref_helmet_pasgt_olive : rhsgref_helmet_pasgt_flecktarn
{
	author = "RHS GREF Team";
	displayName = "PASGT (Olive)";  //plz stringtable
	scope = 2;
	picture = "\rhsgref\addons\rhsgref_infantry\data_tanoa\gear_icon_pasgt_helmet_olive_ca.paa";
	
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\pasgt_helmet_olive_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
	};
};


