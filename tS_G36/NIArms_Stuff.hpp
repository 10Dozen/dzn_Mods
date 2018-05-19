class CfgSoundShaders
{
	class g36_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\g36_first",1},{"hlc_wp_g36\snd\soundshaders\g36\g36_first",1}};
		volume = 1;
		range = 10;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class g36_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\g36_close",1},{"hlc_wp_g36\snd\soundshaders\g36\g36_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\g36_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class g36_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\g36_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class g36_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
		limitable = 1;
	};
	class g36_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Forest",1}};
		volume = "1.4*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
		limitable = 1;
	};
	class g36_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Forest_mid",1}};
		volume = " 1.4*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
		limitable = 1;
	};
	class g36_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Urban",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
		limitable = 1;
	};
	class g36_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Urban_mid",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
		limitable = 1;
	};
	class g36_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\g36_indoor",1}};
		volume = " 1.4*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
		limitable = 1;
	};
	class g36_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\g36_indoor_mid",1}};
		volume = " 1.4*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
		limitable = 1;
	};
	class g36_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Meadows",1}};
		volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
		limitable = 1;
	};
	class G36_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36\g36_meadows_mid",1}};
		volume = " 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
		limitable = 1;
	};
	class g36_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Trees",1}};
		volume = "1.4*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
		limitable = 1;
	};
	class g36_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Trees_mid",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
		limitable = 1;
	};
	class g36_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Close",1}};
		volume = 0.8;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class g36_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_mid",1}};
		volume = 1;
		range = 350;
		rangeCurve[] = {{0,0.2},{50,1},{350,0}};
	};
	class g36_silencerTailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Tail",1}};
		volume = " (1-interior/1.4)*Forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class g36_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses",1}};
		volume = "2.585*((1-interior/1.4)*houses/3)";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class g36_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Tail_Indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class g36_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Tail",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class g36_silencerTailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Tail",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class g36c_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_first",1},{"hlc_wp_g36\snd\soundshaders\g36c\g36c_first",1}};
		volume = 1;
		range = 10;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class g36c_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_close",1},{"hlc_wp_g36\snd\soundshaders\g36c\g36c_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36c_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class g36c_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class g36c_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class g36c_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\G36C_Forest",1}};
		volume = "1.4*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36C_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36C\G36C_Forest_mid",1}};
		volume = " 1.4*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class g36c_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\G36C_Urban",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36c_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\G36c_Urban_mid",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36c_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_indoor",1}};
		volume = " 1.4*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36c_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_indoor_mid",1}};
		volume = " 1.4*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class g36c_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_meadows",1}};
		volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36c_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36c\g36c_meadows_mid",1}};
		volume = " 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36c_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\g36c_trees",1}};
		volume = "1.4*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36c_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36c\G36c_Trees_mid",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36k_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_first",1},{"hlc_wp_g36\snd\soundshaders\g36k\g36k_first",1}};
		volume = 1;
		range = 10;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class g36k_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_close",1},{"hlc_wp_g36\snd\soundshaders\g36k\g36k_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36k_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class g36k_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class g36k_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class g36k_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\G36K_Forest",1}};
		volume = "1.4*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36k_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\G36k_Forest_mid",1}};
		volume = " 1.4*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class g36k_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\G36K_Urban",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36k_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\G36k_Urban_mid",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36k_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_indoor",1}};
		volume = "1.4*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36k_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_indoor_mid",1}};
		volume = " 1.4*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class g36k_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\g36k_meadows",1}};
		volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G36k_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\G36k\g36k_meadows_mid",1}};
		volume = " 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class g36k_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\G36K_Trees",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g36k_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g36\snd\soundshaders\g36k\G36k_Trees_mid",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
};
class CfgSoundSets
{
	class g36_Shot_SoundSet
	{
		soundShaders[] = {"g36_closeShot_SoundShader","g36_midShot_SoundShader","g36_distShot_SoundShader","g36_Closure_SoundShader"};
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
	class g36_Tail_SoundSet
	{
		soundShaders[] = {"g36_tailDistant_SoundShader","g36_tailForest_SoundShader","g36_tailHouses_SoundShader","g36_tailInterior_SoundShader","g36_tailMeadows_SoundShader","g36_tailTrees_SoundShader","g36_tailForest_mid_SoundShader","g36_tailHouses_mid_SoundShader","g36_tailInterior_mid_SoundShader","g36_tailMeadows_mid_SoundShader","g36_tailTrees_mid_SoundShader"};
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
	class g36_silencerShot_SoundSet
	{
		soundShaders[] = {"g36_silencerShot_SoundShader","g36_Closure_SoundShader","g36_silencerShot_mid_SoundShader"};
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
	class g36_silencerTail_SoundSet
	{
		soundShaders[] = {"g36_silencerTailTrees_SoundShader","g36_silencerTailForest_SoundShader","g36_silencerTailMeadows_SoundShader","g36_silencerTailHouses_SoundShader","g36_silencerTailInterior_SoundShader"};
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
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class g36c_Shot_SoundSet
	{
		soundShaders[] = {"g36c_closeShot_SoundShader","g36c_midShot_SoundShader","g36c_distShot_SoundShader","g36c_Closure_SoundShader"};
		volumeFactor = 1.4;
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
	class g36c_Tail_SoundSet
	{
		soundShaders[] = {"g36c_tailDistant_SoundShader","g36c_tailForest_SoundShader","g36c_tailHouses_SoundShader","g36c_tailInterior_SoundShader","g36c_tailMeadows_SoundShader","g36c_tailTrees_SoundShader","g36c_tailForest_mid_SoundShader","g36c_tailHouses_mid_SoundShader","g36c_tailInterior_mid_SoundShader","g36c_tailMeadows_mid_SoundShader","g36c_tailTrees_mid_SoundShader"};
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
	class g36k_Shot_SoundSet
	{
		soundShaders[] = {"g36k_closeShot_SoundShader","g36k_midShot_SoundShader","g36k_distShot_SoundShader","g36k_Closure_SoundShader"};
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
	class g36k_Tail_SoundSet
	{
		soundShaders[] = {"g36k_tailDistant_SoundShader","g36k_tailForest_SoundShader","g36k_tailHouses_SoundShader","g36k_tailInterior_SoundShader","g36k_tailMeadows_SoundShader","g36k_tailTrees_SoundShader","g36k_tailForest_mid_SoundShader","g36k_tailHouses_mid_SoundShader","g36k_tailInterior_mid_SoundShader","g36k_tailMeadows_mid_SoundShader","g36k_tailTrees_mid_SoundShader"};
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
};


class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		HLC_GestureReloadG36A1 = "HLC_GestureReloadG36A1";
		HLC_GestureReloadAG36 = "HLC_GestureReloadAG36";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			HLC_GestureReloadG36A1[] = {"HLC_GestureReloadG36A1","Gesture"};
			HLC_GestureReloadAG36[] = {"HLC_GestureReloadAG36","Gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			HLC_GestureReloadG36A1[] = {"HLC_GestureReloadG36A1_Prone","Gesture"};
			HLC_GestureReloadAG36[] = {"HLC_GestureReloadAG36_Prone","Gesture"};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReloadG36A1[] = {"HLC_GestureReloadG36A1_Context","Gesture"};
			HLC_GestureReloadAG36[] = {"HLC_GestureReloadAG36_Context","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReloadG36A1[] = {"HLC_GestureReloadG36A1_Context","Gesture"};
			HLC_GestureReloadAG36[] = {"HLC_GestureReloadAG36_Context","Gesture"};
			class RifleAdjustFProneActions: RifleAdjustProneBaseActions
			{
				HLC_GestureReloadG36A1[] = {"HLC_GestureReloadG36A1_Context","Gesture"};
				HLC_GestureReloadAG36[] = {"HLC_GestureReloadAG36_Context","Gesture"};
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class HLC_GestureReloadG36A1: Default
		{
			file = "hlc_wp_g36\anim\standard\reload_G36_standing.rtm";
			speed = 0.23076923;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.25;
			headBobMode = 2;
			leftHandIKCurve[] = {0,1,0.025,0,0.8583333,0,0.88,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
		};
		class HLC_GestureReloadG36A1_Prone: Default
		{
			file = "hlc_wp_g36\anim\standard\reload_G36_prone.rtm";
			speed = 0.23076923;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.15;
			headBobMode = 2;
			leftHandIKCurve[] = {0,1,0.025,0,0.8583333,0,0.88,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
		};
		class HLC_GestureReloadG36A1_Context: HLC_GestureReloadG36A1
		{
			mask = "handsWeapon_context";
		};
		
		class HLC_GestureReloadAG36: Default
		{
			file = "hlc_wp_g36\anim\ag36\reload_aG36_standing.rtm";
			speed = 0.23076923;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.25;
			headBobMode = 2;
			leftHandIKCurve[] = {0,1,0.025,0,0.8583333,0,0.88,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
		};
		class HLC_GestureReloadAG36_Prone: Default
		{
			file = "hlc_wp_g36\anim\ag36\reload_aG36_prone.rtm";
			speed = 0.23076923;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.15;
			headBobMode = 2;
			leftHandIKCurve[] = {0,1,0.025,0,0.8583333,0,0.88,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
		};
		class HLC_GestureReloadAG36_Context: HLC_GestureReloadAG36
		{
			mask = "handsWeapon_context";
		};
		
	};
};


