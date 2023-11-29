#ifndef OOP_HEADERS_LOGGER_FILE_H_
#define OOP_HEADERS_LOGGER_FILE_H_

#include <iostream>
#include <fstream>

#include "logger.h"

class LoggerFile : public Logger {
 public:
    void log(Message* message) override;
    LoggerFile();
    ~LoggerFile();
 private:
    std::ofstream file_;
};

#endif