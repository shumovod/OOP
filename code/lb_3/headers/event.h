#ifndef OOP_HEADERS_EVENT_H_
#define OOP_HEADERS_EVENT_H_

class Control;

class Event {
 public:
    virtual void execute(Control& control) = 0;
    virtual Event* create() const = 0;
};

#endif