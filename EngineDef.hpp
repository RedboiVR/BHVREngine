/*
    Engine Definitions
*/
#pragma once
#include <string>

namespace BHVR {
    namespace EngineDefinitions {
        /*
            Engine Configs. 
            Able to change these.
        */
        namespace Engine {
            // Metadata
            // The name of the BHVR Engine
            inline const std::string name = "BHVR Engine";
            // Major version.
            inline constexpr int VER_MAJOR = 1;
            // Minor version.
            inline constexpr int VER_MINOR = 0;
            // Patch version.
            inline constexpr int VER_PATCH = 0;
        }  

        /*
            Directory Configs.
        */
        namespace Directories {
            /*
            Game path. Automatically set when loading or
            creating a game.
            */
            std::string GAME_PATH;
            /*
            Engine path. Where the engine is currently
            located.
            */
            std::string ENG_PATH;
        }

        /*
            Lua Configs.
            BHVR uses Lua as its primary scripting language.
            It compiles lua to luac and then uses its own
            virtual machine to run it.
        */
        namespace Lua {
            /*
            Lua path. Uses lua to compile every lua source file
            to luac.
            */
            std::string L_DIR;
            /*
            Lua output path. Automatically set as the game
            path.
            */
            std::string L_O_PATH;
            /*
            Lua compiler. Default is set as "luac".
            */
            inline std::string L_COMPILER = "luac";
        }
    }
}