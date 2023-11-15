#include "headers/event_score.h"

void EventScore::execute(Control& control) {
    control.add_score();
}

Event* EventScore::create() const {
    return new EventScore;
}