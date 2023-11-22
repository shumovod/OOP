#include "headers/game.h"

void Game::start() {
    Player player;
    Handler handler(input_, "../lb4/scheme");
    Tracker tracker(render_, player, field_);
    tracker.check_state(States::kStart);
    choose_level(handler, tracker);
    play(player, handler, tracker);
    end(handler, tracker);
}

void Game::choose_level(Handler& handler, Tracker& tracker) {
    tracker.check_state(States::kLevel);
    Actions action;
    while (true) {
        action = handler.get_action();

        if (action == Actions::kLevel1) {
            field_ = field_creator_.level_one();
            break;
        } else if (action == Actions::kLevel2) {
            field_ = field_creator_.level_two();
            break;  
        } else {
            continue;
        }
    }
}

void Game::play(Player& player, Handler& handler, Tracker& tracker) {
    Control control(player, field_);
    Actions action;
    Directions direction;

    while (action != Actions::kQuit) {
        tracker.check_state(States::kPlay);
        if (player.get_health() <= MIN_HEALTH) {
            tracker.check_state(States::kLose);
            break;
        }

        if (player.get_x() == field_.get_exit_x() && player.get_y() == field_.get_exit_y()) {
            tracker.check_state(States::kWin);
            break;
        }

        action = handler.get_action();

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
    }
}

void Game::end(Handler& handler, Tracker& tracker) {
    tracker.check_state(States::kNewGame);
    Actions action;
    while (true) {
        action = handler.get_action();
        if (action == Actions::kYes) 
            start();
        else if (action == Actions::kNo) {
            tracker.check_state(States::kEnd);
            exit(0);
        } else
            continue;
    }
}

Game::Game(Input& input, Render& render) : input_(input), render_(render) {}