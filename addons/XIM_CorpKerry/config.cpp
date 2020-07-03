class CfgPatches
{
    class XIMCore
    {
        name = "Who Killed Corporal Kerry?";
        author = "x00010";
        requiredVersion = 1.98;

        requiredAddons[] = 
        {  
            "cba_settings"
        };

        units[] = {};
        weapons[] = {};
    };
};

class Extended_PreInit_EventHandlers 
{
    class XIMCoreStart // preinit event handler
    {
        init = "call compile preprocessFileLineNumbers '\XIM_CorpKerry\scripts\autostart\XEH_PreInit.sqf'";
    };
};

class CfgMusic
{
    class
    {
        name = "";
        artist = "";
        moods[] = 
        {

        };
        sound[] = { "", db + 0, 1.0 };
    };
    class ActionInUganda
    {
        name = "";
        artist = "";
        moods[] = 
        {
            "intense"
        };
        sound[] = { "", db + 0, 1.0 };
    };
};