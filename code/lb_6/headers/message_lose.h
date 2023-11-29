#ifndef OOP_HEADERS_MESSAGE_LOSE_H_
#define OOP_HEADERS_MESSAGE_LOSE_H_

#include "message.h"
#include "../../lb_1/headers/player.h"

class MessageLose : public Message {
 public:
    std::string get_message() override;
    MessageLose(Player& player);

 private:
    Player& player_;
};

#endif