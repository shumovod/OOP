#ifndef OOP_HEADERS_HANDLER_H
#define OOP_HEADERS_HANDLER_H

#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

#include "actions.h"
#include "input.h"

class Handler {
 public:
   Actions get_action();
   Handler(Input& input, const std::string& new_file);
    
 private:
   Input& input_;
   std::unordered_map<char, Actions> actions_;
};

#endif