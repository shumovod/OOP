#ifndef OOP_HEADERS_CELL_H_
#define OOP_HEADERS_CELL_H_

#include <iostream>

#include "event.h"

class Cell {
 public:
    bool get_passability() const;
    bool is_event() const;

    Event* get_event();

    void set_passability(bool passability); 
    void set_event(Event* event);

    void execute_event(Control& control);

    Cell& operator = (const Cell& other); 
    Cell& operator = (Cell&& other) noexcept; 

    Cell(const Cell& other);
    Cell(Cell&& other) noexcept; 
    Cell(bool passability = true, Event* event = nullptr);
    ~Cell();

 private:
    bool passability_;
    Event* event_;
};

#endif