#ifndef OOP_HEADERS_ENEMY_H_
#define OOP_HEADERS_ENEMY_H_

#define MIN_X 0
#define MIN_Y 0

template <typename MoveScheme, typename InteractScheme>
class Enemy {
 public:
    int get_x() const;
    int get_y() const;

    void move();
    void interact();

    Enemy(int x = MIN_X, int y = MIN_Y);

 private:
    int x_, y_;
};

#endif