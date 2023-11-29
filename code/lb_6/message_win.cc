#include "headers/message_win.h"

std::string MessageWin::get_message() {
    return "Player win!\tHealth: " + std::to_string(player_.get_health()) + " Score: " + std::to_string(player_.get_score());
}

MessageWin::MessageWin(Player& player) : player_(player) {}