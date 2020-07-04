class CfgPatches
{
    class XIMCorpKerry
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
    class XIMCKStart // preinit event handler
    {
        init = "call compile preprocessFileLineNumbers '\XIM_CorpKerry\scripts\autostart\XEH_PreInit.sqf'";
    };
};

class CfgSounds
{
    class ActionInUganda
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\ActionInUganda.ogg", db + 0, 1.0 };
        // This is how we do action in uganda
    };

    class ActionIsComing
    {
        moods[] = 
        {
            "calm",
        };
        sound[] = { "\XIM_CorpKerry\sounds\ActionIsComing.ogg", db + 0, 1.0 };
        // Action is coming
    };

    class ActionPackedMovie
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\ActionPackedMovie.ogg", db + 0, 1.0 };
        // Action packed movie
    };

    class Bastard
    {
        moods[] = 
        {
            "calm",
            "intense"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Bastard.ogg", db + 0, 1.0 };
        // Bastard
    };

    class CaptainAlex
    {
        moods[] = 
        {
            "calm",
            "intense"
        };
        sound[] = { "\XIM_CorpKerry\sounds\CaptainAlex.ogg", db + 0, 1.0 };
        // Captain Alex
    };

    class Combat
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Combat.ogg", db + 0, 1.0 };
        // Combat
    };

    class Commando1
    {
        moods[] = 
        {
            "calm",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Commando1.ogg", db + 0, 1.0 };
        // Commando
    };

    class Commando2
    {
        moods[] = 
        {
            "calm",
            "intense"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Commando2.ogg", db + 0, 1.0 };
        // Commando
    };

    
    class CommandoCommando
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\CommandoCommando.ogg", db + 0, 1.0 };
        // Commando commando
    };
        
    class Commandos
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Commandos.ogg", db + 0, 1.0 };
        // Commandos
    };

    class DeadliestGang
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\DeadliestGang.ogg", db + 0, 1.0 };
        // Tiger mafia the most deadliest gang in uganda
    };

    class DeadlyCommandos
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\DeadlyCommandos.ogg", db + 0, 1.0 };
        // Deadly commandos
    };

    class Dinosaurs
    {
        moods[] = 
        {
            "calm",
            "intense"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Dinosaurs.ogg", db + 0, 1.0 };
        // Dinosaurs
    };

    class EveryoneKnowsKungFu
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\EveryoneKnowsKungFu.ogg", db + 0, 1.0 };
        // Everybody in uganda knows kung fu
    };

    class ExpectTheUnexpectable
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\ExpectTheUnexpectable.ogg", db + 0, 1.0 };
        // Expect the unexpectable
    };

    class GoForPanties
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\GoForPanties.ogg", db + 0, 1.0 };
        // Go for panties
    };

    class Hello1
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Hello1.ogg", db + 0, 1.0 };
        // Hello
    };

    class Hello2
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Hello2.ogg", db + 0, 1.0 };
        // Hello
    };

    class HellOfAFighter
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\HellOfAFighter.ogg", db + 0, 1.0 };
        // One hell of a fighter warrior
    };

    class HellOfAMovie
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\HellOfAMovie.ogg", db + 0, 1.0 };
        // One hell of a movie
    };

    class Laugh1
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Laugh1.ogg", db + 0, 1.0 };
        // he he he he
    };

    class Laugh2
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Laugh2.ogg", db + 0, 1.0 };
        // he he he he he
    };

    class Laugh3
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Laugh3.ogg", db + 0, 1.0 };
        // he he he he he
    };

    class MammaMia
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\MammaMia.ogg", db + 0, 1.0 };
        // Mamma mia
    };

    class MilitaryIsHere
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\MilitaryIsHere.ogg", db + 0, 1.0 };
        // The military is here
    };

    class Movie
    {
        moods[] = 
        {
            "calm",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Movie.ogg", db + 0, 1.0 };
        // Movie
    };

    class MovieMovieMovie
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\MovieMovieMovie.ogg", db + 0, 1.0 };
        // Movie movie movie movie
    };

    class MoviesOn
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\MoviesOn.ogg", db + 0, 1.0 };
        // The movies on the movies on
    };

    class MummyImScared
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\MummyImScared.ogg", db + 0, 1.0 };
        // Mummy I'm scared
    };

    class NeverSeenAWoman
    {
        moods[] = 
        {
            "calm",
        };
        sound[] = { "\XIM_CorpKerry\sounds\NeverSeenAWoman.ogg", db + 0, 1.0 };
        // I've never seen a woman
    };

    class PantherMeetsTiger
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\PantherMeetsTiger.ogg", db + 0, 1.0 };
        // The panther meets the tiger
    };

    class PreferMen
    {
        moods[] = 
        {
            "calm",
        };
        sound[] = { "\XIM_CorpKerry\sounds\PreferMen.ogg", db + 0, 1.0 };
        // I prefer men
    };

    class Production
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Production.ogg", db + 0, 1.0 };
        // Production in action
    };

    class RapidAction
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\RapidAction.ogg", db + 0, 1.0 };
        // Rapid action
    };

    class RapidGunFire
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\RapidGunFire.ogg", db + 0, 1.0 };
        // Rapid gun fire
    };

    class RealAction
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\RealAction.ogg", db + 0, 1.0 };
        // Now it's time to see real action
    };

    class SupaDeadalier
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\SupaDeadalier.ogg", db + 0, 1.0 };
        // Super deadlier
    };

    class SupaFighta
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\SupaFighta.ogg", db + 0, 1.0 };
        // Super fighter
    };

    class SuperKicka
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\SupaKicka.ogg", db + 0, 1.0 };
        // Super kicker
    };

    class SupaMafia
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\SupaMafia.ogg", db + 0, 1.0 };
        // Super mafia
    };

    class SupaMafiaOnTheRun
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\SupaMafiaOnTheRun", db + 0, 1.0 };
        // Super mafia is on the run
    };

    class TheManIsKillingUs
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\TheManIsKillingUs.ogg", db + 0, 1.0 };
        // Man the man is killing us man press the bomb over drop the bomb man
    };

    class ThisIsSerious
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\ThisIsSerious.ogg", db + 0, 1.0 };
        // This is serious
    };

    class ThisIsUganda
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\ThisIsUganda.ogg", db + 0, 1.0 };
        // This is uganda *slap*
    };

    class TigerInTheCage
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\TigerInTheCage.ogg", db + 0, 1.0 };
        // The tiger is in the cage
    };

    class TigerMafia1
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\TigerMafia1.ogg", db + 0, 1.0 };
        // Tiger mafia
    };

    class TigerMafia2
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\TigerMafia2.ogg", db + 0, 1.0 };
        // Tiger mafia
    };

    class Uganda
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Uganda.ogg", db + 0, 1.0 };
        // Ugandaaaaaaaaaaaa
    };

    class UgandanBruceLee
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\UgandanBruceLee.ogg", db + 0, 1.0 };
        // Ugandan bruce lee we call him bruce u
    };
    
    class UgandanCommando
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\UgandanCommando.ogg", db + 0, 1.0 };
        // The ugandan commando
    };

    class UsingAGun
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\UsingAGun.ogg", db + 0, 1.0 };
        // He knows the way of using a gun
    };

    class VJEmmieOnTheMic
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\VJEmmieOnTheMic.ogg", db + 0, 1.0 };
        // VJ emmie on the microphone
    };

    class WakandaForever
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WakandaForever.ogg", db + 0, 1.0 };
        // Wakanda forever aeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
    };

    class WalkSlow
    {
        moods[] = 
        {
            "calm",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WalkSlow.ogg", db + 0, 1.0 };
        // They walk slow cuz they think slow
    };

    class WannaGoHome
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WannaGoHome.ogg", db + 0, 1.0 };
        // I wanna go home
    };

    class WarCry
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WarCry.ogg", db + 0, 1.0 };
        // que que que que que que que que
    };

    class WarCry2
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WarCry2.ogg", db + 0, 1.0 };
        // wadadow wadadow wadadow *explosion*
    };

    class WatchThis
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\WatchThis.ogg", db + 0, 1.0 };
        // Watch a this
    };

    class WelcomeToUganda
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\WelcomeToUganda.ogg", db + 0, 1.0 };
        // Welcome to uganda
    };

    class WhatsHappening
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WhatsHappening.ogg", db + 0, 1.0 };
        // What's happening
    };

    class WhatTheFu
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WhatTheFu.ogg", db + 0, 1.0 };
        // What the fu-
    };

    class WhatTheHeck
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WhatTheHeck.ogg", db + 0, 1.0 };
        // What the heck
    };

    class WhosTheBitch
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\WhosTheBitch.ogg", db + 0, 1.0 };
        // Who's the bitch
    };

    class WifeGoat
    {
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WifeGoat.ogg", db + 0, 1.0 };
        // Get off my wife! Wife? I thought that is a goat
    };

    class WhyAreYouGay
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\WhyAreYouGay.ogg", db + 0, 1.0 };
        // Why are you gay
    };

    class YouAreGay
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\YouAreGay.ogg", db + 0, 1.0 };
        // You are gay
    };

    class Transgenda
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Transgenda.ogg", db + 0, 1.0 };
        // You are a transgenda
    };

    class WhyBeGay
    {
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\WhyBeGay.ogg", db + 0, 1.0 };
        // Why should someone be gay
    };
};