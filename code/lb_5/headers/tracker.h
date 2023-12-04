#ifndef OOP_HEADERS_TRACKER_H_
#define OOP_HEADERS_TRACKER_H_

#include <vector>

#include "../../lb_6/headers/logger.h"
#include "../../lb_6/headers/message_key.h"
#include "../../lb_6/headers/message_key_command.h"
#include "../../lb_6/headers/message_lose.h"
#include "../../lb_6/headers/message_new_game.h"
#include "../../lb_6/headers/message_win.h"
#include "render.h"
#include "states.h"

class Tracker {
 public:
    void check_state(States state, std::vector <Logger*> logger);
    Tracker(Render& render, Handler& handler, Player& player, Field& field);
    ~Tracker();

 private:
    Render& render_;
    Player& player_;
    Field& field_;
    MessageWin* message_win_;
    MessageLose* message_lose_;
    MessageNewGame* message_new_game_;
    MessageKeyCommand* message_key_command_;
    MessageKey* message_key_;

    void make_log(std::vector <Logger*> logger, Message* message);
};

#endif