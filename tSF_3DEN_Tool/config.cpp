class CfgPatches
{
	class tS_3DEN_Tool
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_MAIN"};
		author[] = {"10Dozen"};
	};
};

class Display3DEN
{
	class Controls
	{
		class MenuStrip: ctrlMenuStrip
		{
			class Items
			{
				#include "Enh_menuStrip_tools.hpp"
				#include "Enh_menuStrip_help.hpp"
			};
		};
	};
	class ContextMenu: ctrlMenu
	{
		class Tools
		{
			items[] +=
			{
				"dzn_tSF_init"
			};
		};
		class dzn_tSF_init
		{
			text = "Init tSF 3DEN Tool";
			action = "[] execVM 'init3den.sqf';";
		};
	};
};
