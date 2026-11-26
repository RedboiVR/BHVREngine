/*
    BHVR's Notification system implementation.
*/
#pragma once
#include "Notification.hpp"
#include <iostream>
#include <cstdlib>

namespace BHVR {
    namespace Notification {
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
                    std::exit(EXIT_FAILURE);
            }
        }
    }
}