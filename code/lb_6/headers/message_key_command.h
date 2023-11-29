#ifndef OOP_HEADERS_MESSAGE_KEY_COMMAND_H_
#define OOP_HEADERS_MESSAGE_KEY_COMMAND_H_

#include <unordered_map>

#include "../../lb_4/headers/handler.h"
#include "message.h"

class MessageKeyCommand : public Message {
 public:
    std::string get_message() override;
    MessageKeyCommand(Handler& handler);

 private:
    Handler& handler_;
    std::unordered_map <Actions, std::string> command_;
};

#endif