	class Spec_EAST_soldier_Base: SoldierEB
	{
		scope = 0;
		author = "Yura Esin";
		side = 0;
		faction = "YuE_EAST";
		genericNames = "RussianMen";
		identitytypes[] = {"LanguageRUS","Head_Euro"};
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
		modelSides[] = {6};
		nakedUniform = "U_BasicBody";
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
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Spec_EAST_soldier: Spec_EAST_soldier_Base
	{
		_generalMacro = "Spec_EAST_soldier";
		author = "Yura Esin";
		faction = "YuE_EAST";
		vehicleClass = "YuE_S";
		editorSubcategory = "YuE_EdSubcat_S";
		displayName = "Recon Medic (Sfera)";
		identityTypes[] = {"LanguageRUS","Head_Euro"};
		faceType = "Man_A3";
		genericNames = "RussianMen";
		side = 0;
		scope = 0;
		weapons[] = {"Throw","Put","rhs_weap_aks74un","rhs_weap_makarov_pm"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_aks74un","rhs_weap_makarov_pm"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		Items[] = {"FirstAidKit","rhs_acc_pbs4"};
		respawnItems[] = {"FirstAidKit","rhs_acc_pbs4"};
		engineer = 1;
		class EventHandlers
		{
			init = "(_this select 0) AddPrimaryWeaponItem ""rhs_acc_ekp1"";";
		};
		expansion = 1;
		attendant = 1;
		accuracy = 2.3;
		sensitivity = 3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.6;
		minFireTime = 7;
		cost = 40000;
		canCarryBackPack = 1;
		model = "\Sumrak\Kitel_klp_st_stani.p3d";
		hiddenSelections[] = {"kitel","stani","boots"};
		hiddenSelectionsTextures[] = {"\Sumrak\data\Kitel_kolpak_stanut_Base_Color2.paa","\Sumrak\data\Stani_Base_Color2.paa","\Sumrak\data\Boots_Base_Color2.paa"};
		hiddenSelectionsMaterials[] = {"\Sumrak\data\Kitel_kolpak_stanut.rvmat","\Sumrak\data\Stani.rvmat","\Sumrak\data\Boots.rvmat"};
		modelSides[] = {0,3};
		nakedUniform = "U_BasicBody";
		uniformClass = "Spec_klp_st_EAST_Uniform";
	};
	
	class Spec_EAST_soldier46: Spec_EAST_soldier
	{
		_generalMacro = "Spec_EAST_soldier46";
		author = "Yura Esin";
		faction = "YuE_EAST";
		vehicleClass = "YuE_B";
		editorSubcategory = "YuE_EdSubcat_B";
		displayName = "Recon VAL (Berezka)";
		identityTypes[] = {"LanguageRUS","Head_Euro"};
		side = 0;
		scope = 2;
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		expansion = 1;
		attendant = 1;
		engineer = 1;
		model = "\Sumrak\Kitel_stani.p3d";
		modelSides[] = {0,3};
		nakedUniform = "U_BasicBody";
		uniformClass = "Spec_sumrak_berezka";
		hiddenSelections[] = {"kitel","stani"};
		hiddenSelectionsTextures[] = {"\Sumrak\data\berezka\Kitel.paa","\Sumrak\data\berezka\Stani.paa"};
		hiddenSelectionsMaterials[] = {"\Sumrak\data\berezka\Kitel.rvmat","\Sumrak\data\berezka\Stani.rvmat"};
	};
	class Spec_EAST_soldier37: Spec_EAST_soldier
	{
		_generalMacro = "Spec_EAST_soldier37";
		author = "Yura Esin";
		faction = "YuE_EAST";
		vehicleClass = "YuE_B";
		editorSubcategory = "YuE_EdSubcat_B";
		displayName = "Recon Medic (Berezka)";
		identityTypes[] = {"LanguageRUS","Head_Euro"};
		side = 0;
		scope = 2;
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		Items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		expansion = 1;
		attendant = 1;
		engineer = 1;
		model = "\Sumrak\Kitel_klp_st_stani.p3d";
		modelSides[] = {0,3};
		nakedUniform = "U_BasicBody";
		uniformClass = "Spec_sumrak_berezka_hood2";
		hiddenSelections[] = {"kitel","stani"};
		hiddenSelectionsTextures[] = {"\Sumrak\data\berezka\Kitel_kolpak_stanut.paa","\Sumrak\data\berezka\Stani.paa"};
		hiddenSelectionsMaterials[] = {"\Sumrak\data\berezka\Kitel_kolpak_stanut.rvmat","\Sumrak\data\berezka\Stani.rvmat"};
	};
	class Spec_EAST_soldier40: Spec_EAST_soldier
	{
		_generalMacro = "Spec_EAST_soldier40";
		author = "Yura Esin";
		faction = "YuE_EAST";
		vehicleClass = "YuE_B";
		editorSubcategory = "YuE_EdSubcat_B";
		displayName = "Recon Sniper SVD (Berezka)";
		identityTypes[] = {"LanguageRUS","Head_Euro"};
		side = 0;
		scope = 2;
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemGPS","ItemWatch","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		expansion = 1;
		attendant = 1;
		engineer = 1;
		model = "\Sumrak\Kitel_klp_stani.p3d";
		modelSides[] = {0,3};
		nakedUniform = "U_BasicBody";
		uniformClass = "Spec_sumrak_berezka_hood";
		hiddenSelections[] = {"kitel","stani"};
		hiddenSelectionsTextures[] = {"\Sumrak\data\berezka\Kitel_kolpak.paa","\Sumrak\data\berezka\Stani.paa"};
		hiddenSelectionsMaterials[] = {"\Sumrak\data\berezka\Kitel_kolpak.rvmat","\Sumrak\data\berezka\Stani.rvmat"};
	};