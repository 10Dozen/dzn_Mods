
class CfgSoundShaders
{
	class M60E4_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\M60_first",1}};
		range = 15;
		volume = 1;
		rangeCurve[] = {{0,1},{15,0}};
	};
	class M60E4_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class M60E4_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class M60E4_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class M60E4_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class M60E4_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_forest",1}};
		volume = "1.4*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M60E4_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_forest_mid",1}};
		volume = " 1.4*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class M60E4_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_urban",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M60E4_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_urban_mid",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class M60E4_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_indoor",1}};
		volume = "1.4*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M60E4_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_indoor_mid",1}};
		volume = " 1.4*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class M60E4_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_meadows",1}};
		volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M60E4_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_meadows_mid",1}};
		volume = " 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class M60E4_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_trees",1}};
		volume = "1.4*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M60E4_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_trees_mid",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class M60E4_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_03",1}};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class M60E4_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class M60E4_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class M60E4_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class M60E4_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class M60E4_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
};
class CfgSoundSets
{
	class M60e4_Shot_SoundSet
	{
		soundShaders[] = {"M60e4_closeShot_SoundShader","M60e4_midShot_SoundShader","M60e4_distShot_SoundShader","M60e4_Closure_SoundShader"};
		volumeFactor = 1.15;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class M60e4_tail_SoundSet
	{
		soundShaders[] = {"M60e4_tailDistant_SoundShader","M60e4_tailForest_SoundShader","M60e4_tailHouses_SoundShader","M60e4_tailInterior_SoundShader","M60e4_tailMeadows_SoundShader","M60e4_tailTrees_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class M60e4_silencerShot_SoundSet
	{
		soundShaders[] = {"M60e4_silencerShot_SoundShader","M60e4_Closure_SoundShader"};
		volumeFactor = 1.0;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class M60e4_silencerTail_SoundSet
	{
		soundShaders[] = {"M60e4_silencerTailTrees_SoundShader","M60e4_silencerTailForest_SoundShader","M60e4_silencerTailMeadows_SoundShader","M60e4_silencerTailHouses_SoundShader","M60e4_silencerTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
};