#ifndef OOP_HEADERS_EVENT_HEALTH_H_
#define OOP_HEADERS_EVENT_HEALTH_H_

#include "control.h"
#include "event.h"

class EventHealth : public Event {
 public:
    void execute(Control& control) override;
    Event* create() const override;
};

#endif