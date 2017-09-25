class CfgPatches
{
	class tS_MapGrid_SMDSahrani
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"smd_sahrani_a3"
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
	
	
	// Sahrani + fixed sky
	class smd_sahrani_a3: CAWorld
	{
		TS_GRID_SETTINGS
		delete Lighting;
		class DayLightingBrightAlmost: DayLightingBrightAlmost
		{
			delete deepNight;
			delete fullNight;
			delete sunMoon;
			delete earlySun;
			delete sunrise;
			delete earlyMorning;
			delete midMorning;
			delete morning;
			delete noon;
		};
		class DayLightingRainy: DayLightingRainy
		{
			delete deepNight;
			delete fullNight;
			delete sunMoon;
			delete earlySun;
			delete earlyMorning;
			delete morning;
			delete lateMorning;
			delete noon;
		};
		delete Weather;
	};
	
};