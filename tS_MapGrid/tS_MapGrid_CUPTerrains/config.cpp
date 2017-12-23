class CfgPatches
{
	class tS_MapGrid_CUPTerrains
	{
		units[] = {};
		weapons[] = {};
		version = "2";
		author = "10Dozen";
		requiredVersion = 0.1;
		requiredAddons[] = {
			"CUP_Afghan_Config"
			, "Mountains_ACR"			
			, "CUP_Bohemia_Config"
			, "Woodland_ACR"			
			, "CUP_Bootcamp_acr_Config"
			, "Bootcamp_ACR"			
			, "CUP_Chernarus_Config"
			, "Chernarus"			
			, "CUP_Chernarus_Summer_Config"
			, "Chernarus_Summer"			
			, "CUP_Desert_Config"
			, "Desert"			
			, "CUP_Desert_e_Config"
			, "Desert_E"			
			, "CUP_Desert2_Config"
			, "Porto"			
			, "CUP_Sara_Config"
			, "Sara"			
			, "CUP_Sara_dbe1_Config"
			, "Sara_dbe1"			
			, "CUP_Saralite_Config"
			, "SaraLite"			
			, "CUP_Shapur_baf_Config"
			, "Shapur_BAF"			
			, "CUP_Takistan_Config"
			, "Takistan"			
			, "CUP_Utes_Config"
			, "Utes"			
			, "CUP_Zargabad_Config"
			, "zargabad"
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
	class porto: CAWorld
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