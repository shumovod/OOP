#ifndef OOP_HEADERS_LOGGER_TERMINAL_H_
#define OOP_HEADERS_LOGGER_TERMINAL_H_

#include <iostream>

#include "logger.h"

class LoggerTerminal : public Logger {
 public:
    void log(Message* message) override;
};

#endif