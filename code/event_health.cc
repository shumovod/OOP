#include "headers/control.h"
#include "headers/event_health.h"

void EventHealth::execute(Control& control) {
    control.remove_health();
}

Event* EventHealth::create() const {
    return new EventHealth;
}