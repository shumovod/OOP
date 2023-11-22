#ifndef OOP_HEADERS_GAME_H_
#define OOP_HEADERS_GAME_H_

#include "field_creator.h"
#include "handler.h"
#include "tracker.h"

class Game {
 public:
   void start();
   Game(Input& input, Render& render);

 private:   
   Input& input_;
   Render& render_;
   FieldCreator field_creator_;
   Field field_;

   void choose_level(Handler& handler, Tracker& tracker);
   void play(Player& player, Handler& handler, Tracker& tracker);
   void end(Handler& handler, Tracker& tracker);
};

#endif