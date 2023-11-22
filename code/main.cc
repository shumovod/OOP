#include "headers/game.h"
#include "headers/input_terminal.h"
#include "headers/render_terminal.h"

int main() {
    InputTerminal input;
    RenderTerminal render;
    Game game(input, render);
    game.start();

    return 0;
}