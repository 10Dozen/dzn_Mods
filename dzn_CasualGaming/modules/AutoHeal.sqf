/*
 *	Auto Healing
 *
*/

dzn_CG_fnc_setAutoHealSettings = {
	if (typename _this == "BOOL") then {
		dzn_CG_AutoHealEnabled = _this;
	} else {
		dzn_CG_AutoHealTimer = _this;
	};
	
	hint parseText format ["<t size='1.5' color='#FFD000' shadow='1'>Auto-Heal</t>
		<br /><br />%1
		<br />%2 seconds"
		, if (dzn_CG_AutoHealEnabled) then { "ON" } else { "OFF" }
		, dzn_CG_AutoHealTimer
	];
};

dzn_CG_fnc_heal = {
	player setDamage 0;
	[player ,player] call ace_medical_fnc_treatmentAdvanced_fullHealLocal;
	hint parseText "<t size='1.5' color='#FFD000' shadow='1'>Healed</t>";
};
	
dzn_CG_fnc_healAll = {	
	call dzn_CG_fnc_heal;
	
	{
		[] remoteExec ["dzn_CG_fnc_heal", _x];
		sleep 0.1;
	} forEach (call BIS_fnc_listPlayers);
	
	hint parseText "<t size='1.5' color='#FFD000' shadow='1'>Global Healing done</t>";
};

dzn_CG_fnc_toggleFatigue = {
	player enableFatigue _this;
	
	// If ACE stamina exists
	if (!isNil "ace_advanced_fatigue_enabled" && { ace_advanced_fatigue_enabled }) then {
		dzn_CG_ACE_Fatigue = _this;
		if !(_this) then {
			[] spawn {
				while { !dzn_CG_ACE_Fatigue } do {
					sleep 0.25;
					ace_advanced_fatigue_anReserve = 999999;
				};		
			};
		};
	};
	
	hint parseText format [
		"<t size='1.5' shadow='1'><t color='#FFD000' >Fatigue</t> %1</t>"
		, if (_this) then { "ON" } else { "OFF" }
	];
};

[] spawn {
	sleep 2;
	
	dzn_CG_AutoHealEnabled = false;
	dzn_CG_AutoHealTimer = 30;
	dzn_CG_ACE_Available = !isNil "ace_medical_fnc_treatmentAdvanced_fullHealLocal";
	

	while { true } do {
		sleep 0.5;
		
		if (dzn_CG_AutoHealEnabled) then {
			sleep dzn_CG_AutoHealTimer;
			
			player setDamage 0;
			if (dzn_CG_ACE_Available) then {
				[player ,player] call ace_medical_fnc_treatmentAdvanced_fullHealLocal;
			};
		};
	};
};

