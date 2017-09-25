class CfgPatches
{
	class tS_MapGrid_CUPTerrains
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"Chernarus"
			,"CUP_Worlds_Lighting"
			,"CUP_Worlds"
		};
	};
};

#define		TS_GRID_SETTINGS	class Grid: Grid {class Zoom1	{zoomMax = 1e-006;format = "XY";formatX = "00000";formatY = "00000";stepX = 1;stepY = -1;};class Zoom2	{zoomMax = 0.5;format = "XY";formatX = "00";formatY = "00";stepX = 1000;stepY = -1000;};class Zoom3 {zoomMax = 1e+030;format = "XY";formatX = "0";formatY = "0";stepX = 10000;stepY = -10000;};};

class CfgWorlds
{
	class DefaultLighting;
	class DefaultWorld
	{
		class Weather;
	};
	class CAWorld: DefaultWorld
	{
		class Grid;
		class Lighting;
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class Weather: Weather
		{
			class Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
			};
		};
		class WaterExPars;
	};
	
	//	CUP Terrains	
	class Abel: CAWorld 
	{
		TS_GRID_SETTINGS
	};
	class Mountains_ACR: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Woodland_ACR: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Bootcamp_ACR: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Cain: CAWorld
	{
		TS_GRID_SETTINGS
	};	
	class Chernarus: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Chernarus_Summer: Chernarus
	{
		TS_GRID_SETTINGS
	};	
	class Intro: CAWorld
	{
		TS_GRID_SETTINGS
	};	
	class Desert_E: CAWorld
	{
		TS_GRID_SETTINGS
	};		
	class Porto: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Eden: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Desert_Island: CAWorld
	{
		TS_GRID_SETTINGS
	};	
	class Noe: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class ProvingGrounds_PMC: CAWorld
	{
		TS_GRID_SETTINGS
	};	
	class Sara: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class Sara_dbe1: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class SaraLite: CAWorld
	{
		TS_GRID_SETTINGS
	};	
	class Shapur_BAF: CAWorld
	{
		TS_GRID_SETTINGS
	};	
	class Takistan: CAWorld
	{
		TS_GRID_SETTINGS
	};
	class utes: CAWorld
	{
		TS_GRID_SETTINGS
	};	
	class Zargabad: CAWorld
	{
		TS_GRID_SETTINGS
	};
};