class CfgPatches
{
	class tS_ACE_Smoke
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_MAIN"};
		author[] = {"10Dozen"};
	};
};

class CfgAmmo
{
	class GrenadeHand;
	class SmokeShell: GrenadeHand
	{
		smokeColor[] = {1,1,1,1};
		timeToLive = 90;
	};
	class SmokeShellRed: SmokeShell
	{
		smokeColor[] = {0.9528,0.0438,0.041,0.8};
		timeToLive = 60;
	};
	class SmokeShellGreen: SmokeShell
	{
		smokeColor[] = {0.0328,0.1626,0.1023,0.8};
		timeToLive = 60;
	};
	class SmokeShellYellow: SmokeShell
	{
		smokeColor[] = {0.961,0.4505,0.0109,0.8};
		timeToLive = 60;
	};
	class SmokeShellPurple: SmokeShell
	{
		smokeColor[] = {0.4622,0.0578,0.3154,0.8};
		timeToLive = 60;
	};
	class SmokeShellBlue: SmokeShell
	{
		smokeColor[] = {0.0355,0.1863,1.0,0.8};
		timeToLive = 60;
	};
	class SmokeShellOrange: SmokeShell
	{
		smokeColor[] = {0.9132,0.1763,0.007,0.8};
		timeToLive = 60;
	};
	class G_40mm_Smoke: SmokeShell
	{
		smokeColor[] = {1,1,1,1};
		timeToLive = 40;
	};
	class G_40mm_SmokeRed: G_40mm_Smoke
	{
		smokeColor[] = {0.9528,0.0438,0.041,0.8};
		timeToLive = 40;
	};
	class G_40mm_SmokeGreen: G_40mm_Smoke
	{
		smokeColor[] = {0.0328,0.1626,0.1023,0.8};
		timeToLive = 40;
	};
	class G_40mm_SmokeYellow: G_40mm_Smoke
	{
		smokeColor[] = {0.961,0.4505,0.0109,0.8};
		timeToLive = 40;
	};
	class G_40mm_SmokePurple: G_40mm_Smoke
	{
		smokeColor[] = {0.4622,0.0578,0.3154,0.8};
		timeToLive = 40;
	};
	class G_40mm_SmokeBlue: G_40mm_Smoke
	{
		smokeColor[] = {0.0355,0.1863,1.0,0.8};
		timeToLive = 40;
	};
	class G_40mm_SmokeOrange: G_40mm_Smoke
	{
		smokeColor[] = {0.9132,0.1763,0.007,0.8};
		timeToLive = 40;
	};
	class SmokeShellArty: SmokeShell
	{
		explosionTime = 0.1;
		effectsSmoke = "ACE_ArtillerySmoke";
	};
	class SubmunitionBase;
	class Smoke_120mm_AMOS_White: SubmunitionBase
	{
		submunitionConeAngle = 10;
	};
};
class CfgCloudlets
{
	class Default;
	class ACE_SmokeBaseLarge: Default
	{
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\z\ace\addons\particles\data\smoke.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 15;
		lifeTimeVar = 1;
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 1;
		randomDirectionPeriodVar = 0;
		randomDirectionIntensity = 0.15;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -8;
		positionVar[] = {0,0,0};
		colorVar[] = {0,0,0,0};
		color[] = {{0.5,0.5,0.5,0.7},{0.5,0.5,0.5,0.5},{0.5,0.5,0.5,0.2},{0.5,0.5,0.5,0.2},{0.5,0.5,0.5,0.1},{0.5,0.5,0.5,0}};
		size[] = {0.05,4,12,16};
		sizeVar = 0.5;
		weight = 1.275;
		moveVelocity[] = {0,0,0};
		moveVelocityVar[] = {0.1,0.1,0.1};
		rotationVelocity = 0;
		rotationVelocityVar = 20;
		volume = 1;
		rubbing = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 1;		
	};
	class ACE_SmokeBaseMedium: ACE_SmokeBaseLarge
	{
		destroyOnWaterSurfaceOffset = -6;
		size[] = {0.05,3,9,12};
	};
	class ACE_SmokeBaseSmall: ACE_SmokeBaseLarge
	{
		destroyOnWaterSurfaceOffset = -4;
		size[] = {0.05,2,6,8};
	};
	class ACE_SmokeBase40mm: ACE_SmokeBaseLarge
	{
		destroyOnWaterSurfaceOffset = -5;
		lifeTime = 15;
		size[] = {0.05,2.5,7.5,10};
	};
	class ACE_SmokeBaseArtilleryLarge: ACE_SmokeBaseLarge
	{
		randomDirectionIntensity = 0.08;
		color[] = {{0.5,0.5,0.5,1},{0.5,0.5,0.5,0.7},{0.5,0.5,0.5,0.5},{0.5,0.5,0.5,0.5},{0.5,0.5,0.5,0.1},{0.5,0.5,0.5,0}};
		lifeTime = 45;
	};
	class ACE_SmokeBaseArtillerySmall: ACE_SmokeBaseSmall
	{
		randomDirectionIntensity = 0.08;
		color[] = {{0.5,0.5,0.5,1},{0.5,0.5,0.5,0.7},{0.5,0.5,0.5,0.5},{0.5,0.5,0.5,0.5},{0.5,0.5,0.5,0.1},{0.5,0.5,0.5,0}};
		lifeTime = 45;
	};
	class ACE_SmokeAfterWaterWhite: ACE_SmokeBaseLarge
	{
		interval = 0.05;
		destroyOnWaterSurfaceOffset = -3;
		size[] = {0.05,2,6};
		sizeVar = 1;
		lifeTime = 10;
		color[] = {{0.5,0.5,0.5,0.1},{0.5,0.5,0.5,0}};
		moveVelocityVar[] = {0,0,0};
		colorCoef[] = {1,1,1,1};
	};
	class ACE_SmokeAfterWaterRed: ACE_SmokeAfterWaterWhite
	{
		colorCoef[] = {0.9528,0.0438,0.041,0.8};
	};
	class ACE_SmokeAfterWaterGreen: ACE_SmokeAfterWaterWhite
	{
		colorCoef[] = {0.0328,0.1626,0.1023,0.8};
	};
	class ACE_SmokeAfterWaterYellow: ACE_SmokeAfterWaterWhite
	{
		colorCoef[] = {0.961,0.4505,0.0109,0.8};
	};
	class ACE_SmokeAfterWaterPurple: ACE_SmokeAfterWaterWhite
	{
		colorCoef[] = {0.4622,0.0578,0.3154,0.8};
	};
	class ACE_SmokeAfterWaterBlue: ACE_SmokeAfterWaterWhite
	{
		colorCoef[] = {0.0355,0.1863,1.0,0.8};
	};
	class ACE_SmokeAfterWaterOrange: ACE_SmokeAfterWaterWhite
	{
		colorCoef[] = {0.9132,0.1763,0.007,0.8};
	};
	class SmokeShellWhiteUW;
	class SmokeShellWhite2UW: SmokeShellWhiteUW
	{
		postEffects = "ACE_SmokeAfterWaterWhite";
	};
	class SmokeShellRedUW;
	class SmokeShellRed2UW: SmokeShellRedUW
	{
		postEffects = "ACE_SmokeAfterWaterRed";
	};
	class SmokeShellGreenUW;
	class SmokeShellGreen2UW: SmokeShellGreenUW
	{
		postEffects = "ACE_SmokeAfterWaterGreen";
	};
	class SmokeShellYellowUW;
	class SmokeShellYellow2UW: SmokeShellYellowUW
	{
		postEffects = "ACE_SmokeAfterWaterYellow";
	};
	class SmokeShellPurpleUW;
	class SmokeShellPurple2UW: SmokeShellPurpleUW
	{
		postEffects = "ACE_SmokeAfterWaterPurple";
	};
	class SmokeShellOrangeUW;
	class SmokeShellOrange2UW: SmokeShellOrangeUW
	{
		postEffects = "ACE_SmokeAfterWaterOrange";
	};
	class SmokeShellBlueUW;
	class SmokeShellBlue2UW: SmokeShellBlueUW
	{
		postEffects = "ACE_SmokeAfterWaterBlue";
	};
};
class SmokeShellWhiteEffect
{
	class SmokeShell
	{
		type = "ACE_SmokeBaseLarge";
	};
	class SmokeShell2
	{
		type = "ACE_SmokeBaseSmall";
	};
};
class SmokeShellRedEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
		type = "ACE_SmokeBaseMedium";
	};
};
class SmokeShellGreenEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
		type = "ACE_SmokeBaseMedium";
	};
};
class SmokeShellYellowEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
		type = "ACE_SmokeBaseMedium";
	};
};
class SmokeShellPurpleEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
		type = "ACE_SmokeBaseMedium";
	};
};
class SmokeShellOrangeEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
		type = "ACE_SmokeBaseMedium";
	};
};
class SmokeShellBlueEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
		type = "ACE_SmokeBaseMedium";
	};
};
class ACE_40mmSmokeShellWhiteEffect: SmokeShellWhiteEffect
{
	class SmokeShell: SmokeShell
	{
		type = "ACE_SmokeBase40mm";
	};
};
class ACE_40mmSmokeShellRedEffect: ACE_40mmSmokeShellWhiteEffect
{
	class SmokeShellUW
	{
		simulation = "particles";
		type = "SmokeShellRedUW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = "particles";
		type = "SmokeShellRed2UW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class ACE_40mmSmokeShellGreenEffect: ACE_40mmSmokeShellWhiteEffect
{
	class SmokeShellUW
	{
		simulation = "particles";
		type = "SmokeShellGreenUW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = "particles";
		type = "SmokeShellGreen2UW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class ACE_40mmSmokeShellYellowEffect: ACE_40mmSmokeShellWhiteEffect
{
	class SmokeShellUW
	{
		simulation = "particles";
		type = "SmokeShellYellowUW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = "particles";
		type = "SmokeShellYellow2UW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class ACE_40mmSmokeShellPurpleEffect: ACE_40mmSmokeShellWhiteEffect
{
	class SmokeShellUW
	{
		simulation = "particles";
		type = "SmokeShellPurpleUW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = "particles";
		type = "SmokeShellPurple2UW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class ACE_40mmSmokeShellOrangeEffect: ACE_40mmSmokeShellWhiteEffect
{
	class SmokeShellUW
	{
		simulation = "particles";
		type = "SmokeShellOrangeUW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = "particles";
		type = "SmokeShellOrange2UW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class ACE_40mmSmokeShellBlueEffect: ACE_40mmSmokeShellWhiteEffect
{
	class SmokeShellUW
	{
		simulation = "particles";
		type = "SmokeShellBlueUW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = "particles";
		type = "SmokeShellBlue2UW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class ACE_ArtillerySmoke
{
	class SmokeShell
	{
		type = "ACE_SmokeBaseArtilleryLarge";
		simulation = "particles";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2
	{
		type = "ACE_SmokeBaseArtillerySmall";
		simulation = "particles";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class ACE_SmokeAfterWaterWhite
{
	class SmokeAfterWater
	{
		type = "ACE_SmokeAfterWaterWhite";
		simulation = "particles";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class ACE_SmokeAfterWaterRed: ACE_SmokeAfterWaterWhite
{
	class SmokeAfterWater: SmokeAfterWater
	{
		type = "ACE_SmokeAfterWaterRed";
	};
};
class ACE_SmokeAfterWaterGreen: ACE_SmokeAfterWaterWhite
{
	class SmokeAfterWater: SmokeAfterWater
	{
		type = "ACE_SmokeAfterWaterGreen";
	};
};
class ACE_SmokeAfterWaterYellow: ACE_SmokeAfterWaterWhite
{
	class SmokeAfterWater: SmokeAfterWater
	{
		type = "ACE_SmokeAfterWaterYellow";
	};
};
class ACE_SmokeAfterWaterPurple: ACE_SmokeAfterWaterWhite
{
	class SmokeAfterWater: SmokeAfterWater
	{
		type = "ACE_SmokeAfterWaterPurple";
	};
};
class ACE_SmokeAfterWaterOrange: ACE_SmokeAfterWaterWhite
{
	class SmokeAfterWater: SmokeAfterWater
	{
		type = "ACE_SmokeAfterWaterOrange";
	};
};
class ACE_SmokeAfterWaterBlue: ACE_SmokeAfterWaterWhite
{
	class SmokeAfterWater: SmokeAfterWater
	{
		type = "ACE_SmokeAfterWaterBlue";
	};
};