/*
 *	Respawn
 *	If respawn enbaled - change respawn timer to 15 seconds
*/

dzn_CG_fnc_setRespawnTime = {
	setPlayerRespawnTime _this;
	hint parseText format ["<t size='1.5' color='#FFD000' shadow='1'>Respawn Time</t>
		<br /><br />Set to %1 seconds"
		, _this
	];
};

dzn_CG_fnc_showModel = {
	dzn_CG_playerModel = player;
	publicVariable "dzn_CG_playerModel";
	[dzn_CG_playerModel, false] remoteExec ["hideObject", 0];
};

player addEventHandler ["Respawn", { [] spawn dzn_CG_fnc_showModel; }];