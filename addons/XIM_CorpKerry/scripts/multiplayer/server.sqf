// Below is the creation of arrays, that contain classnames of sound bites defined in config.cpp, randomized to make it fresh each time;
XIM_aCombatSoundClassnames = "'intense' in getArray (_x >> 'moods') " configClasses (configFile >> "CfgSounds") apply {configName _x} call BIS_fnc_arrayShuffle;
XIM_aCalmSoundClassnames = "'calm' in getArray (_x >> 'moods') " configClasses (configFile >> "CfgSounds") apply {configName _x} call BIS_fnc_arrayShuffle;
XIM_aAllSoundClassnames = XIM_aCombatSoundClassnames + XIM_aCalmSoundClassnames;
XIM_aAllSoundClassnames = XIM_aAllSoundClassnames call BIS_fnc_arrayShuffle;

// ====================================== FUNCTIONS ======================================

XIM_CKfncPlaySound = // plays a random sound on the player's entire group
{
	params["_oPlayer", ["_sMusicType", ""]];

	if (_sMusicType == "") then // if XIM is not loaded
	{
		private _cSound = selectRandom XIM_aAllSoundClassnames;
		[_cSound] remoteExecCall ["playSound", group _oPlayer, false];
	}

	else // if XIM is loaded
	{
		private _cSound = [_sMusicType] call XIM_CKfncTrackSelect;
		[_cSound] remoteExecCall ["playSound", group _oPlayer, false];
	};
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

[] spawn // run the following code in the scheduler, with _bXIMLoaded as a parameter
{
	params["_bXIMLoaded"]; // assign the value of parameter in position zero to the variable _bXIMLoaded

	private _bXIMLoaded = false;

	if (isClass (configFile >> "CfgPatches" >> "XIMCore")) then // if XIM is loaded
	{
		_bXIMLoaded = true; // set _bXIMLoaded to true
	}

	else // if XIM is not loaded
	{
		_bXIMLoaded = false; // set _bXIMLoaded to false
	};
	waitUntil // wait until the following returns true
	{
		if (_bXIMLoaded) then // if XIM is loaded
		{
			private _oPlayer = selectRandom (allPlayers - entities "HeadlessClient_F"); // select a random player
			if (_oPlayer getVariable ["XIM_bCombat", false]) then
			{
				[_oPlayer, "intense"] call XIM_CKfncPlaySound;
			}
			else
			{
				[_oPlayer, "calm"] call XIM_CKfncPlaySound;
			};
		}
		
		else // if XIM is not loaded
		{
			private _oPlayer = selectRandom (allPlayers - entities "HeadlessClient_F"); // select a random player
			[_oPlayer] call XIM_CKfncPlaySound;
		};
		sleep ((random 1) + 5); // sleep for a random number of time between 5 seconds and 6 seconds
		false; // run infinitely
	};
};