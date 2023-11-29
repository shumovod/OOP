#ifndef OOP_HEADERS_MESSAGE_NEW_GAME_H_
#define OOP_HEADERS_MESSAGE_NEW_GAME_H_

#include "../../lb_2/headers/field.h"
#include "message.h"

class MessageNewGame : public Message {
 public:
    std::string get_message() override;
    MessageNewGame(Field& field);

 private:
    Field& field_;
};

#endif