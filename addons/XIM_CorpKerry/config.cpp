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

class Extended_PostInit_EventHandlers 
{
    class XIMCKStart // preinit event handler
    {
        init = "call compile preprocessFileLineNumbers '\XIM_CorpKerry\scripts\autostart\XEH_PostInit.sqf'";
    };
};

class CfgSounds
{
    class ActionInUganda
    {
        name = "Action in Uganda";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\ActionInUganda.ogg", db + 0, 1.0 };
        titles[] = {};
        // This is how we do action in uganda
    };

    class ActionIsComing
    {
        name = "Action is coming";
        moods[] = 
        {
            "calm",
        };
        sound[] = { "\XIM_CorpKerry\sounds\ActionIsComing.ogg", db + 0, 1.0 };
        titles[] = {};
        // Action is coming
    };

    class ActionPackedMovie
    {
        name = "Action packed movie";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\ActionPackedMovie.ogg", db + 0, 1.0 };
        titles[] = {};
        // Action packed movie
    };

    class Bastard
    {
        name = "Bastard";
        moods[] = 
        {
            "calm",
            "intense"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Bastard.ogg", db + 0, 1.0 };
        titles[] = {};
        // Bastard
    };

    class CaptainAlex
    {
        name = "Captain Alex";
        moods[] = 
        {
            "calm",
            "intense"
        };
        sound[] = { "\XIM_CorpKerry\sounds\CaptainAlex.ogg", db + 0, 1.0 };
        titles[] = {};
        // Captain Alex
    };

    class Combat
    {
        name = "Combat";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Combat.ogg", db + 0, 1.0 };
        titles[] = {};
        // Combat
    };

    class Commando1
    {
        name = "Commando 1";
        moods[] = 
        {
            "calm",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Commando1.ogg", db + 0, 1.0 };
        titles[] = {};
        // Commando
    };

    class Commando2
    {
        name = "Commando 2";
        moods[] = 
        {
            "calm",
            "intense"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Commando2.ogg", db + 0, 1.0 };
        titles[] = {};
        // Commando
    };

    
    class CommandoCommando
    {
        name = "Commando commando";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\CommandoCommando.ogg", db + 0, 1.0 };
        titles[] = {};
        // Commando commando
    };
        
    class Commandos
    {
        name = "Commandos";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Commandos.ogg", db + 0, 1.0 };
        titles[] = {};
        // Commandos
    };

    class DeadliestGang
    {
        name = "Deadliest gang";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\DeadliestGang.ogg", db + 0, 1.0 };
        titles[] = {};
        // Tiger mafia the most deadliest gang in uganda
    };

    class DeadlyCommandos
    {
        name = "Deadly commandos"
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\DeadlyCommandos.ogg", db + 0, 1.0 };
        titles[] = {};
        // Deadly commandos
    };

    class Dinosaurs
    {
        name = "Dinosaurs";
        moods[] = 
        {
            "calm",
            "intense"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Dinosaurs.ogg", db + 0, 1.0 };
        titles[] = {};
        // Dinosaurs
    };

    class EveryoneKnowsKungFu
    {
        name = "Everyone knows Kung Fu";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\EveryoneKnowsKungFu.ogg", db + 0, 1.0 };
        titles[] = {};
        // Everybody in uganda knows kung fu
    };

    class ExpectTheUnexpectable
    {
        name = "Expect the unexpectable";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\ExpectTheUnexpectable.ogg", db + 0, 1.0 };
        titles[] = {};
        // Expect the unexpectable
    };

    class GoForPanties
    {
        name = "Go for panties";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\GoForPanties.ogg", db + 0, 1.0 };
        titles[] = {};
        // Go for panties
    };

    class Hello1
    {
        name = "Hello 1";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Hello1.ogg", db + 0, 1.0 };
        titles[] = {};
        // Hello
    };

    class Hello2
    {
        name = "Hello 2";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Hello2.ogg", db + 0, 1.0 };
        titles[] = {};
        // Hello
    };

    class HellOfAFighter
    {
        name = "Hell of a fighter";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\HellOfAFighter.ogg", db + 0, 1.0 };
        titles[] = {};
        // One hell of a fighter warrior
    };

    class HellOfAMovie
    {
        name = "Hell of a movie";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\HellOfAMovie.ogg", db + 0, 1.0 };
        titles[] = {};
        // One hell of a movie
    };

    class Laugh1
    {
        name = "Laugh 1";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Laugh1.ogg", db + 0, 1.0 };
        titles[] = {};
        // he he he he
    };

