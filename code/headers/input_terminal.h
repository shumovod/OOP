#ifndef OOP_HEADERS_INPUT_TERMINAL_H_
#define OOP_HEADERS_INPUT_TERMINAL_H_

#include <cctype>
#include <conio.h>

#include "input.h"

class InputTerminal : public Input {
 public:
    char reader() const override;
};

#endif