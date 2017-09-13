
/*
[] spawn {
	sleep 1;
	LOO = [];
	LOO2 = [];
	LOO3 = [];
	while { true } do {
		private _a = nearestObjects [(getPos player), [], 15];
		{
			if !(str(_x) in LOO) then { 
				LOO pushBack str(_x);
				LOO2 pushBack (typeOf _x);
				LOO3 pushBack (_x isKindOf "BulletBase");
			};
		} forEach _a;
	};
};
*/
[] spawn {


	fnc_supressEffect = {  
   
   if (!isNil "PP_blur" ) then { 
    ppEffectDestroy PP_blur;  
    //ppEffectDestroy PP_color;  
   }; 
    
   PP_blur = ppEffectCreate ["RadialBlur", 100];  
   PP_blur ppEffectEnable true;  
   PP_blur ppEffectForceInNVG true;  
   PP_blur ppEffectAdjust [0.05, 0.05, 0.35, 0.35];  
   PP_blur ppEffectCommit 1;  
   /*  
   PP_color =  ppEffectCreate ["ColorCorrections", 4215];  
   PP_color ppEffectEnable true;  
   PP_color ppEffectForceInNVG true;  
   PP_color ppEffectAdjust [  
    1,   
    1,   
    0,   
    [0, 0, 0, .1],   
    [1, 1, 1, 1],   
    [0.299, 0.587, 0.114, 0],  
    [0.4, 0.4, 0, 0, 0, 1, 1]  
   ];  
   PP_color ppEffectCommit 0; 
    */
   sleep 1; 
    
   ppEffectDestroy PP_blur;  
   // ppEffectDestroy PP_color;  
 };


	
	fnc_nearestBullets = {
		( { typeof _x == "B_762x54_Tracer_Green" } count (nearestObjects [(getPos player), [], 10])) > 0
	};
	
	while { true } do {
		// hintSilent str(call fnc_nearestBullets);
		if (call fnc_nearestBullets) then {
			[] spawn fnc_supressEffect;
		};
	};

};
/*
	Suppression effect
	
	
[] SPAWN { 
for "_i" from 0 to 10 do {
sleep 1;
ppEffectDestroy PP_blur; 
ppEffectDestroy PP_color; 

[] spawn { 
 PP_blur = ppEffectCreate ["RadialBlur", 100]; 
 PP_blur ppEffectEnable true; 
 PP_blur ppEffectForceInNVG true; 
 PP_blur ppEffectAdjust [0.05, 0.05, 0.35, 0.35]; 
 PP_blur ppEffectCommit 1; 
  
 PP_color =  ppEffectCreate ["ColorCorrections", 4215]; 
 PP_color ppEffectEnable true; 
 PP_color ppEffectForceInNVG true; 
 PP_color ppEffectAdjust [ 
 1,  
 1,  
 0,  
 [0, 0, 0, 0],  
 [1, 1, 1, 1],  
 [0.299, 0.587, 0.114, 0], 
 [0.5, 0.5, 0, 0, 0, 1, 1] 
];; 
 PP_color ppEffectCommit 0; 
 
  
 
};
};
};

*/
