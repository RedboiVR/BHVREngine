/*
    BHVR's Notification system declaration.
*/
#pragma once

namespace BHVR {
    namespace Notification {
        enum class Type {
            LOG,
            WARNING,
            LIGHT_ERROR,
            NORM_ERROR,
            FATAL_ERROR
        };
        void WriteMessage(Type type, const char *MSG);
    }
}