#include "headers/random_move.h"

void RandomMove::move(Player& player, Field& field, int& x, int& y) {
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
        if ((field.check(new_x, new_y) && field.get_cell(new_x, new_y).get_passability()) && (player.get_x() != new_x || player.get_y() != new_y)) {
            x = new_x;
            y = new_y;
            break;
        }
    }
}