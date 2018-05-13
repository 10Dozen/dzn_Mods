class CfgSoundShaders
{
	class carbine_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\generic\ar15_first",1},{"hlc_wp_ar15\snd\soundshaders\generic\ar15_first",1}};
		range = 35;
		volume = 0.87;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class carbine_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_close",1},{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class carbine_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class carbine_distShot_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02",1},{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class carbine_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class carbine_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_forest",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class carbine_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class carbine_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_urban",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class carbine_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_urban_mid",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class carbine_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_indoor",1}};
		volume = " 1.5*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class carbine_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class carbine_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_meadows",1},{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_meadows",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class carbine_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class carbine_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_trees",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class carbine_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\carbine\carbine_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class carbine_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class carbine_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\Generic\carbine_suppressed_mid",1}};
		volume = 1.0;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class carbine_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class carbine_silencerTailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_meadow",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class carbine_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class carbine_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_meadow",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class carbine_silencerTailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_meadow",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
};
class CfgSoundSets
{
	class carbine_Shot_SoundSet
	{
		soundShaders[] = {"carbine_closeShot_SoundShader","carbine_midShot_SoundShader","carbine_distShot_SoundShader","carbine_Closure_SoundShader"};
		volumeFactor = 1.3;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
	};
	class carbine_Tail_SoundSet
	{
		soundShaders[] = {"carbine_tailForest_SoundShader","carbine_tailHouses_SoundShader","carbine_tailInterior_SoundShader","carbine_tailMeadows_SoundShader","carbine_tailTrees_mid_SoundShader","carbine_tailForest_mid_SoundShader","carbine_tailHouses_mid_SoundShader","carbine_tailInterior_mid_SoundShader","carbine_tailMeadows_mid_SoundShader","carbine_tailTrees_mid_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class carbine_silencerShot_SoundSet
	{
		soundShaders[] = {"carbine_silencerShot_SoundShader","carbine_Closure_SoundShader","carbine_silencerShot_mid_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class carbine_silencerTail_SoundSet
	{
		soundShaders[] = {"carbine_silencerTailTrees_SoundShader","carbine_silencerTailForest_SoundShader","carbine_silencerTailMeadows_SoundShader","carbine_silencerTailHouses_SoundShader","carbine_silencerTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	
};

