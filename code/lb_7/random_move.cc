#include "headers/random_move.h"

void RandomMove::move(int& x, int& y) {
    int new_x, new_y;
    Directions direction;
    while (true) {
        new_x = x;
        new_y = y;
        direction = static_cast <Directions> (rand() % 4);
        switch (direction) {
        case Directions::kUp:
            new_y--;
            break;
        case Directions::kLeft:
            new_x--;
            break;
        case Directions::kDown:
            new_y++;
            break;
        case Directions::kRight:
            new_x++;
            break;
        }
        if ((abs(player_.get_x() - new_x) == 1 && (abs(player_.get_y() - new_y) == 0)) || (abs(player_.get_x() - new_x) == 0 && (abs(player_.get_y() - new_y) == 1))) { 
            if (field_.check(new_x, new_y) && field_.get_cell(new_x, new_y).get_passability()) {
                x = new_x;
                y = new_y;
            }
            break;
        }
    }
}

RandomMove::RandomMove(Player& player, Field& field) : player_(player), field_(field) {}