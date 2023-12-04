#ifndef OOP_HEADERS_GAME_H_
#define OOP_HEADERS_GAME_H_

#include <vector>

#include "../../lb_3/headers/field_creator.h"
#include "handler.h"
#include "../../lb_6/headers/logger_file.h"
#include "../../lb_6/headers/logger_terminal.h"
#include "../../lb_5/headers/tracker.h"

class Game {
 public:
   void start();
   Game(Input& input, Render& render);
   ~Game();

 private:   
   Input& input_;
   Render& render_;
   FieldCreator field_creator_;
   Field field_;
   std::vector<Logger*> logger_;
   bool flag_;

   void need_logger(Handler& handler, Tracker& tracker);
   void choose_level(Handler& handler, Tracker& tracker);
   void play(Player& player, Handler& handler, Tracker& tracker);
   void end(Handler& handler, Tracker& tracker);
};

#endif