    class Laugh2
    {
        name = "Laugh 2";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Laugh2.ogg", db + 0, 1.0 };
        titles[] = {};
        // he he he he he
    };

    class Laugh3
    {
        name = "Laugh 3";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Laugh3.ogg", db + 0, 1.0 };
        titles[] = {};
        // he he he he he
    };

    class MammaMia
    {
        name = "Mamma Mia";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\MammaMia.ogg", db + 0, 1.0 };
        titles[] = {};
        // Mamma mia
    };

    class MilitaryIsHere
    {
        name = "Military is here";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\MilitaryIsHere.ogg", db + 0, 1.0 };
        titles[] = {};
        // The military is here
    };

    class Movie
    {
        name = "Movie";
        moods[] = 
        {
            "calm",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Movie.ogg", db + 0, 1.0 };
        titles[] = {};
        // Movie
    };

    class MovieMovieMovie
    {
        name = "Movie movie movie";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\MovieMovieMovie.ogg", db + 0, 1.0 };
        titles[] = {};
        // Movie movie movie movie
    };

    class MoviesOn
    {
        name = "Movies on";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\MoviesOn.ogg", db + 0, 1.0 };
        titles[] = {};
        // The movies on the movies on
    };

    class MummyImScared
    {
        name = "Mummy I'm Scared";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\MummyImScared.ogg", db + 0, 1.0 };
        titles[] = {};
        // Mummy I'm scared
    };

    class NeverSeenAWoman
    {
        name = "Never seen a woman";
        moods[] = 
        {
            "calm",
        };
        sound[] = { "\XIM_CorpKerry\sounds\NeverSeenAWoman.ogg", db + 0, 1.0 };
        titles[] = {};
        // I've never seen a woman
    };

    class PantherMeetsTiger
    {
        name = "Panther meets tiger";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\PantherMeetsTiger.ogg", db + 0, 1.0 };
        titles[] = {};
        // The panther meets the tiger
    };

    class PreferMen
    {
        name = "Prefer men";
        moods[] = 
        {
            "calm",
        };
        sound[] = { "\XIM_CorpKerry\sounds\PreferMen.ogg", db + 0, 1.0 };
        titles[] = {};
        // I prefer men
    };

    class Production
    {
        name = "Production";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Production.ogg", db + 0, 1.0 };
        titles[] = {};
        // Production in action
    };

    class RapidAction
    {
        name = "Rapid action";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\RapidAction.ogg", db + 0, 1.0 };
        // Rapid action
    };

    class RapidGunFire
    {
        name = "Rapid gunfire";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\RapidGunFire.ogg", db + 0, 1.0 };
        titles[] = {};
        // Rapid gunfire
    };

    class RealAction
    {
        name = "Real action";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\RealAction.ogg", db + 0, 1.0 };
        titles[] = {};
        // Now it's time to see real action
    };

    class SupaDeadalier
    {
        name = "Supa Deadalier";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\SupaDeadalier.ogg", db + 0, 1.0 };
        titles[] = {};
        // Super deadlier
    };

    class SupaFighta
    {
        name = "Supa Fighta";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\SupaFighta.ogg", db + 0, 1.0 };
        // Super fighter
    };

    class SupaKicka
    {
        name = "Supa Kicka";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\SupaKicka.ogg", db + 0, 1.0 };
        titles[] = {};
        // Super kicker
    };

    class SupaMafia
    {
        name = "Supa Mafia";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\SupaMafia.ogg", db + 0, 1.0 };
        titles[] = {};
        // Super mafia
    };

    class SupaMafiaOnTheRun
    {
        name = "Supa mafia on the run";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\SupaMafiaOnTheRun", db + 0, 1.0 };
        titles[] = {};
        // Super mafia is on the run
    };

    class TheManIsKillingUs
    {
        name = "The man is killing us";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\TheManIsKillingUs.ogg", db + 0, 1.0 };
        titles[] = {};
        // Man the man is killing us man press the bomb over drop the bomb man
    };

    class ThisIsSerious
    {
        name = "This is serious";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\ThisIsSerious.ogg", db + 0, 1.0 };
        titles[] = {};
        // This is serious
    };

    class ThisIsUganda
    {
        name = "This is Uganda";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\ThisIsUganda.ogg", db + 0, 1.0 };
        titles[] = {};
        // This is uganda *slap*
    };

    class TigerInTheCage
    {
        name = "Tiger in the cage";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\TigerInTheCage.ogg", db + 0, 1.0 };
        titles[] = {};
        // The tiger is in the cage
    };

