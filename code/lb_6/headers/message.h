#ifndef OOP_HEADERS_MESSAGE_H_
#define OOP_HEADERS_MESSAGE_H_

#include <string>

class Message {
 public:
    virtual std::string get_message() = 0;
};

#endif