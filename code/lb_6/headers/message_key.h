#ifndef OOP_HEADERS_MESSAGE_KEY_H_
#define OOP_HEADERS_MESSAGE_KEY_H_

#include "../../lb_4/headers/handler.h"
#include "message.h"

class MessageKey : public Message {
 public:
    std::string get_message() override;
    MessageKey(Handler& handler);

 private:
    Handler& handler_;
};

#endif