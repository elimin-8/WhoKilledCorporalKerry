// put cba debug setting stuff here

if (isMultiplayer) then // if client is in multiplayer
{	
	if (isServer) then // if the client is a dedicated server, or player host, either way it runs on machine id 2
	{
            [
            "XIM_CKCombatDelay", // the name of the variable which the output from the slider is assigned to
            "SLIDER", // interactive slider setting type
            ["Max delay when in combat", "The maximum delay between sounds being played when in combat."], // name and tooltip for the setting
            ["XIM - Who Killed Captain Alex", "Delay variables"], // category the setting is in, plus a subcategory
            [1, 300, 30, 0], // minimum of 1, maximum of 300, default of 60, no decimals
            nil, // disables synchronising the variable across clients, as it is not needed
            {} // executes nothing when the setting is changed, as it is not necessary
        ] call cba_settings_fnc_init;
        
        [
            "XIM_CKCalmDelay", // the name of the variable which the output from the slider is assigned to
            "SLIDER", // interactive slider setting type
            ["Max delay when calm", "The maximum delay between sounds being played when not in combat."], // name and tooltip for the setting
            ["XIM - Who Killed Captain Alex", "Delay variables"], // category the setting is in, plus a subcategory
            [1, 300, 60, 0], // minimum of 1, maximum of 300, default of 60, no decimals
            nil, // disables synchronising the variable across clients, as it is not needed
            {} // executes nothing when the setting is changed, as it is not necessary
        ] call cba_settings_fnc_init;

		execVM "\XIM_CorpKerry\scripts\multiplayer\server.sqf"; // executes server.sqf
	};
} 
else // if client is in singleplayer
{
    [
        "XIM_CKCalmDelay", // the name of the variable which the output from the slider is assigned to
        "SLIDER", // interactive slider setting type
        ["Max delay when calm", "The maximum delay between sounds being played when not in combat."], // name and tooltip for the setting
        ["XIM - Who Killed Captain Alex", "Delay variables"], // category the setting is in, plus a subcategory
        [1, 300, 60, 0], // minimum of 1, maximum of 300, default of 60, no decimals
        nil, // disables synchronising the variable across clients, as it is not needed
        {} // executes nothing when the setting is changed, as it is not necessary
    ] call cba_settings_fnc_init;

    [
        "XIM_CKCombatDelay", // the name of the variable which the output from the slider is assigned to
        "SLIDER", // interactive slider setting type
        ["Max delay when in combat", "The maximum delay between sounds being played when in combat."], // name and tooltip for the setting
        ["XIM - Who Killed Captain Alex", "Delay variables"], // category the setting is in, plus a subcategory
        [1, 300, 30, 0], // minimum of 1, maximum of 300, default of 30, no decimals
        nil, // disables synchronising the variable across clients, as it is not needed
        {} // executes nothing when the setting is changed, as it is not necessary
    ] call cba_settings_fnc_init;

	execVM "\XIM_CorpKerry\scripts\singleplayer\client.sqf"; // executes client.sqf
};