
// --- Setting
[
	"tS_ACE_Medical_DisableBloodLossFade"
	, "CHECKBOX"
	, "Disable color fade on low blood"
	, "tS ACE Medical"
	, true
] call CBA_fnc_addSetting;

#define MIN_BLOOD_VOL	3.8
#define MAX_BLOOD_VOL	6.0
#define MIN_BLOOD_INDEX	6
#define MAX_BLOOD_INDEX 0

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
	if (!isNil "ace_medical_feedback_ppBloodVolume" && { ace_medical_feedback_ppBloodVolume != -1337 }) then {
		ace_medical_feedback_ppBloodVolume ppEffectEnable false;
		ppEffectDestroy ace_medical_feedback_ppBloodVolume;
		ace_medical_feedback_ppBloodVolume = -1337;
	};
	
	// --- Handle Blood volume indicator	
	private _bloodVolume = player getVariable ["ace_medical_bloodVolume", 6.0];
	
	// Calculate icon index
	private _bloodLossIndex = MAX_BLOOD_INDEX;
	if (_bloodVolume < MAX_BLOOD_VOL) then {
		_bloodLossIndex = floor(linearConversion [MAX_BLOOD_VOL, MIN_BLOOD_VOL, _bloodVolume, MAX_BLOOD_INDEX, MIN_BLOOD_INDEX, true]);
	};
	uiNamespace setVariable ["tS_ACE_BloodVolumeInfoValue", _bloodLossIndex];
	
	// Update icon
	with uiNamespace do {
		if (isNil "BloodVolumeInfoControlGroup") exitWith {};
		
		private _bloodLossIndex = tS_ACE_BloodVolumeInfoValue;
		private _text = "";
		private _color = [1,1,1,1];
		
		if (_bloodLossIndex > 0) then {
			_text = "\tS_ACE_Medical\data\ui\bloodVolume_" + str(_bloodLossIndex) + "_ca.paa";
			
			if (_bloodLossIndex > 2) then {
				_color =  if (_bloodLossIndex >= 4) then { [0.8, 0.2, 0, 1] } else { [1, 0.6, 0, 1] };
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