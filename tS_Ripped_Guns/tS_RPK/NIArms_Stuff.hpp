class CfgSoundShaders
{
	class Nia_rpk_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_first",1},{"hlc_wp_ak\snd\soundshaders\rpk\rpk_first",1}};
		range = 35;
		volume = 1;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class Nia_rpk_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_rpk_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_mid",1}};
		volume = 1.6252;
		range = 1800;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{1800,0}};
	};
	class Nia_rpk_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_dist",1}};
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class Nia_rpk_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_indoor",1}};
		volume = "1.5*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class Nia_rpk_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_trees",1}};
		volume = "1.5*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_forest",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_meadows",1}};
		volume = "1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_urban",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_urban_mid",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{1200,0}};
		range = 1200;
		limitation = 1;
	};
	class Nia_rpk_Shot_Silenced_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_sil",1}};
		volume = 0.8;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class nia_rpk_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_sil_mid",1}};
		volume = 1;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class Nia_rpk_tailInterior_Silenced_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_siltail_indoor",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class Nia_rpk_tailTrees_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_trees",1}};
		volume = "(1-interior/1.4)*trees";
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk_tailForest_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_forest",1}};
		volume = "(1-interior/1.4)*forest";
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk_tailMeadows_Silenced_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_siltail",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk_tailHouses_Silenced_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_siltail",1}};
		volume = "(1-interior/1.4)*houses";
		range = 1200;
		limitation = 1;
	};
	class Nia_rpk74_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_first",1}};
		range = 35;
		volume = 1;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class Nia_rpk74_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_rpk74_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class Nia_rpk74_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class Nia_rpk74_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class Nia_rpk74_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_forest",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk74_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk74_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_urban",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk74_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_urban_mid",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{1200,0}};
		range = 1200;
		limitation = 1;
	};
	class Nia_rpk74_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_indoor",1}};
		volume = " 1.5*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk74_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class Nia_rpk74_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_meadows",1}};
		volume = "1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk74_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk74_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_trees",1}};
		volume = "1.5*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk74_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk74_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_sil",1}};
		volume = 0.8;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class nia_rpk74_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_sil_mid",1}};
		volume = 1;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class Nia_rpk74_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_rpk74_silencerTailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_siltail",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Nia_rpk74_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_siltail_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Nia_rpk74_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_siltail",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_rpk74_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	
	class Nia_rk62_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_first",1}};
		range = 35;
		volume = 0.87;
	};
	class Nia_rk62_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_rk62_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_mid",1}};
		volume = 1.6252;
		range = 1800;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{1800,0}};
	};
	class Nia_rk62_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_dist",1}};
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class Nia_rk62_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_indoor",1}};
		volume = "1.5*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rk62_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class Nia_rk62_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_trees",1}};
		volume = "1.5*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rk62_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rk62_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_forest",1}};
		volume = "1.5*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rk62_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rk62_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_meadows",1}};
		volume = "1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rk62_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rk62_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_urban",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rk62_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_urban_mid",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{1200,0}};
		range = 1200;
		limitation = 1;
	};
	
};
class CfgSoundSets
{
	class Nia_rk62_Shot_SoundSet
	{
		soundShaders[] = {"nia_rk62_Closure_SoundShader","nia_rk62_closeShot_SoundShader","nia_rk62_midShot_SoundShader","nia_rk62_distShot_SoundShader"};
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
	class Nia_rk62_Tail_SoundSet
	{
		soundShaders[] = {"Nia_rk62_tailInterior_SoundShader","nia_rk62_tailTrees_SoundShader","nia_rk62_tailForest_SoundShader","nia_rk62_tailMeadows_SoundShader","nia_rk62_tailHouses_SoundShader","Nia_rk62_tailInterior_mid_SoundShader","nia_rk62_tailTrees_mid_SoundShader","nia_rk62_tailForest_mid_SoundShader","nia_rk62_tailMeadows_mid_SoundShader","nia_rk62_tailHouses_mid_SoundShader"};
		volumeFactor = 1.5;
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
	
	class Nia_rpk_Shot_SoundSet
	{
		soundShaders[] = {"nia_rpk_Closure_SoundShader","nia_rpk_closeShot_SoundShader","nia_rpk_midShot_SoundShader","nia_rpk_distShot_SoundShader"};
		volumeFactor = 1.25;
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
	class Nia_rpk_Tail_SoundSet
	{
		soundShaders[] = {"nia_rpk_tailInterior_SoundShader","nia_rpk_tailTrees_SoundShader","nia_rpk_tailForest_SoundShader","nia_rpk_tailMeadows_SoundShader","nia_rpk_tailHouses_SoundShader","nia_rpk_tailInterior_mid_SoundShader","nia_rpk_tailTrees_mid_SoundShader","nia_rpk_tailForest_mid_SoundShader","nia_rpk_tailMeadows_mid_SoundShader","nia_rpk_tailHouses_mid_SoundShader"};
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
	class Nia_rpk_Shot_Silenced_SoundSet
	{
		soundShaders[] = {"nia_rpk_Closure_SoundShader","nia_rpk_Shot_Silenced_SoundShader","nia_rpk_silencerShot_mid_SoundShader"};
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
	class Nia_rpk_ShotTail_Silenced_SoundSet
	{
		soundShaders[] = {"nia_rpk_tailInterior_Silenced_SoundShader","nia_rpk_tailTrees_Silenced_SoundShader","nia_rpk_tailForest_Silenced_SoundShader","nia_rpk_tailMeadows_Silenced_SoundShader","nia_rpk_tailHouses_Silenced_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	
	class Nia_rpk74_Shot_SoundSet
	{
		soundShaders[] = {"nia_rpk74_closeShot_SoundShader","nia_rpk74_midShot_SoundShader","nia_rpk74_distShot_SoundShader","nia_rpk74_Closure_SoundShader"};
		volumeFactor = 1.5;
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
	class Nia_rpk74_Tail_SoundSet
	{
		soundShaders[] = {"nia_rpk74_tailForest_SoundShader","nia_rpk74_tailHouses_SoundShader","nia_rpk74_tailInterior_SoundShader","nia_rpk74_tailMeadows_SoundShader","nia_rpk74_tailTrees_SoundShader","nia_rpk74_tailForest_mid_SoundShader","nia_rpk74_tailHouses_mid_SoundShader","nia_rpk74_tailInterior_mid_SoundShader","nia_rpk74_tailMeadows_mid_SoundShader","nia_rpk74_tailTrees_mid_SoundShader"};
		volumeFactor = 1.35;
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
	
	class Nia_rpk74_silencerShot_SoundSet
	{
		soundShaders[] = {"nia_rpk74_silencerShot_SoundShader","nia_rpk74_Closure_SoundShader","nia_rpk74_silencerShot_mid_SoundShader"};
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
	class Nia_rpk74_silencerTail_SoundSet
	{
		soundShaders[] = {"nia_rpk74_silencerTailTrees_SoundShader","nia_rpk74_silencerTailForest_SoundShader","nia_rpk74_silencerTailMeadows_SoundShader","nia_rpk74_silencerTailHouses_SoundShader","nia_rpk74_silencerTailInterior_SoundShader"};
		volumeFactor = 1;
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



