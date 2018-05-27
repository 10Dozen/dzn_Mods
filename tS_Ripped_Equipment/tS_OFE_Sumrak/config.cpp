class CfgPatches
{
	class tS_OFE_Sumrak
	{
		units[] = {};		
		weapons[] = {
			"Spec_sumrak_berezka"
			,"Spec_sumrak_berezka_hood"
			,"Spec_sumrak_berezka_hood2"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Characters_F"};
		
		version = "v1";
		author = "Yuri Esin & 10Dozen";
	};
};


class DefaultEventHandlers;
class UniformSlotInfo;
class CfgVehicles
{
	class SoldierEB;
	#include "YuE_Vehicles.hpp"
};

class UniformItem;
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	
	#include "YuE_Uniform.hpp"
};