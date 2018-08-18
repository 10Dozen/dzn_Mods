#define TITLE "dzn Extended Jamming"
#define	gADDON EJAM
#define	gADDON_NAME dzn_##gADDON
#define gFNC_PATH gADDON_NAME##\functions\##

#define QUOTE(s) #s

#define	ADDON QUOTE(gADDON)
#define PATH QUOTE(gADDON_NAME)
#define FNC_PATH QUOTE(gFNC_PATH)

#define GVAR(X) gADDON_NAME##_##X
#define SVAR(X) QUOTE(GVAR(X))

#define gSTR_NAME(X) STR_##gADDON##_##X
#define STR_NAME(X) QUOTE(gSTR_NAME(X))

#define COMPILE_FUNCTION(X) GVAR(X) = compile preprocessFileLineNumbers format ["%1%2.sqf", FNC_PATH, #X]
