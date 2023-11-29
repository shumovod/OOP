#include "headers/tracker.h"

void Tracker::check_state(States state, Logger* logger) {
    switch (state) {
        case States::kStart:
            render_.print_start();
            break;
        case States::kLogger:
            render_.print_logger();
            break;
        case States::kChooseLogger:
            render_.print_choose_logger();
            break;
        case States::kLevel:
            render_.print_level();
            break;
        case States::kGame:
            if (logger != nullptr)
                logger -> log(message_new_game_);
            break;
        case States::kPlay:
            render_.print_player(player_);
            render_.print_field(player_, field_);
            render_.print_game();
            break;
        case States::kLose: 
            render_.print_lose();
            if (logger != nullptr)
                logger -> log(message_lose_);
            break;
        case States::kWin:
            render_.print_win();
            if (logger != nullptr)
                logger -> log(message_win_);
            break;
        case States::kNewGame:
            render_.print_new_game();
            break;
        case States::kEnd:
            render_.print_end();
            break;
        case States::kKeyCommand:
            render_.clear();
            if (logger != nullptr)
                logger -> log(message_key_command_);
            break;
        case States::kKey:
            render_.clear();
            if (logger != nullptr)
                logger -> log(message_key_);
            break;
    }
}

Tracker::Tracker(Render& render, Handler& handler, Player& player, Field& field) : render_(render), player_(player), field_(field) {
    message_win_ = new MessageWin(player_);
    message_lose_ = new MessageLose(player_);
    message_new_game_ = new MessageNewGame(field_);
    message_key_command_ = new MessageKeyCommand(handler);
    message_key_ = new MessageKey(handler);
}

Tracker::~Tracker() {
    if (message_win_ != nullptr)
        delete message_win_;
    if (message_lose_ != nullptr)
        delete message_lose_;
    if (message_new_game_ != nullptr)
        delete message_new_game_;
    if (message_key_command_ != nullptr)
        delete message_key_command_;
    if (message_key_ != nullptr)
        delete message_key_;
}