#include "script_component.hpp"

#ifndef POTATO_LEAN_RHS_CUP_HLC

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = { "potato_fakeNVG", "potato_arifle_RPK" };
        magazines[] = {
            "potato_75Rnd_762x39mm_tracer", "200Rnd_65x39_cased_Box_Tracer_Red",
            "200Rnd_65x39_cased_Box_Tracer_Green", "100Rnd_65x39_cased_Box_Tracer_Yellow",
            "100Rnd_65x39_cased_Box_Tracer_Red", "100Rnd_65x39_cased_Box_Tracer_Green",
            "150Rnd_762x54_Box_Tracer_Red", "150Rnd_762x54_Box_Tracer_Yellow",
            "100Rnd_762x54_Box_Tracer_Green", "100Rnd_762x54_Box_Tracer_Red",
            "100Rnd_762x54_Box_Tracer_Yellow"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "potato_core", "ace_ui", "ace_fortify",
            "rhs_main_loadorder",
            "CUP_Weapons_LoadOrder", "CUP_Vehicles_LoadOrder", "CUP_Creatures_People_LoadOrder",
            "Chernarus", "torabora", "fallujah_hou",
            "DSA_Spooks", "mbg_celle2", "AMP_Breaching_Charge",
            "jsrs_soundmod_cup_weapons", "jsrs_soundmod_cfg_cup_weapons"
        };
        author = "Potato";
        authors[] = {"PabstMirror", "AACO"};
        authorUrl = "https://github.com/BourbonWarfare/POTATO";
        VERSION_CONFIG;
    };
    BWC_CONFIG(potato_fortify);
};

// Discord Rich Presence
class CfgDiscordRichPresence {
    applicationID="1059590927930368170";                                    // Provided by discord
    defaultDetails="BW ARMA";                                               // Upper text
    defaultState="https://bourbonwarfare.com/";                             // Lower text  
    defaultLargeImageKey="bwlogo";                                          // Large image
    defaultLargeImageText="";                                               // Large image hover text
    defaultSmallImageKey="";                                                // Small image
    defaultSmallImageText="";                                               // Small image hover text
    defaultButtons[]={};                                                    // Button texts and urls
    useTimeElapsed=1;                                                       // Show time elapsed since the player connected (1 - true, 0 - false)
};

// Fix CELLE font error: (reqAddon: "mbg_celle2")
class CfgLocationTypes {
    class MBG_celle2_icon_A7 {
        font = "PuristaMedium";
    };
};

// Undo ACE's changes to system messages text brightness
class RscChatListDefault {
    colorBackground[] = {0,0,0,0.3};
    colorMessageProtocol[] = {0.65,0.65,0.65,0.9};
};

#include "CfgAmmo.hpp"
#include "CfgEden.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgFontFamilies.hpp"

#endif
