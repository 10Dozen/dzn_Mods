#include "macro.hpp"

/*
 *	FUNCTIONS 
 */
GVAR(fnc_initVehicle) = {
	params ["_veh"];
	
	[_veh] call GVAR(fnc_addMixedFiredEH);
};

GVAR(fnc_addMixedFiredEH) = {
	params ["_veh"];
	
	if (_veh getVariable [SVAR(FiredEH), -1] < 0) then {
		// Add event handler if there is none now
		private _eh = _veh addEventHandler ["Fired", { _this call GVAR(fnc_handleFired); }];		
		_veh setVariable [SVAR(FiredEH), _eh];
	} else {
		// Re-add event handler
		_veh removeEventHandler ["Fired", _veh getVariable SVAR(FiredEH)];
		[_veh] call GVAR(fnc_addMixedFiredEH);
	};
};

GVAR(fnc_getMagazineAmmoLoadout) = {
	params ["_magClass"];
	
	private _loadout = getArray (configFile >> "CfgMagazines" >> _magClass >> "dzn_AmmoLoadoutPattern");
	
	(_loadout)
};

GVAR(fnc_replaceProjectile) = {
	params ["_proj", "_ammoClass"];
	
	private _pos = getPosASL _proj;
	private _vel = velocity _proj;
	private _vDir = vectorDir _proj;
	private _vUp = vectorUp _proj;
	
	deleteVehicle _proj;
	
	private _newProj = _ammoClass createVehicle _pos;
	_newProj setPosASL _pos;
	_newProj setVectorDirAndUp [_vDir, _vUp];
	_newProj setVelocity _vel;
};

GVAR(fnc_handleFired) = {
	params ["_veh", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
	
	private _cachedLoadout = (_veh getVariable [_magazine, []]);
	
	if (_cachedLoadout isEqualTo []) then {
		// Not cached magazine is used
		private _loadout = [_magazine] call GVAR(fnc_getMagazineAmmoLoadout);		
		if (_loadout isEqualTo []) exitWith { /* No special belt load - exit */ };
		
		_cachedLoadout = [_loadout, (count _loadout) - 1, 0];
	} else {
		// Cached magazine is used - nothing to update
	};
	
	_cachedLoadout params ["_loadout", "_loadoutSize", "_loadoutIndex"];
	private _loadoutAmmo = _loadout # _loadoutIndex;

	if !(tolower(_loadoutAmmo) isEqualTo tolower(_ammo)) then {
		// Replace ammo
		[_projectile, _loadoutAmmo] call GVAR(fnc_replaceProjectile);
	};
	
	// Cycle through loadout pattern
	if (_loadoutIndex >= _loadoutSize) then {
		_loadoutIndex = 0;
	} else {
		_loadoutIndex = _loadoutIndex + 1;
	};

	// Update & Save cache
	_veh setVariable [_magazine, [_loadout, _loadoutSize, _loadoutIndex]];
};
