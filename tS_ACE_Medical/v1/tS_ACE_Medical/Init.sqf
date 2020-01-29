
// --- Setting
[
	"tS_ACE_Medical_DisableBloodLossFade"
	, "CHECKBOX"
	, "Disable color fade on low blood"
	, "tS ACE Medical"
	, true
] call CBA_fnc_addSetting;

// --- Functions
tS_ACE_Medical_fnc_handleLegTreatment = {
	_this params ["_caller", "_target", "_selectionName", "_className"];
	
	if (["leg_r","leg_l"] findIf { _x == _selectionName } < 0) exitWith {};
	
	// --- Get the list of the wounds the target is currently suffering from.
	private _currentWounds = _target getVariable [ "ace_medical_openWounds", []];
	private _leftLegWounds = 0;
	private _rightLegWounds = 0;
	
	{
		_x params ["", "", "_bodyPart", "_numOpenWounds", "_bloodLoss"];
		
		switch (_bodyPart) do {
			// Left Leg
			case 4: {
				_leftLegWounds = _leftLegWounds + (_numOpenWounds * _bloodLoss);
			};
			// Right Leg
			case 5: {
				_rightLegWounds = _rightLegWounds + (_numOpenWounds * _bloodLoss);
			};
		};
	} forEach _currentWounds;
	private _bodyStatus = _target getVariable ["ace_medical_bodyPartStatus", [0,0,0,0,0,0]];

	// --- Any body part that has no wounds is healed to full health
	if (_leftLegWounds == 0) then {
		_bodyStatus set [4, 0];
	};
	if (_rightLegWounds == 0) then {
		_bodyStatus set [5, 0];
	};

	_target setVariable ["ace_medical_bodyPartStatus", _bodyStatus, true];
	[_target] call ACE_medical_fnc_handleDamage_advancedSetDamage
};


// --- EH inits

// Handle Treatment EH
[
	"ace_treatmentSucceded", 
	{ _this call tS_ACE_Medical_fnc_handleLegTreatment; }
] call CBA_fnc_addEventHandler;

// Handle Blood loss post-process effects
if (!tS_ACE_Medical_DisableBloodLossFade) exitWith { }; // Exit if not enabled by user

[{
	// --- Remove ACE Blood volume PP effect
	if (!isNil "ace_medical_effectBloodVolumeCC" && { ace_medical_effectBloodVolumeCC != -1337 }) then {
		ace_medical_effectBloodVolumeCC ppEffectEnable false;
		ppEffectDestroy ace_medical_effectBloodVolumeCC;
		ace_medical_effectBloodVolumeCC = -1337;
	};
	
	// --- Handle Blood volume indicator
	// Calculate icon index
	private _blood = ACE_player getVariable ["ace_medical_bloodVolume", 100];
	private _bloodIndex = 0;
	if (ace_medical_level < 2) then {
		if (_blood < 95) then {
			_bloodIndex = ceil ((100 - _blood) / (100/6));
		};
	} else {
		if (_blood < 99) then {
			_bloodIndex = ceil ((40 - ((_blood max 60) - 60)) / (40/6));
		};
	};
	uiNamespace setVariable ["tS_ACE_BloodVolumeInfoValue", _bloodIndex];
	
	// Update icon
	with uiNamespace do {			
		if (isNil "BloodVolumeInfoControlGroup") exitWith {};
		
		private _bloodIndex = tS_ACE_BloodVolumeInfoValue;
		private _text = "";
		private _color = [1,1,1,1];
		
		if (_bloodIndex > 0) then {
			_text = "\tS_ACE_Medical\data\ui\bloodVolume_" + str(_bloodIndex) + "_ca.paa";
			
			if (_bloodIndex > 2) then {
				_color =  if (_bloodIndex >=4) then { [0.8, 0.2, 0, 1] } else { [1, 0.6, 0, 1] };
			};
		} else {
			_text = "";
			_color = [1, 1, 1, 0];
		};
			
		BloodVolumeInfoControlGroup ctrlSetText _text;
		BloodVolumeInfoControlGroup ctrlSetTextColor _color;
		BloodVolumeInfoControlGroup ctrlCommit 0;
	};
}] call CBA_fnc_addPerFrameHandler;