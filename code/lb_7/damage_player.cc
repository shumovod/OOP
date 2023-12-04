#include "headers/damage_player.h"

void DamagePlayer::interact(Control& control) {
    control.remove_health();
}