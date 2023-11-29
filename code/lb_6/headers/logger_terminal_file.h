#ifndef OOP_HEADERS_LOGGER_TERMINAL_FILE_H_
#define OOP_HEADERS_LOGGER_TERMINAL_FILE_H_

#include "logger_file.h"
#include "logger_terminal.h"

class LoggerTerminalFile : public Logger {
 public:
    void log(Message* message) override;

 private:
    LoggerTerminal logger_terminal_;
    LoggerFile logger_file_;
};

#endif