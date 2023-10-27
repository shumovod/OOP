#include <iostream>

#include "headers/control.h"

int Control::range(int val, int min, int max) const {
    if (val < min)
        val = min;
    else if (val > max)
        val = max;
    return val;
}

void Control::move(Directions direction, int step_move) {
    int x = player_.get_x();
    int y = player_.get_y();
    switch (direction) {
        case Directions::kUp:
            y -= step_move;
            break;
        case Directions::kDown:
            y += step_move;
            break;
        case Directions::kLeft:
            x -= step_move;
            break;
        case Directions::kRight:
            x += step_move;
            break;
        default:
            std::cout << "Invalid direction!" << std::endl;
            break;
    }

    int normal_x = range(x, MIN_X, field_.get_width());
    int normal_y = range(y, MIN_Y, field_.get_height());

    if (field_.get_cell(normal_x, normal_y).get_passability()) {
        player_.set_x(normal_x);
        player_.set_y(normal_y);
        if (field_.get_cell(normal_x, normal_y).get_event())
            field_.get_cell(normal_x, normal_y).execute_event(*this);
    }
}

void Control::remove_health() { 
    player_.set_health(player_.get_health() - STEP_HEALTH); 
}

void Control::add_score() { 
    player_.set_score(player_.get_score() + STEP_SCORE); 
}

Control::Control(Player& player, Field& field) : player_(player), field_(field) {
    player_.set_x(field_.get_entrance_x());
    player_.set_y(field_.get_entrance_y());
}