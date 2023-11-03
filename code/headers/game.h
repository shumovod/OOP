#ifndef OOP_HEADERS_GAME_H_
#define OOP_HEADERS_GAME_H_

#include "control.h"
#include "directions.h"
#include "field_creator.h"

class Game {
 public:
   void start();

 private:
   FieldCreator fieldCreator_;
   Field field_;
   Player player_;

   void chooseLevel();
   void play();
   void end();
};

#endif