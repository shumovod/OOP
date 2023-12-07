#ifndef OOP_HEADERS_FIELD_CREATOR_H_
#define OOP_HEADERS_FIELD_CREATOR_H_

#include "event_health.h"
#include "event_move.h"
#include "event_score.h"
#include "../../lb_2/headers/field.h"

#include "../../lb_7/headers/ordinary_enemy.h"
#include "../../lb_7/headers/damage_player.h"
#include "../../lb_7/headers/random_move.h"
#include "../../lb_7/headers/push_player.h"
#include "../../lb_7/headers/search_player.h"

class FieldCreator {
 public:
    Field& level_one();
    Field& level_two();

 private: 
    Field field_;
    EventHealth event_h_;
    EventScore event_s_;
    EventMove event_m_;
};

#endif