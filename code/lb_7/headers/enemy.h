#ifndef OOP_HEADERS_ENEMY_H_
#define OOP_HEADERS_ENEMY_H_

class Control;
class Player;
class Field;

class Enemy {
 public:
    virtual int get_x() const = 0;
    virtual int get_y() const = 0;
    virtual void move(Player& player, Field& field) = 0;
    virtual void interact(Player& player, Control& control) = 0;
    virtual Enemy* create() const = 0;
};

#endif