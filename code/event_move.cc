#include "headers/event_move.h"

void EventMove::execute(Control& control) {
    control.move(Directions::kRight, 2);
}

Event* EventMove::create() const {
    return new EventMove;
}