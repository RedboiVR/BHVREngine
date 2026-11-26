/*
    Engine Definitions
*/
#pragma once
#include <string>
#include <string_view>
#include <filesystem>

namespace BHVR {
    namespace EngineDefinitions {
        /*
            Engine Configs. 
            Able to change these.
        */
        namespace Engine {
            // Metadata
            // The name of the BHVR Engine
            inline constexpr std::string_view name = "BHVR Engine";
            // Major version.
            inline constexpr int VER_MAJOR = 1;
            // Minor version.
            inline constexpr int VER_MINOR = 0;
            // Patch version.
            inline constexpr int VER_PATCH = 0;
        }  

        /*
            Path Configs.
        */
        namespace Paths {
            /*
            Game path. Automatically set when loading or
            creating a game.
            */
            inline std::filesystem::path GAME_PATH;
            /*
            Engine path. Where the engine is currently
            located.
            */
            inline std::filesystem::path ENG_PATH;
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
            inline std::filesystem::path L_PATH;
            /*
            Lua output path. Automatically set as the game
            path.
            */
            inline std::filesystem::path L_O_PATH;
            /*
            Lua compiler. Default is set as "luac".
            */
            inline std::string L_COMPILER = "luac";
        }
    }
}