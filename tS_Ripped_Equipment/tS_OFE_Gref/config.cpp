class CfgPatches
{
	class tS_OFE_GREF
	{
		units[] = {
			"rhsgref_nat_dpm"
			,"rhsgref_nat_dpm_olive"
			,"rhsgref_nat_ERDL"
			,"rhsgref_nat_flecktarn"
			,"rhsgref_nat_flecktarn_full"
			,"rhsgref_nat_og107"
			,"rhsgref_nat_og107_erdl"
			,"rhsgref_nat_tigerstripe"
			,"rhsgref_nat_olive"
			,"rhsgref_nat_woodland"
			,"rhsgref_nat_woodland_olive"
			,"rhsgref_uniform_gray"
		};
		weapons[] = {
			"rhsgref_un_beret"
			,"rhsgref_M56"
			,"rhsgref_helmet_M1_bare"
			,"rhsgref_helmet_M1_bare_alt01"
			,"rhsgref_helmet_M1_painted"
			,"rhsgref_helmet_M1_painted_alt01"
			,"rhsgref_helmet_M1_vine"
			,"rhsgref_helmet_pasgt_flecktarn"
			,"rhsgref_helmet_pasgt_un"
			,"rhsgref_helmet_pasgt_olive"
			
			,"rhsgref_uniform_olive"
			,"rhsgref_uniform_dpm"
			,"rhsgref_uniform_dpm_olive"
			,"rhsgref_uniform_ERDL"
			,"rhsgref_uniform_og107"
			,"rhsgref_uniform_og107_erdl"
			,"rhsgref_uniform_woodland"
			,"rhsgref_uniform_woodland_olive"
			,"rhsgref_uniform_flecktarn"
			,"rhsgref_uniform_flecktarn_full"
			,"rhsgref_uniform_tigerstripe"
			
			,"rhs_6b5_khaki"
			,"rhs_6b5_officer_khaki"
			,"rhs_6b5_medic_khaki"
			,"rhs_6b5_sniper_khaki"
			,"rhs_6b5_rifleman_khaki"
			,"rhsgref_alice_webbing"
		};
		
		
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Characters_F"};
		
		version = "v1";
		author = "RHS Team & 10Dozen";
	};
};


class DefaultEventHandlers;
class UniformSlotInfo;
class CfgVehicles
{
	
	#include "GREF_Vehicles.hpp"
};

class UniformItem;
class cfgWeapons
{
	class Uniform_Base;
	class ItemCore;
	class Vest_Camo_Base;
	class rhs_6b23: Vest_Camo_Base
	{
		class ItemInfo;
	};
	class HeadGearItem;
	class H_HelmetB : ItemCore {
		class ItemInfo;
	};
	
	#include "GREF_Uniform.hpp"
	#include "GREF_Vest.hpp"
	#include "GREF_Headgear.hpp"
};