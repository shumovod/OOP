#ifndef OOP_HEADERS_EVENT_MOVE_H_
#define OOP_HEADERS_EVENT_MOVE_H_

#include "../../lb_1/headers/control.h"
#include "event.h"

class EventMove : public Event {
 public:
    void execute(Control& control) override;
    Event* create() const override;
};

#endif