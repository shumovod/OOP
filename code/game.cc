#include <iostream>

#include "headers/game.h"
#include "headers/field.h"

void Game::start() {
    std::cout << "Welcome to the Game!" << std::endl;
    chooseLevel();
    play();
    end();
}

void Game::chooseLevel() {
    int level;
    while (true) {
        std::cout << "Choose a level (1 or 2): ";
        std::cin >> level;

        if (level == 1) {
            field_ = fieldCreator_.level_one();
            break;
        } else if (level == 2) {
            field_ = fieldCreator_.level_two();
            break;
        } else {
            std::cout << "Invalid level. Try again." << std::endl;
            continue;
        }
    }
}

void Game::play() {
    Control control(player_, field_);

    while (true) {
        player_.print_characteristics();
        field_.print_field(player_);

        if (player_.get_health() <= MIN_HEALTH) {
            std::cout << "Game Over! You lost all your health." << std::endl;
            break;
        }

        if (player_.get_x() == field_.get_exit_x() && player_.get_y() == field_.get_exit_y()) {
            std::cout << "Congratulations! You reached the exit." << std::endl;
            break;
        }

        char direction;
        std::cout << "Enter direction (W - up, A - left, S - down, D - right): ";
        std::cin >> direction;

        Directions moveDirection;
        switch (direction) {
            case 'W':
                moveDirection = Directions::kUp;
                break;
            case 'A':
                moveDirection = Directions::kLeft;
                break;
            case 'S':
                moveDirection = Directions::kDown;
                break;
            case 'D':
                moveDirection = Directions::kRight;
                break;
            default:
                std::cout << "Invalid direction. Try again." << std::endl;
                continue;
        }

        control.move(moveDirection);
    }
    std::cout << "check" << std::endl;
}

void Game::end() {
    char choice;
    std::cout << "Do you want to play again? (Y/N): ";
    std::cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        start();
    } else {
        std::cout << "Thank you for playing! Goodbye." << std::endl;
        exit(0);
    }
}