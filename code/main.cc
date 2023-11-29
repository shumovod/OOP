#include "lb_4/headers/game.h"
#include "lb_4/headers/input_terminal.h"
// #include "headers/logger_file.h"
#include "lb_5/headers/render_terminal.h"

int main() {
    InputTerminal input;
    RenderTerminal render;
    Game game(input, render);
    game.start();

    return 0;
}