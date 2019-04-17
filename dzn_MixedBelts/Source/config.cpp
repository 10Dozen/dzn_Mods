class CfgPatches
{
	class dzn_MixedBelts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_MAIN","CUP_Weapons_Ammunition"};
		author[] = {"10Dozen"};
		version = "1";
	};
};

class Extended_PreInit_EventHandlers
{
	class dzn_MixedBelts
	{
		init = call compile preprocessFileLineNumbers "\dzn_MixedBelts\init.sqf";
	};
};

class CfgAmmo
{
	class BulletBase;
	class CUP_B_145x115_AP_Green_Tracer: BulletBase
	{
		hit = 31;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 25;
		audibleFire = 25;
		visibleFireTime = 3;
		cost = 22;
		airLock = 1;
		model = "a3\weapons_f\data\bullettracer\tracer_green";
		tracerScale = 1.6;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction=-0.00059041;
		caliber = 1.87;
        ACE_caliber=14.884;
        ACE_bulletLength=50.8;
        ACE_bulletMass=65.448;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.620};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={1000};
        ACE_barrelLengths[]={1346.2};
	};
	class CUP_B_145x115_AP_Red_Tracer: BulletBase
	{
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
		hit = 34;
		indirectHit = 0;
		indirectHitRange = 0;
		warheadName="AP";
		visibleFire = 25;
		audibleFire = 25;
		visibleFireTime = 3;
		cost = 22;
		airLock = 1;
		model = "\a3\weapons_f\data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00077;
		muzzleEffect = "";
		caliber = 2.33;
	};
	class CUP_B_145x115_APHE_Red_Tracer: BulletBase
    {
		SoundSetExplosion[] = {"Shell19mm25mm_Exp_SoundSet"};
    	hit = 37;
        indirectHit = 10;
        indirectHitRange = 1.4;
		warheadName="AP";
        caliber = 2.33;
        visibleFire = 32;
        audibleFire = 32;
        visibleFireTime = 4;
        explosive = 0.6;
        airLock = 1;
        cost = 25;
        CraterEffects = "ExploAmmoCrater";
        explosionEffects = "ExploAmmoExplosion";
        model = "\a3\weapons_f\data\bullettracer\tracer_red";
        tracerScale = 1.8;
        tracerStartTime = 0.1;
        tracerEndTime = 2;
        airFriction = -0.00077;
		muzzleEffect = "";
        whistleDist = 12;
    };
};

class CfgMagazines
{
	class VehicleMagazine;
	class CUP_500Rnd_TE2_Green_Tracer_145x115_KPVT_M: VehicleMagazine
	{
		scope = 2;
		displayName = $STR_DN_KPVT;
		ammo = CUP_B_145x115_AP_Green_Tracer;
		count = 500;
		initSpeed = 1000;
		maxLeadSpeed = 100;
		tracersEvery = 1;
		nameSound = "mgun";
		muzzleImpulseFactor[] = {0.06,0.7};
		
		// Pattern of how ammo loaded into belts: AP-T, AP, AP-T, HE
		dzn_AmmoLoadoutPattern[] = {
			"CUP_B_145x115_AP_Green_Tracer"
			,"CUP_B_145x115_AP_Red_Tracer"
			,"CUP_B_145x115_AP_Green_Tracer"
			,"CUP_B_145x115_APHE_Red_Tracer"
		};
	};
};