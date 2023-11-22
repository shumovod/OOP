#include "headers/render_terminal.h"

void RenderTerminal::print_start() const {
    std::cout << "Welcome to the Game!" << std::endl;
}

void RenderTerminal::print_level() const {
    std::cout << "Choose a level (1 or 2): " << std::endl;
}

void RenderTerminal::print_win() const {
    std::cout << "Congratulations! You reached the exit." << std::endl;
}

void RenderTerminal::print_lose() const {
    std::cout << "Game Over! You lost all your health." << std::endl;
}

void RenderTerminal::print_player(Player& player) const {
        std::cout << "Health: " << player.get_health()
              << "  Score: " << player.get_score()
              << "  (X: " << player.get_x()
              << "; Y: " << player.get_y() << ")" << std::endl;
}

void RenderTerminal::print_field(Player& player, Field& field) const {
    for (int y = 0; y < field.get_width(); y++) {
        for (int x = 0; x < field.get_height(); x++) {
            if (player.get_x() == x && player.get_y() == y)
                std::cout << "P ";
            else if (field.get_entrance_x() == x && field.get_entrance_y() == y)
                std::cout << "S ";
            else if (field.get_exit_x() == x && field.get_exit_y() == y)
                std::cout << "F ";
            else if (field.get_cell(x, y).is_event() && typeid(*field.get_cell(x, y).get_event()) == typeid(EventHealth)) 
                std::cout << "H ";
            else if (field.get_cell(x, y).is_event() && typeid(*field.get_cell(x, y).get_event()) == typeid(EventScore)) 
                std::cout << "S ";
            else if (field.get_cell(x, y).is_event() && typeid(*field.get_cell(x, y).get_event()) == typeid(EventMove)) 
                std::cout << "M ";
            else if (field.get_cell(x, y).get_passability())
                std::cout << ". ";
            else 
                std::cout << "# ";
        }
        std::cout << std::endl;
    }
    std::cout << "Enter direction (w - up, a - left, s - down, d - right, q - quit): " << std::endl;
}

void RenderTerminal::print_new_game() const {
    std::cout << "Do you want to play again? (Y/N): " << std::endl;
}

void RenderTerminal::print_end() const {
    std::cout << "Thank you for playing! Goodbye." << std::endl;
}