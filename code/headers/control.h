#ifndef OOP_HEADERS_CONTROL_H_
#define OOP_HEADERS_CONTROL_H_

#include "directions.h"
#include "field.h"
#include "player.h"

#define STEP_HEALTH 1
#define STEP_SCORE 10

class Control {
 public:
   void move(Directions direction, int step_move = 1);
   void remove_health();
   void add_score();

   Control(Player& player, Field& field);

 private:
   Player& player_;
   Field& field_;
};

#endif