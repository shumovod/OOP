#ifndef OOP_HEADERS_TRACKER_H_
#define OOP_HEADERS_TRACKER_H_

#include "render.h"
#include "states.h"

class Tracker {
 public:
    void check_state(States state) const;
    Tracker(Render& render, Player& player, Field& field);

 private:
    Render& render_;
    Player& player_;
    Field& field_;
};

#endif