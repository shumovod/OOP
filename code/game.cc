#include "headers/game.h"

void Game::start() {
    std::cout << "Welcome to the Game!" << std::endl;
    choose_level();
    play();
    end();
}

void Game::choose_level() {
    Actions action;
    while (true) {
        std::cout << "Choose a level (1 or 2): " << std::endl;
        action = handler_.get_action();

        if (action == Actions::kLevel1) {
            field_ = field_creator_.level_one();
            break;
        } else if (action == Actions::kLevel2) {
            field_ = field_creator_.level_two();
            break;  
        } else {
            std::cout << "Invalid level. Try again." << std::endl;
            continue;
        }
        system("cls");
    }
}

void Game::play() {
    Control control(player_, field_);
    Actions action;
    Directions direction;

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

        std::cout << "Enter direction (w - up, a - left, s - down, d - right, q - quit): " << std::endl;
        action = handler_.get_action();

        if (action == Actions::kQuit)
            break;

        switch (action) {
            case Actions::kMoveUp:
                direction = Directions::kUp;
                break;
            case Actions::kMoveLeft:
                direction = Directions::kLeft;
                break;
            case Actions::kMoveDown:
                direction = Directions::kDown;
                break;
            case Actions::kMoveRight:
                direction = Directions::kRight;
                break;
            default:
                continue;
        }
        control.move(direction);
        system("cls");
    }
}

void Game::end() {
    Actions action;
    while (true) {
        std::cout << "Do you want to play again? (Y/N): " << std::endl;
        action = handler_.get_action();

        if (action == Actions::kYes) 
            start();
        else if (action == Actions::kNo) {
            std::cout << "Thank you for playing! Goodbye." << std::endl;
            exit(0);
        } else
            continue;
        system("cls");
    }
}

Game::Game(Handler& handler) : handler_(handler) {}