class CfgPatches
{
	class tS_MapGrid_Lythium
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"ffaa_map_lythium"
		};
	};
};

#define		TS_GRID_SETTINGS	class Grid: Grid {class Zoom1	{zoomMax = 1e-006;format = "XY";formatX = "00000";formatY = "00000";stepX = 1;stepY = -1;};class Zoom2	{zoomMax = 0.5;format = "XY";formatX = "00";formatY = "00";stepX = 1000;stepY = -1000;};class Zoom3 {zoomMax = 1e+030;format = "XY";formatX = "0";formatY = "0";stepX = 10000;stepY = -10000;};};

class CfgWorlds
{	
	class DefaultWorld;
	class CAWorld: DefaultWorld
	{
		class Grid;
	};
	class lythium: CAWorld
	{
		TS_GRID_SETTINGS
	};
};