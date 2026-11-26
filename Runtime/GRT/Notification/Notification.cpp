/*
    BHVR's Notification system implementation.
*/
#pragma once
#include <iostream>
#include <cstdlib>

namespace BHVR {
    namespace Notification {
        enum class Type {
            LOG,
            WARNING,
            LIGHT_ERROR,
            FATAL_ERROR
        };
        void WriteMessage(Type type, const char *MSG){
            switch(type) {
                case Type::LOG:
                    std::cout << "$ " << MSG << '\n';
                    break;
                case Type::WARNING:
                    std::cout << "# " << MSG << '\n';
                    break;
                case Type::LIGHT_ERROR:
                    std::cout << "! " << MSG << '\n';
                    break;
                case Type::FATAL_ERROR:
                    std::cout << "!! " << MSG << '\n';
                    std::exit(1);
            }
        }
    }
}