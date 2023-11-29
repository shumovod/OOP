#include "headers/logger_terminal_file.h"

void LoggerTerminalFile::log(Message* message) {
    logger_terminal_.log(message);
    logger_file_.log(message);
}