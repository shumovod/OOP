#ifndef OOP_HEADERS_GAME_H_
#define OOP_HEADERS_GAME_H_

#include "field_creator.h"
#include "handler.h"

class Game {
 public:
   Game(Handler& handler);
   void start();

 private:
   void choose_level();
   void play();
   void end();
   
   Handler& handler_;
   FieldCreator field_creator_;
   Field field_;
   Player player_;
};

#endif