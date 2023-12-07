#include "headers/field_creator.h"

Field& FieldCreator::level_one() {
    field_.set_entrance(0, 0);
    field_.set_exit(4, 4);

    field_.get_cell(1, 0).set_passability(false);
    field_.get_cell(1, 2).set_passability(false);
    field_.get_cell(0, 4).set_passability(false);
    field_.get_cell(2, 4).set_passability(false);
    field_.get_cell(3, 1).set_passability(false);
    field_.get_cell(3, 3).set_passability(false);

    field_.get_cell(1, 4).set_event(event_m_.create());
    field_.get_cell(3, 4).set_event(event_s_.create());
    field_.get_cell(4, 0).set_event(event_h_.create());

    field_.add_enemy(new OrdinaryEnemy <SearchPlayer, DamagePlayer>(2, 3));

    return field_;
}

Field& FieldCreator::level_two() {
    field_.set_entrance(0, 4);
    field_.set_exit(4, 0);

    field_.get_cell(0, 0).set_passability(false);
    field_.get_cell(0, 1).set_passability(false);
    field_.get_cell(1, 3).set_passability(false);
    for (int y = 0; y < 4; y++)
        field_.get_cell(2, y).set_passability(false);
    field_.get_cell(2, 2).set_passability(true);
    field_.get_cell(3, 1).set_passability(false);
    field_.get_cell(4, 3).set_passability(false);

    field_.get_cell(1, 0).set_event(event_m_.create());
    field_.get_cell(3, 0).set_event(event_s_.create());
    field_.get_cell(4, 4).set_event(event_h_.create());

    field_.add_enemy(new OrdinaryEnemy <RandomMove, PushPlayer>(2, 2));

    return field_;
}