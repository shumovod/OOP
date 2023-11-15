#include "headers/input_terminal.h"

char InputTerminal::reader() const {
    char command;
    while (true) {
        if (kbhit()) {
            command = getch();
            break;
        }
    }
    return tolower(command);
}