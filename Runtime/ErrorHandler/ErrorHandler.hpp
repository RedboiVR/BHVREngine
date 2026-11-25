/*
    The BHVR Error Diagnostic System Definition.
*/
#pragma once
namespace ErrorHandler {
    class Diagnostic {
        public:
            static void Log(const char *Message);
            static void Warn(const char *Message);
            static void Err(const char *Message);
            static void Fatal(const char *Message);
    };
    enum class DiagnosticLevel {
        Log,
        Warning,
        Error,
        FatalError
    };
}