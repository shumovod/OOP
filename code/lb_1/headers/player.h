#ifndef OOP_HEADERS_PLAYER_H_
#define OOP_HEADERS_PLAYER_H_

#define MIN_HEALTH 0
#define MAX_HEALTH 3
#define MIN_SCORE 0
#define MIN_X 0
#define MIN_Y 0

class Player {
 public:
   int get_health() const;
   int get_score() const;
   int get_x() const;
   int get_y() const;

   void set_health(int health);
   void set_score(int score);
   void set_x(int x);
   void set_y(int y);

   Player();

 private:
   int health_; 
   int score_;
   int x_, y_;
};

#endif