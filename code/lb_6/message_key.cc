#include "headers/message_key.h"

std::string MessageKey::get_message() {
    return "A key was entered " + std::string(1, handler_.get_last_key()) + ", but no command worked!";
}

MessageKey::MessageKey(Handler& handler) : handler_(handler) {}