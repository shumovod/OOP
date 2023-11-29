#include "headers/logger_file.h"

void LoggerFile::log(Message* message) {
    file_ << message -> get_message() << std::endl;
}

LoggerFile::LoggerFile() {
    file_.open("../reports/lb_6/log");
    if (!file_.is_open()) {
        std::cout << "Error opening file!" << std::endl;
    }
}

LoggerFile::~LoggerFile() {
    if (file_.is_open())
        file_.close();
}