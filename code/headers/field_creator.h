#ifndef OOP_HEADERS_FIELD_CREATOR_H_
#define OOP_HEADERS_FIELD_CREATOR_H_

#include "field.h"
#include "event_health.h"
#include "event_score.h"
#include "event_move.h"

class FieldCreator {
 public:
    Field level_one();
    Field level_two();

 private: 
    EventHealth* event_h_;
    EventScore* event_s_;
    EventMove* event_m_;
};

#endif