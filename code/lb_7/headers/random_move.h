#ifndef OOP_HEADERS_RANDOM_MOVE_H_
#define OOP_HEADERS_RANDOM_MOVE_H_

#include <cstdlib>

#include "../../lb_1/headers/directions.h"
#include "../../lb_2/headers/field.h"
#include "../../lb_1/headers/player.h"

class RandomMove {
 public:
    static void move(Player& player, Field& field, int& x, int& y);
};

#endif