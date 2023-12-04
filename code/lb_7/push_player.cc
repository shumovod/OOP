#include "headers/push_player.h"

void PushPlayer::interact(Control& control) {
    control.move(Directions::kBack);
}