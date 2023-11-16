#ifndef OOP_HEADERS_GAME_H_
#define OOP_HEADERS_GAME_H_

#include "field_creator.h"
#include "handler.h"

class Game {
 public:
   void start();
   Game(Handler& handler);

 private:   
   Handler& handler_;
   FieldCreator field_creator_;
   Field field_;

   void choose_level();
   void play();
   void end();
};

#endif