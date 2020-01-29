class CfgPatches
{
	class tS_ACE_Medical
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Data_F_Enoch_Loadorder",
			"A3_Data_F_Mod_Loadorder",
			"CBA_MAIN", 
			"ace_medical",
			"ace_medical_feedback",
			"ace_medical_treatment"
		};
		version = "v2"
		author[] = {"10Dozen"};
	};
};

#define NO_REOPENING reopeningChance = 0
#define W_MINOR(X) X##Minor
#define W_MEDIUM(X) X##Medium
#define DISABLE_REOPENING_MIN_MED(X) class X; \
 class W_MINOR(X): X { NO_REOPENING; }; \
 class W_MEDIUM(X): X { NO_REOPENING; }
 
#define DISABLE_FOR_WOUNDS(A,B,C,D,E,F,G) DISABLE_REOPENING_MIN_MED(A); \
 DISABLE_REOPENING_MIN_MED(B); \
 DISABLE_REOPENING_MIN_MED(C); \
 DISABLE_REOPENING_MIN_MED(D); \
 DISABLE_REOPENING_MIN_MED(E); \
 DISABLE_REOPENING_MIN_MED(F); \
 DISABLE_REOPENING_MIN_MED(G);
 
#define DISABLE_WOUNDS_REOPENING \
 DISABLE_REOPENING_MIN_MED(Abrasion); \
 DISABLE_REOPENING_MIN_MED(Avulsion); \
 DISABLE_REOPENING_MIN_MED(Contusion); \
 DISABLE_REOPENING_MIN_MED(Crush); \
 DISABLE_REOPENING_MIN_MED(Cut); \
 DISABLE_REOPENING_MIN_MED(Laceration); \
 DISABLE_REOPENING_MIN_MED(VelocityWound); \
 DISABLE_REOPENING_MIN_MED(PunctureWound);
 
class ACE_Medical_Treatment {
	class Bandaging {
		class FieldDressing {
			DISABLE_WOUNDS_REOPENING
		};
		
		class PackingBandage: fieldDressing {
			DISABLE_WOUNDS_REOPENING
		};
		
		class ElasticBandage: fieldDressing {
			DISABLE_WOUNDS_REOPENING
		};
		
		class QuikClot: fieldDressing {
			DISABLE_WOUNDS_REOPENING
		};
	};
};

class Extended_PostInit_EventHandlers
{
	class tS_ACE_Medical
	{
		init = call compile preprocessFileLineNumbers "\tS_ACE_Medical\Init.sqf";
	};
};


class RscPictureKeepAspect;
class RscInGameUI {
	class RscStanceInfo {
		idd = 303;
		scriptName = "RscStanceInfo";
		scriptPath = "IGUI";
		onLoad = "['onLoad', _this, 'RscStanceInfo', 'IGUI'] call (uiNamespace getVariable 'BIS_fnc_initDisplay')";
		onUnload = "['onUnload', _this, 'RscStanceInfo', 'IGUI'] call (uiNamespace getVariable 'BIS_fnc_initDisplay')";
		controls[] += { "BloodVolumeInfoControlGroup" };
		
		class BloodVolumeInfoControlGroup: RscPictureKeepAspect {
			idc = 205;
			onLoad = "uiNamespace setVariable ['BloodVolumeInfoControlGroup', _this select 0]";
			text = "";
			x = "(profilenamespace getVariable ['IGUI_GRID_STANCE_X', ((safezoneX + safezoneW) - (3.7 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "(profilenamespace getVariable ['IGUI_GRID_STANCE_Y', (safezoneY + 0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "(3.7 * (((safezoneW / safezoneH) min 1.2) / 40)) / 4";
			h = "(3.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)) / 4";
		}
	};
};