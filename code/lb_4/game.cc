#include "headers/game.h"

void Game::start() {
    Player player;
    Handler handler(input_, "../reports/lb_4/scheme");
    Tracker tracker(render_, handler, player, field_);

    tracker.check_state(States::kStart, logger_);

    if (flag_)
        need_logger(handler, tracker);
    choose_level(handler, tracker);
    play(player, handler, tracker);
    end(handler, tracker);
}

void Game::need_logger(Handler& handler, Tracker& tracker) {
    flag_ = false;
    Actions action;
    while (true) {
        tracker.check_state(States::kLogger, logger_);
        action = handler.get_action();

        if (action == Actions::kYes) {
            while (true) {
                tracker.check_state(States::kChooseLogger, logger_);
                action = handler.get_action();
                if (action == Actions::kOne) {
                    tracker.check_state(States::kKeyCommand, logger_);
                    logger_.push_back(new LoggerTerminal);
                    break;
                } else if (action == Actions::kTwo) {
                    tracker.check_state(States::kKeyCommand, logger_);
                    logger_.push_back(new LoggerFile);
                    break;
                } else if (action == Actions::kThree) {
                    tracker.check_state(States::kKeyCommand, logger_);
                    logger_.push_back(new LoggerTerminal);
                    logger_.push_back(new LoggerFile);
                    break;
                }
                tracker.check_state(States::kKey, logger_);
            }
            break;
        } else if (action == Actions::kNo) {
            tracker.check_state(States::kKeyCommand, logger_);
            if (!logger_.empty()) {
                for (int i = 0; i < logger_.size(); i++) {
                    delete logger_[i];
                    logger_[i] = nullptr;
                }
            }
            break;
        } 
        tracker.check_state(States::kKey, logger_);
    }
}

void Game::choose_level(Handler& handler, Tracker& tracker) {
    Actions action;
    while (true) {
        tracker.check_state(States::kLevel, logger_);
        action = handler.get_action();

        if (action == Actions::kOne) {
            tracker.check_state(States::kKeyCommand, logger_);
            field_ = field_creator_.level_one();
            break;
        } else if (action == Actions::kTwo) {
            tracker.check_state(States::kKeyCommand, logger_);
            field_ = field_creator_.level_two();
            break;  
        } 
        tracker.check_state(States::kKey, logger_);
    }
}

void Game::play(Player& player, Handler& handler, Tracker& tracker) {
    tracker.check_state(States::kGame, logger_);
    Control control(player, field_);
    Actions action;
    Directions direction;

    do {
        tracker.check_state(States::kPlay, logger_);

        if (player.get_health() <= MIN_HEALTH) {
            tracker.check_state(States::kLose, logger_);
            break;
        }

        if (player.get_x() == field_.get_exit_x() && player.get_y() == field_.get_exit_y()) {
            tracker.check_state(States::kWin, logger_);
            break;
        }

        action = handler.get_action();

        switch (action) {
            case Actions::kMoveUp:
                tracker.check_state(States::kKeyCommand, logger_);
                direction = Directions::kUp;
                break;
            case Actions::kMoveLeft:
                tracker.check_state(States::kKeyCommand, logger_);
                direction = Directions::kLeft;
                break;
            case Actions::kMoveDown:
                tracker.check_state(States::kKeyCommand, logger_);
                direction = Directions::kDown;
                break;
            case Actions::kMoveRight:
                tracker.check_state(States::kKeyCommand, logger_);
                direction = Directions::kRight;
                break;
            case Actions::kQuit:
                tracker.check_state(States::kKeyCommand, logger_);
                break;
            default:
                tracker.check_state(States::kKey, logger_);
                continue;
        }
        control.move(direction);
    } while (action != Actions::kQuit);
}

void Game::end(Handler& handler, Tracker& tracker) {
    Actions action;
    while (true) {
        tracker.check_state(States::kNewGame, logger_);
        action = handler.get_action();
        if (action == Actions::kYes) {
            tracker.check_state(States::kKeyCommand, logger_);
            start();
        }
        else if (action == Actions::kNo) {
            tracker.check_state(States::kKeyCommand, logger_);
            tracker.check_state(States::kEnd, logger_);
            exit(0);
        } 
        tracker.check_state(States::kKey, logger_);
    }
}

Game::Game(Input& input, Render& render) : input_(input), render_(render), flag_(true) {}

Game::~Game() {
    if (!logger_.empty()) {
        for (int i = 0; i < logger_.size(); i++) 
            delete logger_[i];
    }
}