#ifndef OOP_HEADERS_RANDOM_MOVE_H_
#define OOP_HEADERS_RANDOM_MOVE_H_

#include <cstdlib>

#include "../../lb_1/headers/directions.h"
#include "../../lb_2/headers/field.h"
#include "../../lb_1/headers/player.h"

class RandomMove {
 public:
    void move(int& x, int& y);
    RandomMove(Player& player, Field& field);

  private:
    Player& player_;
    Field& field_;
};

#endif