
#define _ARMA_

//Class rhs_sounds : config.bin{
class CfgPatches
{
	class tS_Mag_RHSRF
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_c_weapons"};
		magazines[] = {};
		ammo[] = {};
		
		version = "v0.1";
		author = "10Dozen";
	};
};

#include "tS_Magazines.hpp"

class cfgWeapons
{	
	class Rifle_Base_F;
	
	// AK Series
	class rhs_weap_ak74m_Base_F : Rifle_Base_F tS_MAG_545x39mm
	class rhs_weap_ak74m : rhs_weap_ak74m_Base_F tS_MAG_545x39mm
	class rhs_weap_ak74m_camo : rhs_weap_ak74m tS_MAG_545x39mm
	class rhs_weap_ak74m_npz : rhs_weap_ak74m tS_MAG_545x39mm
	class rhs_weap_ak74m_desert_npz : rhs_weap_ak74m_npz tS_MAG_545x39mm
	class rhs_weap_ak74m_camo_npz : rhs_weap_ak74m_npz tS_MAG_545x39mm
	class rhs_weap_ak74m_folded : rhs_weap_ak74m tS_MAG_545x39mm
	class rhs_weap_ak74m_camo_folded : rhs_weap_ak74m_folded tS_MAG_545x39mm
	class rhs_weap_ak74m_desert_folded : rhs_weap_ak74m_folded tS_MAG_545x39mm
	class rhs_weap_ak74m_plummag_folded : rhs_weap_ak74m_folded tS_MAG_545x39mm
	class rhs_weap_ak74m_gp25_folded : rhs_weap_ak74m_folded tS_MAG_545x39mm
	class rhs_weap_ak74m_2mag : rhs_weap_ak74m tS_MAG_545x39mm
	class rhs_weap_ak74m_2mag_npz : rhs_weap_ak74m_2mag tS_MAG_545x39mm
	class rhs_weap_ak74m_2mag_camo_npz : rhs_weap_ak74m_2mag_npz tS_MAG_545x39mm
	class rhs_weap_ak74m_2mag_camo : rhs_weap_ak74m_2mag tS_MAG_545x39mm
	class rhs_weap_ak74m_desert : rhs_weap_ak74m tS_MAG_545x39mm
	class rhs_weap_ak74m_plummag : rhs_weap_ak74m tS_MAG_545x39mm
	class rhs_weap_ak74m_plummag_npz : rhs_weap_ak74m_npz tS_MAG_545x39mm
	class rhs_weap_ak74m_gp25 : rhs_weap_ak74m tS_MAG_545x39mm
	class rhs_weap_ak74m_gp25_npz : rhs_weap_ak74m_gp25 tS_MAG_545x39mm
	class rhs_weap_ak74 : rhs_weap_ak74m tS_MAG_545x39mm
	class rhs_weap_ak74_gp25 : rhs_weap_ak74m_gp25 tS_MAG_545x39mm
	class rhs_weap_aks74 : rhs_weap_ak74 tS_MAG_545x39mm
	class rhs_weap_aks74u : rhs_weap_aks74 tS_MAG_545x39mm
	
	class rhs_weap_ak105 : rhs_weap_ak74m tS_MAG_545x39mm
	class rhs_weap_ak105_npz : rhs_weap_ak105 tS_MAG_545x39mm
	
	class rhs_weap_akm : rhs_weap_ak74m tS_MAG_762x39mm
	class rhs_weap_akm_gp25 : rhs_weap_akm tS_MAG_762x39mm
	class rhs_weap_akms : rhs_weap_akm tS_MAG_762x39mm
	class rhs_weap_akms_gp25 : rhs_weap_akm tS_MAG_762x39mm
	
	class rhs_weap_ak103_base : rhs_weap_akm tS_MAG_762x39mm
	class rhs_weap_ak103 : rhs_weap_ak103_base tS_MAG_762x39mm
	class rhs_weap_ak104 : rhs_weap_ak103_base tS_MAG_762x39mm
	class rhs_weap_ak104_npz : rhs_weap_ak104 tS_MAG_762x39mm
	class rhs_weap_ak103_npz : rhs_weap_ak103 tS_MAG_762x39mm
	class rhs_weap_ak103_1 : rhs_weap_ak103_base tS_MAG_762x39mm
	class rhs_weap_ak103_2 : rhs_weap_ak103_base tS_MAG_762x39mm
	class rhs_weap_ak103_gp25 : rhs_weap_ak103_base tS_MAG_762x39mm
	class rhs_weap_ak103_gp25_npz : rhs_weap_ak103_base tS_MAG_762x39mm
	
	// UGLs
	class UGL_F;
	class GP25_Base : UGL_F tS_MAG_VOG
};