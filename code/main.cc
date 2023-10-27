#include <iostream>

#include "headers/control.h"
#include "headers/field_creator.h"

int main() {
    FieldCreator level;
    Player player;
    Field field(level.level_two());
    Control control(player, field);

    player.print_characteristics();

    control.move(Directions::kDown, 3);
    control.move(Directions::kRight);
    control.move(Directions::kDown);
    control.move(Directions::kRight);
    control.move(Directions::kLeft);
    control.move(Directions::kRight);
    control.move(Directions::kLeft);

    player.print_characteristics();

    level.level_two().print_field(player);

    return 0;
}