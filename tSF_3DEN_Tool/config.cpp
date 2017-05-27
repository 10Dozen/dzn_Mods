class CfgPatches
{
	class tS_3DEN_Tool
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"3den"};
		author[] = {"10Dozen"};
	};
};

class Cfg3DEN
{
	class EventHandlers
	{
		class dzn_3DENTool
		{
			onTerrainNew = "if !(isNil { preProcessFileLineNumbers 'init3DEN.sqf' }) then { [] execVM 'init3den.sqf'; }";
			onMissionPreviewEnd = "if !(isNil { preProcessFileLineNumbers 'init3DEN.sqf' }) then { [] execVM 'init3den.sqf'; }";
		};
	};
};
