#include "headers/push_player.h"

void PushPlayer::interact(Player& player, Control& control, int& x, int& y) {
    int player_x = player.get_x();
    int player_y = player.get_y();
    if (player_x == x && player_y == y + 1)
        control.move(Directions::kDown);
    else if (player_x == x && player_y == y - 1)
        control.move(Directions::kUp);
    else if (player_x == x - 1 && player_y == y)
        control.move(Directions::kLeft);
    else if (player_x == x + 1 && player_y == y)
        control.move(Directions::kRight);
}