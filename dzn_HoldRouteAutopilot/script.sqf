A = true;
[] spawn {
	while { A } do {
		sleep 5;
		V1 setDir getDir V1; 
		[V1, 0, 0] call BIS_fnc_setPitchBank; 
		V1 setVelocityModelSpace [0, 150, 0];
	};
};
