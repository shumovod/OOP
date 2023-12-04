#include "headers/enemy.h"

template <typename MoveScheme, typename InteractScheme>
int Enemy <MoveScheme, InteractScheme> ::get_x() const {
    return x_;
}

template <typename MoveScheme, typename InteractScheme>
int Enemy <MoveScheme, InteractScheme> ::get_y() const {
    return y_;
}

template <typename MoveScheme, typename InteractScheme>
void Enemy <MoveScheme, InteractScheme> ::move() {
    MoveScheme::move(x_, y_);
}

template <typename MoveScheme, typename InteractScheme>
void Enemy <MoveScheme, InteractScheme> ::interact() {
    MoveScheme::interact();
}

template <typename MoveScheme, typename InteractScheme>
Enemy <MoveScheme, InteractScheme> ::Enemy(int x, int y) : x_(x), y_(y) {}