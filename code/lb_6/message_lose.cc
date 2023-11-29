#include "headers/message_lose.h"

std::string MessageLose::get_message() {
    return "Player lose!\nCoordinates: (" + std::to_string(player_.get_x()) + ", " + std::to_string(player_.get_y()) + ")";
}

MessageLose::MessageLose(Player& player) : player_(player) {}