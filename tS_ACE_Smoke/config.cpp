class CfgPatches
{
	class tS_ACE_Smoke
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_MAIN","ace_particles"};
		author[] = {"10Dozen"};
	};
};

// Hand Smoke Grenades
#define EFFECT_HANDGRENADE(color) class SmokeShell##color##Effect: SmokeShellWhiteEffect { \
    class SmokeShell: SmokeShell { \
        type = "SmokeShellWhite"; \
    }; \
    class SmokeShell2 \
    { \
        type = "SmokeShellWhite2"; \
    }; \
}

EFFECT_HANDGRENADE(White);
EFFECT_HANDGRENADE(Red);
EFFECT_HANDGRENADE(Green);
EFFECT_HANDGRENADE(Yellow);
EFFECT_HANDGRENADE(Purple);
EFFECT_HANDGRENADE(Orange);
EFFECT_HANDGRENADE(Blue);
