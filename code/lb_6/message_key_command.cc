#include "headers/message_key_command.h"

std::string MessageKeyCommand::get_message() {
    return "A key was entered " + std::string(1, handler_.get_last_key()) + ", and the command was executed " + command_[handler_.get_last_action()] + "!";
}

MessageKeyCommand::MessageKeyCommand(Handler& handler) : handler_(handler) {
    command_[Actions::kMoveUp] = "up";
    command_[Actions::kMoveDown] = "down";
    command_[Actions::kMoveLeft] = "left";
    command_[Actions::kMoveRight] = "right";
    command_[Actions::kQuit] = "quit";
    command_[Actions::kYes] = "yes";
    command_[Actions::kNo] = "no";
    command_[Actions::kOne] = "one";
    command_[Actions::kTwo] = "two";
    command_[Actions::kThree] = "three";
}