#ifndef OOP_HEADERS_PUSH_PLAYER_H_
#define OOP_HEADERS_PUSH_PLAYER_H_

#include "../../lb_1/headers/control.h"

class PushPlayer {
 public:
    static void interact(Player& player, Control& control, int& x, int& y);
};

#endif