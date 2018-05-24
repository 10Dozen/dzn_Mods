// class CfgMagazines
// {
	class hlc_40Rnd_762x39_Mag: 30Rnd_556x45_Stanag
	{
		author = "10Dozen";
		ammo = "B_762x39_Ball_F";
		count = 40;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231<br />Rounds: 45";
		displayname = $STR_tSRPK_RPK_40Rnd;
		lastroundstracer = 3;
		scope = 2;
		tracersevery = 4;
		mass = 15;
		displaynameshort = $STR_tSRPK_RPK_40Rnd_Short;
		picture = "\hlc_wp_ak\tex\ui\40Rnd_762x39_Mag.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_Rpk.p3d";
		initspeed = 759.0;
	};
	
	class hlc_75Rnd_762x39_Drum: hlc_40Rnd_762x39_Mag
	{
		count = 75;
		mass = 27;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231<br />Rounds: 75";
		displayname = $STR_tSRPK_RPK_75Rnd;
		displaynameshort = $STR_tSRPK_RPK_75Rnd_Short;
		picture = "\hlc_wp_ak\tex\ui\75Rnd_762x39_Mag.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_RPKdrum.p3d";
	};
// };

