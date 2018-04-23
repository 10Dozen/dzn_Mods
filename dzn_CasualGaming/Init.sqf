if !(hasInterface) exitWith {};

waitUntil { time > 1 };

call compile preProcessFileLineNumbers "\dzn_CasualGaming\modules\Arsenal.sqf";
call compile preProcessFileLineNumbers "\dzn_CasualGaming\modules\AutoHeal.sqf";
call compile preProcessFileLineNumbers "\dzn_CasualGaming\modules\Respawn.sqf";
call compile preProcessFileLineNumbers "\dzn_CasualGaming\modules\Rallypoint.sqf";
call compile preProcessFileLineNumbers "\dzn_CasualGaming\modules\VehicleService.sqf";
call compile preProcessFileLineNumbers "\dzn_CasualGaming\UIFunctions.sqf";

// ********** Topics ****************
#define NOTES		private["_topics"]; _topics = []; player createDiarySubject ["dzn_CG_Page","dzn Casual Gaming"];
#define TOPIC(Y, NAME) 	if (Y) then { _topics pushBack ["dzn_CG_Page", [ NAME,
#define END			]]; };
#define ADD_TOPICS	for "_i" from (count _topics) to 0 step -1 do {player createDiaryRecord (_topics select _i);};

NOTES	

TOPIC(true, "Auto-Heal")
"<font color='#12C4FF' size='14'>Auto-Heal</font>
<br />[<font color='#A0DB65'><execute expression='true call dzn_CG_fnc_setAutoHealSettings'>Turn On</execute></font>]  [
<font color='#A0DB65'><execute expression='false call dzn_CG_fnc_setAutoHealSettings;'>Turn Off</execute></font>]
<br />
<br />Timeout: [<font color='#A0DB65'><execute expression='10 call dzn_CG_fnc_setAutoHealSettings'>10 sec</execute></font>]
   [<font color='#A0DB65'><execute expression='20 call dzn_CG_fnc_setAutoHealSettings'>20 sec</execute></font>]
   [<font color='#A0DB65'><execute expression='30 call dzn_CG_fnc_setAutoHealSettings'>30 sec</execute></font>]
   [<font color='#A0DB65'><execute expression='40 call dzn_CG_fnc_setAutoHealSettings'>40 sec</execute></font>]
   [<font color='#A0DB65'><execute expression='60 call dzn_CG_fnc_setAutoHealSettings'>60 sec</execute></font>]
   [<font color='#A0DB65'><execute expression='300 call dzn_CG_fnc_setAutoHealSettings'>5 min</execute></font>]
   [<font color='#A0DB65'><execute expression='600 call dzn_CG_fnc_setAutoHealSettings'>10 min</execute></font>]
<br />
<br /><font color='#12C4FF' size='14'>Instant Healing</font>
<br /> [<font color='#A0DB65'><execute expression='[] spawn dzn_CG_fnc_heal;'>Heal Myself</execute></font>]
<br /> [<font color='#A0DB65'><execute expression='[] spawn dzn_CG_fnc_healAll'>Heal All Players</execute></font>]
"
END

TOPIC(true, "Respawn Time")
"<font color='#12C4FF' size='14'>Respawn Time</font>
<br />[<font color='#A0DB65'><execute expression='15 call dzn_CG_fnc_setRespawnTime;'>Turn On (15)</execute></font>]  [
<font color='#A0DB65'><execute expression='999999 call dzn_CG_fnc_setRespawnTime;'>Turn Off (999999)</execute></font>]
"
END

TOPIC(true, "Arsenal & Garage")
"<font color='#12C4FF' size='14'>Arsenal</font>
<br />[<font color='#A0DB65'><execute expression='[] spawn dzn_CG_fnc_openArsenal;'>Open Arsenal</execute></font>]
<br />[<font color='#A0DB65'><execute expression='[] spawn dzn_CG_fnc_openGarage;'>Open Garage</execute></font>]
"
END

TOPIC(true, "Vehicle Service")
"<font color='#12C4FF' size='14'>Vehicle Service</font>
<br />Apply for player's vehicle: [<font color='#A0DB65'><execute expression='0 call dzn_CG_fnc_serviceVehicle;'>REPAIR</execute></font>]
   [<font color='#A0DB65'><execute expression='1 call dzn_CG_fnc_serviceVehicle;'>REFUEL</execute></font>]
   [<font color='#A0DB65'><execute expression='2 call dzn_CG_fnc_serviceVehicle;'>REARM</execute></font>]
"
END

TOPIC(true, "Rallypoint")
"<font color='#12C4FF' size='14'>Rallypoint</font>
<br />[<font color='#A0DB65'><execute expression='[] spawn dzn_CG_fnc_setRallypoint;'>Set Rallypoint</execute></font>]
<br />
<br />[<font color='#A0DB65'><execute expression='true spawn dzn_CG_fnc_moveToRallypoint;'>Deploy to My Rallypoint</execute></font>]
<br />[<font color='#A0DB65'><execute expression='false spawn dzn_CG_fnc_moveToRallypoint;'>Deploy to Squad Rallypoint</execute></font>]
"
END

TOPIC(true, "Misc")
"<font color='#12C4FF' size='14'>Camera</font>
<br />[<font color='#A0DB65'><execute expression='openMap false; [] spawn BIS_fnc_camera;'>Open Splendid Camera</execute></font>]
<br />[<font color='#A0DB65'><execute expression='openMap false; closeDialog 2; [] spawn { createDialog ""dzn_CG_Console_Group""};'>Open Console</execute></font>]
<br />
"
END

ADD_TOPICS