class cfgRecoils
{
	class Default;
	class RH_recoil_default: Default
	{
		muzzleOuter[] = {0.3,1,0.3,0.2};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {0.03,0.06};
		permanent = 0.1;
		temporary = 0.01;
	};
	class RH_recoil_M4: RH_recoil_default
	{
		muzzleOuter[] = {0.3,1,0.4,0.3};
		kickBack[] = {0.02,0.04};
		temporary = 0.01;
	};
	class RH_recoil_M16: RH_recoil_default
	{
		muzzleOuter[] = {0.3,0.8,0.4,0.3};
		kickBack[] = {0.02,0.04};
		temporary = 0.01;
	};
	RH_AR10_Recoil[] = {0,0.009,0.017,0.02,0.009,0.017,0.03,0.007,0.023,0.16,0,0};
	RH_AR10_RecoilProne[] = {0,0.007,0.01,0.013,0.007,0.01,0.03,0.003,0,0.12,0,0};
	RH_M4_Recoil[] = {0,0.005,0.005,0.005,0.01,0.011,0.09,0.005,-0.0004,0.13,0,0};
	RH_M4_RecoilProne[] = {0,0.005,0.005,0.005,0.01,0.009,0.075,0.005,-0.0003,0.13,0,0};
	RH_M4_Recoil_Auto[] = {0,0.007,0.015,0.007,0.01,0.022,0.09,0.02,0.01,0.13,0,0};
	RH_M4_RecoilProneAuto[] = {0,0.005,0.005,0.005,0.01,0.009,0.075,0.005,-0.0003,0.13,0,0};
	RH_M4_Recoil_GLRecoil[] = {0,0.005,0,0.01,0.005,0,0.02,0.003,0.006,0.12,0,0};
	RH_M203GLBase[] = {0,0.03,0.05,0.13,0.01,-0.001,0.26,0,0};
};

class CfgCloudlets
{
	class Default;
	class RH_Rifle556Cartridge: Default
	{
		interval = 0.0595;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\weapons_f\ammo\cartridge.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 0.75;
		lifeTime = 20;
		moveVelocity[] = {"-directionX * 4","- directionY * 4","- directionZ * 4"};
		rotationVelocity = 1;
		weight = 6;
		volume = 1;
		rubbing = 0;
		size[] = {1.1};
		color[] = {{0.9,0.9,0.9,1}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		bounceOnSurface = 0.25;
		bounceOnSurfaceVar = 0.2;
		blockAIVisibility = 0;
		sizeCoef = 1;
		colorCoef[] = {1,1,1,1};
		animationSpeedCoef = 1;
		position[] = {"positionX","positionY","positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.25,0.25,0.25};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RH_RifleAmmoCloud: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.45;
		moveVelocity[] = {"-0.15*directionX","-0.15*directionY","-0.15*directionZ"};
		rotationVelocity = 1;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {0.25,0.5};
		color[] = {{0.1,0.1,0.1,0.3},{0.1,0.1,0.1,0.15},{0.1,0.1,0.1,0.06},{0.1,0.1,0.1,0.01}};
		animationSpeed[] = {1.2};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.08;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.2;
		colorCoef[] = {1,1,1,0.6};
		animationSpeedCoef = 1;
		position[] = {"positionX","positionY","positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.03,0.03,0.03};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RH_RifleSmokeTrail: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1.1;
		lifeTime = 2.5;
		moveVelocity[] = {"-0.15*directionX","-0.15*directionY","-0.15*directionZ"};
		rotationVelocity = 1;
		weight = 0.05;
		volume = 0.5;
		rubbing = 0.1;
		size[] = {0.3,0.5};
		color[] = {{0.06,0.06,0.06,0.32},{0.3,0.3,0.3,0.28},{0.3,0.3,0.3,0.25},{0.3,0.3,0.3,0.22},{0.3,0.3,0.3,0.1}};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {2,1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.08;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.1;
		animationSpeedCoef = 1;
		position[] = {"positionX","positionY","positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.03,0.03,0.03};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};

class RH_Rifle556Cartridge
{
	class RH_Rifle556Cartridge
	{
		simulation = "particles";
		type = "RH_Rifle556Cartridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};

class RH_RifleAmmoCloud
{
	class RH_RifleAmmoCloud
	{
		simulation = "particles";
		type = "RH_RifleAmmoCloud";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};

class RH_RifleSmokeTrail
{
	class RH_RifleSmokeTrail
	{
		simulation = "particles";
		type = "RH_RifleSmokeTrail";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};