#ifndef OOP_HEADERS_RENDER_TERMINAL_H
#define OOP_HEADERS_RENDER_TERMINAL_H

#include "render.h"

class RenderTerminal : public Render {
 public:
    void print_start() const override;
    void print_level() const override;
    void print_win() const override;
    void print_lose() const override;
    void print_player(Player& player) const override;
    void print_field(Player& player, Field& field) const override;
    void print_new_game() const override;
    void print_end() const override;
};

#endif