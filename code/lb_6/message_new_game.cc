#include "headers/message_new_game.h"

std::string MessageNewGame::get_message() {
    return "A new game has been launched!\tSize: (" + std::to_string(field_.get_width()) + ", " + std::to_string(field_.get_height()) + 
           ")  Coordinates start: (" + std::to_string(field_.get_entrance_x()) + ", " + std::to_string(field_.get_entrance_y()) + ")";
}

MessageNewGame::MessageNewGame(Field& field) : field_(field) {}