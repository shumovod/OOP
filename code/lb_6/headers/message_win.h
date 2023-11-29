#ifndef OOP_HEADERS_MESSAGE_WIN_H_
#define OOP_HEADERS_MESSAGE_WIN_H_

#include "message.h"
#include "../../lb_1/headers/player.h"

class MessageWin : public Message {
 public:
    std::string get_message() override;
    MessageWin(Player& player);

 private:
    Player& player_;
};

#endif