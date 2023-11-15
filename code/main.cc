#include <iostream>

#include "headers/game.h"
#include "headers/input_terminal.h"

int main() {
    InputTerminal terminal;
    Handler handler(terminal, "../lb4/scheme");
    Game game(handler);
    game.start();

    return 0;
}