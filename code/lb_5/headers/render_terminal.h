#ifndef OOP_HEADERS_RENDER_TERMINAL_H
#define OOP_HEADERS_RENDER_TERMINAL_H

#include <typeinfo>

#include "../../lb_3/headers/event_health.h"
#include "../../lb_3/headers/event_move.h"
#include "../../lb_3/headers/event_score.h"
#include "render.h"

class RenderTerminal : public Render {
 public:
    void print_start() const override;
    void print_logger() const override;
    void print_choose_logger() const override;
    void print_level() const override;
    void print_win() const override;
    void print_lose() const override;
    void print_player(Player& player) const override;
    void print_field(Player& player, Field& field) const override;
    void print_game() const override;
    void print_new_game() const override;
    void print_end() const override;
    void clear() const override;
};

#endif