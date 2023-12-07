#ifndef OOP_HEADERS_DAMAGE_PLAYER_H_
#define OOP_HEADERS_DAMAGE_PLAYER_H_

#include "../../lb_1/headers/control.h"

class DamagePlayer {
 public:
    static void interact(Player& player, Control& control, int& x, int& y);
};

#endif