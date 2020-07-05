// Below is the creation of arrays, that contain classnames of sound bites defined in config.cpp, randomized to make it fresh each time;
// ====================================== GLOBAL VARIABLES ======================================

XIM_aCombatSoundClassnames = "'intense' in getArray (_x >> 'moods') " configClasses (configFile >> "CfgSounds") apply {configName _x} call BIS_fnc_arrayShuffle;
XIM_aCalmSoundClassnames = "'calm' in getArray (_x >> 'moods') " configClasses (configFile >> "CfgSounds") apply {configName _x} call BIS_fnc_arrayShuffle;
XIM_aAllSoundClassnames = XIM_aCombatSoundClassnames + XIM_aCalmSoundClassnames;
XIM_aAllSoundClassnames = XIM_aAllSoundClassnames call BIS_fnc_arrayShuffle;

// ====================================== FUNCTIONS ======================================

XIM_CK_fncPlaySound = // plays a random sound on the player's entire group
{
	params["_oPlayer", ["_sMusicType", ""]];

	if (_sMusicType == "") then // if XIM is not loaded
	{
		private _cSound = selectRandom XIM_aAllSoundClassnames; // select a random sound from the XIM_aAllSoundClassnames array, and store it in _cSound
		[_cSound] remoteExecCall ["playSound", group _oPlayer, false]; // execute playSound on the player's group with _cSound as the argument
	}

	else // if XIM is loaded
	{
		private _cSound = [_sMusicType] call XIM_CK_fncTrackSelect; // call XIM_CK_fncTrackSelect with the argument _sMusicType, and store the returned value in _cSound
		[_cSound] remoteExecCall ["playSound", group _oPlayer, false]; // execute playSound on the player's group with _cSound as the argument
	};
};

XIM_CK_fncTrackSelect =  // select a random track depending on the parameter in position zero
{
	params ["_musictype"];

	private _trackclassname = "";

	switch (_musictype) do { 
		case "intense" : { _trackclassname = selectRandom XIM_aCombatSoundClassnames; }; // select a random track from the aCombatMusicClassnames array
		case "calm" : { _trackclassname = selectRandom XIM_aCalmSoundClassnames; };  // select a random track from the aCalmMusicClassnames array
	};
	_trackclassname; //Return classname
};

// ====================================== MAIN CODE ======================================

[] spawn // run the following code in the scheduler, with _bXIMLoaded as a parameter
{
	params["_bXIMLoaded"]; // assign the value of parameter in position zero to the variable _bXIMLoaded

	private _bXIMLoaded = false; // declares _bXIMLoaded, with the default value of false

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
		private _oPlayer = objNull; // declares _oPlayer, with the default value of objNull

		if (_bXIMLoaded) then // if XIM is loaded
		{
			{
				{
					if (_x getVariable ["XIM_bCombatMaster", false]) then // if the iterated unit is a combat master
					{
						_bCombatMasterExists = true; // set _bCombatMasterExists to true
					};
				} forEach (units (group _x)); // for every player in the player's group

				if ((!(_bCombatMasterExists)) or (_x getVariable ["XIM_bCombatMaster", false])) then // if the combat master does not exist, or the currently selected player
																									 // is a combat master then
				{
					_oPlayer = _x; // assign the currently iterated player to _oPlayer
				};

			} forEach (allPlayers - entities "HeadlessClient_F"); // for every player, except headless clients

			if (_oPlayer getVariable ["XIM_bCombat", false]) then // if the player is in combat
			{
				[_oPlayer, "intense"] call XIM_CK_fncPlaySound; // call XIM_CK_fncPlaySound with the arguments _oPlayer and "intense"
				sleep ((random XIM_CK_iCombatDelay) + 5); // sleep for a random number of time between 5 seconds and 35 seconds
			}

			else
			{
				[_oPlayer, "calm"] call XIM_CK_fncPlaySound; // call XIM_CK_fncPlaySound with the arguments _oPlayer and "calm"
				sleep ((random XIM_CK_iCalmDelay) + 5); // sleep for a random number of time between 5 seconds and 65 seconds
			};
		}
		
		else // if XIM is not loaded
		{
			private _oPlayer = selectRandom (allPlayers - entities "HeadlessClient_F"); // select a random player
			[_oPlayer] call XIM_CK_fncPlaySound; // call XIM_CK_fncPlaySound with the argument _oPlayer
			sleep ((random XIM_CK_iGeneralDelay) + 5); // sleep for a random number of time between 5 seconds and 55 seconds
		};

		false; // run infinitely
	};
};