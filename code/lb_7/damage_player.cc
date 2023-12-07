#include "headers/damage_player.h"

void DamagePlayer::interact(Player& player, Control& control, int& x, int& y) {
    control.remove_health();
}