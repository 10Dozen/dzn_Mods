class CfgPatches
{
	class tS_MapGrid_CUPTerrains_CWA
	{
		units[] = {};
		weapons[] = {};
		version = "1";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"CUP_Terrains_Abel"
			,"CUP_Terrains_Cain"
			,"CUP_Terrains_Eden"
			,"CUP_Terrains_Noe"
			,"CUP_Intro_Config"
		};
	};
};

#define		TS_GRID_SETTINGS	class Grid: Grid {class Zoom1	{zoomMax = 1e-006;format = "XY";formatX = "00000";formatY = "00000";stepX = 1;stepY = -1;};class Zoom2	{zoomMax = 0.5;format = "XY";formatX = "00";formatY = "00";stepX = 1000;stepY = -1000;};class Zoom3 {zoomMax = 1e+030;format = "XY";formatX = "0";formatY = "0";stepX = 10000;stepY = -10000;};};

class CfgWorlds
{
	class DefaultLighting;
	class DefaultWorld;
	class CAWorld: DefaultWorld
	{
		class Grid;
	};
	
	//	CUP Terrains	
	class Abel: CAWorld 
	{
		TS_GRID_SETTINGS
	};
	class Eden: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Cain: CAWorld
	{
		TS_GRID_SETTINGS
	};	
	class Noe: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Desert_Island: CAWorld
	{
		TS_GRID_SETTINGS
	};	
};