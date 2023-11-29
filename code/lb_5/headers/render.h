#ifndef OOP_HEADERS_RENDER_H
#define OOP_HEADERS_RENDER_H

#include "../../lb_1/headers/player.h"
#include "../../lb_2/headers/field.h"

class Render {
 public:
    virtual void print_start() const = 0;
    virtual void print_logger() const = 0;
    virtual void print_choose_logger() const = 0;
    virtual void print_level() const = 0;
    virtual void print_win() const = 0;
    virtual void print_lose() const = 0;
    virtual void print_player(Player& player) const = 0;
    virtual void print_field(Player& player, Field& field) const = 0;
    virtual void print_game() const = 0;
    virtual void print_new_game() const = 0;
    virtual void print_end() const = 0;
    virtual void clear() const = 0;
};

#endif