#include "script_component.hpp"

if ((!isServer) && hasInterface) exitWith {};

GVAR(dataIndex) = -1;
GVAR(fsmNo) = -1;

if (isServer) then {
    GVAR(dataIndex) = 0;
    [] execFSM "z\potato\addons\serverMonitor\pabst_fsmCPS.fsm";
    diag_log text format ["[POTATO] Server Monitor FSM Installed [Index %1]", GVAR(dataIndex)];
    
    //Send all HC an event with their index:
    [{
        if (time < 1) exitWith {}; //wait for HCs to connect before triggering events
        {
            ["potato_hcSetIndex", [_forEachIndex + 1], [_x]] call CBA_fnc_targetEvent;
        } forEach (entities "HeadlessClient_F");
        [_this select 1] call CBA_fnc_removePerFrameHandler;
    }, 0, []] call CBA_fnc_addPerFrameHandler;

} else {
    if (!hasInterface) then {
        ["potato_hcSetIndex", {
            params ["_index"];
            GVAR(dataIndex) = _index;
            [] execFSM "z\potato\addons\serverMonitor\pabst_fsmCPS.fsm";
            diag_log text format ["[POTATO] Server Monitor FSM Installed [Index %1]", GVAR(dataIndex)];
        }] call CBA_fnc_addEventHandler;
    };
};

[{
    if (GVAR(dataIndex) < 0) exitWith {diag_log text format ["[POTATO] Waiting on index"];};
    params ["_args"];
    _args params ["_lastTime", "_lastFrame", "_lastFSM"];
    _delta = diag_tickTime - _lastTime;
    private _fps = (diag_frameno - _lastFrame) / _delta;
    private _cps = (GVAR(fsmNo) - _lastFSM) / _delta;
    _args set [0, diag_tickTime];
    _args set [1, diag_frameno];
    _args set [2, GVAR(fsmNo)];

    private _localUnits = {local _x} count allUnits;
    TRACE_3("tick",_localUnits,_fps,_cps);

    missionNameSpace setVariable [(format [QGVAR(%1), GVAR(dataIndex)]), [_localUnits, _fps, _cps], true];

}, 10, [0, 0, 0]] call CBA_fnc_addPerFrameHandler;

//Add onPlayerConnected event handler remotely to server to spawn the FPS setter to the client that joined    

if (isMultiplayer) then {
	[[], {
		if (hasinterface) then {
			if(isNil "POTATO_FPSDiagActive") then 
			{
				POTATO_FPSDiagActive = true;
				while {true} do 
				{
					player setVariable ["POTATO_PlayerFPS", floor diag_fps, true];
					sleep 1;
				};
			};
		};
	}] remoteExec ["spawn", 0, true];
};

//Waits until curators are initalized in order to check if player is zeus/admin to run the fps scripts

waitUntil {_adminState = call BIS_fnc_admin; sleep 5; (!isNull (findDisplay 312)) || (_adminState == 2)};	

//If player is admin/zeus it will run the script and each player will have their FPS appear beneath them

	POTATO_showFrames = true;
	
	addMissionEventHandler ["Draw3D", {
		{
			_distance = (ATLToASL (positionCameraToWorld [0,0,0])) distance _x;
			//if camera is farther than 1200 meters away from the targets the text will not display
			if (_distance < 1200) then {
				_playerFPS = _x getVariable ["POTATO_PlayerFPS",50];
				//if the FPS is below 20 it turns red and becomes more visible for zeus/admin to see so they are aware
				if (_playerFPS  <20) then 
				{
					if(POTATO_showFrames) then {
						drawIcon3D
						[
							"",//Path to image displayed near text
							[1,0,0,0.7],//color of the text using RGBA
							ASLToAGL getPosASL _x,//position of the text _x referring to the player in 'allPlayers'
							1,//Width
							2,//height from position, below
							0,//angle
							format["%1 FPS: %2", name _x, str _playerFPS],//text to be displayed
							0,//shadow on text, 0=none,1=shadow,2=outline
							0.05,//text size
							"PuristaMedium",//text font
							"center"//align text left, right, or center
						];
					};
				}
				//if the FPS is above 20 text is smaller and less visible as to not concern zeus/admin as much
				else
				{
					if(POTATO_showFrames) then {
						drawIcon3D
						[
							"",//Path to image displayed near text
							[1,1,1,0.5],//color of the text using RGBA
							ASLToAGL getPosASL _x,//position of the text _x referring to the player in 'allPlayers'
							1,//Width
							2,//height from position, below
							0,//angle
							format["%1 FPS: %2", name _x, str _playerFPS],//text to be displayed
							0,//shadow on text, 0=none,1=shadow,2=outline
							0.03,//text size
							"PuristaMedium",//text font
							"center"//align text left, right, or center
						];
					};
				};
			};
		} forEach allPlayers;
	}];