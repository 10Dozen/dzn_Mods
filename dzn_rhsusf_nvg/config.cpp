// This is 10Dozen's upgrade to RHS USF

#define _ARMA_

//Class rhs_sounds : config.bin{
class CfgPatches
{
	class dzn_rhsusf_nvg_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_UI_F","rhsusf_c_troops"};
		magazines[] = {};
		ammo[] = {};
		
		version = "V0.1";
		author = "10Dozen";
	};
};

#define		NVG_EMPTY	modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";

class cfgWeapons
{	
	class NVGoggles;
	class rhsusf_ANPVS_14: NVGoggles
	{
		NVG_EMPTY
	};
	class rhsusf_ANPVS_15: rhsusf_ANPVS_14
	{
		NVG_EMPTY
	};
	class rhsusf_Rhino: rhsusf_ANPVS_14
	{
		NVG_EMPTY
	};
	class rhsusf_anvis_nvg_bc_caps: NVGoggles
	{
		NVG_EMPTY
	};
	class rhsusf_ANVIS: NVGoggles
	{
		NVG_EMPTY
	};
	
};