    class TigerMafia1
    {
        name = "Tiger mafia 1";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\TigerMafia1.ogg", db + 0, 1.0 };
        titles[] = {};
        // Tiger mafia
    };

    class TigerMafia2
    {
        name = "Tiger mafia 2";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\TigerMafia2.ogg", db + 0, 1.0 };
        titles[] = {};
        // Tiger mafia
    };

    class Uganda
    {
        name = "Uganda";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\Uganda.ogg", db + 0, 1.0 };
        titles[] = {};
        // Ugandaaaaaaaaaaaa
    };

    class UgandanBruceLee
    {
        name = "Ugandan Bruce Lee";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\UgandanBruceLee.ogg", db + 0, 1.0 };
        titles[] = {};
        // Ugandan bruce lee we call him bruce u
    };
    
    class UgandanCommando
    {
        name = "Ugandan commando";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\UgandanCommando.ogg", db + 0, 1.0 };
        titles[] = {};
        // The ugandan commando
    };

    class UsingAGun
    {
        name = "Using a gun";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\UsingAGun.ogg", db + 0, 1.0 };
        titles[] = {};
        // He knows the way of using a gun
    };

    class VJEmmieOnTheMic
    {
        name = "VJ Emmie on the mic";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\VJEmmieOnTheMic.ogg", db + 0, 1.0 };
        titles[] = {};
        // VJ emmie on the microphone
    };

    class WakandaForever
    {
        name = "Wakanda forever";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WakandaForever.ogg", db + 0, 1.0 };
        titles[] = {};
        // Wakanda forever aeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
    };

    class WalkSlow
    {
        name = "Walk slow";
        moods[] = 
        {
            "calm",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WalkSlow.ogg", db + 0, 1.0 };
        titles[] = {};
        // They walk slow cuz they think slow
    };

    class WannaGoHome
    {
        name = "Wanna go home";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WannaGoHome.ogg", db + 0, 1.0 };
        titles[] = {};
        // I wanna go home
    };

    class WarCry1
    {
        name = "War Cry 1";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WarCry1.ogg", db + 0, 1.0 };
        titles[] = {};
        // que que que que que que que que
    };

    class WarCry2
    {
        name = "War Cry 2";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WarCry2.ogg", db + 0, 1.0 };
        titles[] = {};
        // wadadow wadadow wadadow *explosion*
    };

    class WatchThis
    {
        name = "Watch this";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\WatchThis.ogg", db + 0, 1.0 };
        titles[] = {};
        // Watch a this
    };

    class WelcomeToUganda
    {
        name = "Welcome to Uganda";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\WelcomeToUganda.ogg", db + 0, 1.0 };
        titles[] = {};
        // Welcome to uganda
    };

    class WhatsHappening
    {
        name = "What's happening";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WhatsHappening.ogg", db + 0, 1.0 };
        titles[] = {};
        // What's happening
    };

    class WhatTheFu
    {
        name = "What the Fu-";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WhatTheFu.ogg", db + 0, 1.0 };
        titles[] = {};
        // What the fu-
    };

    class WhatTheHeck
    {
        name = "What the heck";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WhatTheHeck.ogg", db + 0, 1.0 };
        titles[] = {};
        // What the heck
    };

    class WhosTheBitch
    {
        name = "Who's the bitch";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\WhosTheBitch.ogg", db + 0, 1.0 };
        titles[] = {};
        // Who's the bitch
    };

    class WifeGoat
    {
        name = "Wife goat";
        moods[] = 
        {
            "intense",
        };
        sound[] = { "\XIM_CorpKerry\sounds\WifeGoat.ogg", db + 0, 1.0 };
        titles[] = {};
        // Get off my wife! Wife? I thought that is a goat
    };

    class WhyAreYouGay
    {
        name = "Why are you gay";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\WhyAreYouGay.ogg", db + 0, 1.0 };
        titles[] = {};
        // Why are you gay
    };

    class YouAreGay
    {
        name = "You are gay";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\YouAreGay.ogg", db + 0, 1.0 };
        titles[] = {};
        // You are gay
    };

    class Transgenda
    {
        name = "Transgenda";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\Transgenda.ogg", db + 0, 1.0 };
        titles[] = {};
        // You are a transgenda
    };

    class WhyBeGay
    {
        name = "Why be gay";
        moods[] = 
        {
            "intense",
            "calm"
        };
        sound[] = { "\XIM_CorpKerry\sounds\WhyBeGay.ogg", db + 0, 1.0 };
        titles[] = {};
        // Why should someone be gay
    };
};