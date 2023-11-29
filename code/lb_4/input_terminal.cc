#include "headers/input_terminal.h"

char InputTerminal::reader() {
    char key;
    while (true) {
        if (kbhit()) {
            key = getch();
            break;
        }
    }
    return tolower(key);
}