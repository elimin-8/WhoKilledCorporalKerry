// Below is the creation of arrays, that contain classnames of sound bites defined in config.cpp, randomized to make it fresh each time;
XIM_aCombatSoundClassnames = "'intense' in getArray (_x >> 'moods') " configClasses (configFile >> "CfgSounds") apply {configName _x} call BIS_fnc_arrayShuffle;
XIM_aCalmSoundClassnames = "'calm' in getArray (_x >> 'moods') " configClasses (configFile >> "CfgSounds") apply {configName _x} call BIS_fnc_arrayShuffle;



private _fncXIMSpawnObject = // run when XIM is loaded
{
	params["_oPlayer"];
};

private _fncSpawnObject = // run when XIM is not loaded
{

};

if (isClass (configFile >> "CfgPatches" >> "XIMCore")) then // if XIM is loaded
{
	private _bXIMLoaded = true; // set _bXIMLoaded to false
	_bXIMLoaded; // return _bXIMLoaded
}

else // if XIM is not loaded
{
	private _bXIMLoaded = false; // set _bXIMLoaded to false
	_bXIMLoaded; // return _bXIMLoaded
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

				};
			} forEach (allPlayers - entities "HeadlessClient_F"); // for every player, except headless clients
		}
		
		else // if XIM is not loaded
		{

		};
		sleep 10;
		false; // run infinitely
	};
};