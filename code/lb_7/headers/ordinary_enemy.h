#ifndef OOP_HEADERS_ORDINARY_ENEMY_H_
#define OOP_HEADERS_ORDINARY_ENEMY_H_

#include "../../lb_1/headers/control.h"
#include "enemy.h"

#define MIN_X 0
#define MIN_Y 0

template <class MoveScheme, class InteractScheme>
class OrdinaryEnemy : public Enemy {
 public:
   int get_x() const override {
      return x_;
   }

   int get_y() const override {
      return y_;
   }

   void move(Player& player, Field& field) override {
      MoveScheme::move(player, field, x_, y_);
   }

   void interact(Player& player, Control& control) override {
      InteractScheme::interact(player, control, x_, y_);
   }

   Enemy* create() const override {
      return new OrdinaryEnemy <MoveScheme, InteractScheme>(x_, y_);
   }

   OrdinaryEnemy(int x = MIN_X, int y = MIN_Y) : x_(x), y_(y) {}

 private:
    int x_, y_;
    
};

#endif