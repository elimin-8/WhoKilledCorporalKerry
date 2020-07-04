// Below is the creation of arrays, that contain classnames of sound bites defined in config.cpp, randomized to make it fresh each time;
XIM_aCombatSoundClassnames = "'intense' in getArray (_x >> 'moods') " configClasses (configFile >> "CfgSounds") apply {configName _x} call BIS_fnc_arrayShuffle;
XIM_aCalmSoundClassnames = "'calm' in getArray (_x >> 'moods') " configClasses (configFile >> "CfgSounds") apply {configName _x} call BIS_fnc_arrayShuffle;
XIM_aAllSoundClassnames = XIM_aCombatSoundClassnames + XIM_aCalmSoundClassnames;
XIM_aAllSoundClassnames = XIM_aAllSoundClassnames call BIS_fnc_arrayShuffle;

private _bXIMLoaded = false;

// ====================================== FUNCTIONS ======================================

XIM_CKfncXIMPlaySound = // run when XIM is loaded
{
	params["_oPlayer", "_sMusicType"];
	_cSound = [_sMusicType] call XIM_CKfncTrackSelect;
	[_cSound] remoteExecCall ["playSound", group _oPlayer, false]
};

XIM_CKfncTrackSelect = 
{
	params ["_musictype"];
	private _trackclassname = "";

	switch (_musictype) do { 
		case "intense" : { _trackclassname = selectRandom XIM_aCombatSoundClassnames; }; // select a random track from the aCombatMusicClassnames array
		case "calm" : { _trackclassname = selectRandom XIM_aCalmSoundClassnames; };  // select a random track from the aCalmMusicClassnames array
	};
	_trackclassname; //Return classname
};

XIM_CKfncPlaySound = // run when XIM is not loaded
{

};

if (isClass (configFile >> "CfgPatches" >> "XIMCore")) then // if XIM is loaded
{
	_bXIMLoaded = true; // set _bXIMLoaded to false
}

else // if XIM is not loaded
{
	_bXIMLoaded = false; // set _bXIMLoaded to false
};

[_bXIMLoaded] spawn // run the following code in the scheduler, with _bXIMLoaded as a parameter
{
	params["_bXIMLoaded"]; // assign the value of parameter in position zero to the variable _bXIMLoaded
	waitUntil // wait until the following returns true
	{
		if (_bXIMLoaded) then // if XIM is loaded
		{
			{
				if (_x getVariable ["XIM_bCombat", false]) then
				{
					[_x, "intense"] call XIM_CKfncXIMPlaySound;
				}
				else
				{
					[_x, "calm"] call XIM_CKfncXIMPlaySound;
				};
			} forEach (allPlayers - entities "HeadlessClient_F"); // for every player, except headless clients
		}
		
		else // if XIM is not loaded
		{

		};
		sleep ((random 1) + 5); // sleep for a random number of time between 5 seconds and 6 seconds
		false; // run infinitely
	};
};