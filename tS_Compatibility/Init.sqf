
// Backward compatibility to old ACE Medical healing
if (isNil "ace_medical_fnc_treatmentAdvanced_fullHealLocal") then {
	ace_medical_fnc_treatmentAdvanced_fullHealLocal = {
		params ["_patient"];
		[_patient] call ace_medical_treatment_fnc_fullHealLocal;
	};
};

// Backward compatibility for tSF to prevent admin from being freezed on mission start
if (hasInterface) then {
	[] spawn {
		waitUntil { time > 0 };
		private _isAdmin = isServer || serverCommandAvailable "#logout";
		
		if (isMultiplayer && !_isAdmin) exitWith {};
		if (isNil "tSF_MissionDefaults_DisableInputOnStart") exitWith {};
		for "_i" from 0 to 10 do {
			if (userInputDisabled) then {
				player enableSimulation true;
				disableUserInput false;
				hintSilent "";
			};
			sleep 1;
		};
	};
};