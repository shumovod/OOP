#ifndef OOP_HEADERS_SEARCH_PLAYER_H_
#define OOP_HEADERS_SEARCH_PLAYER_H_

#include "../../lb_1/headers/directions.h"
#include "../../lb_2/headers/field.h"
#include "../../lb_1/headers/player.h"

class SearchPlayer {
 public:
    static void move(Player& player, Field& field, int& x, int& y);
 private:
    static void find(int** arr, int x, int y, int value, int& width, int& height);
};

#endif