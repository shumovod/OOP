#include "headers/player.h"

int Player::get_health() const { 
    return health_; 
} 

int Player::get_score() const { 
    return score_; 
}

int Player::get_x() const {
    return x_; 
}

int Player::get_y() const { 
    return y_; 
}

void Player::set_health(int health) {
    health_ = health;
}

void Player::set_score(int score) { 
    score_ = score; 
}

void Player::set_x(int x) { 
    x_ = x; 
}

void Player::set_y(int y) { 
    y_ = y; 
}

void Player::print_characteristics() const {
    std::cout << "Health: " << health_
              << "  Score: " << score_
              << "  (X: " << x_
              << "; Y: " << y_ << ")" << std::endl;
}

Player::Player() : health_(MAX_HEALTH), score_(MIN_SCORE), x_(MIN_X), y_(MIN_Y) {}