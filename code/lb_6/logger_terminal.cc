#include "headers/logger_terminal.h"

void LoggerTerminal::log(Message* message) {
    std::cout << message -> get_message() << std::endl;
}