#include "headers/handler.h"

Actions Handler::get_action() {
    char key = input_.reader();
    Actions action;
    if (actions_.count(key) == 0)
        action = Actions::kUnknown;
    else
        action = actions_[key];
    return action;
}

Handler::Handler(Input& input, const std::string& new_file) : input_(input) {
    std::ifstream file(new_file);
    if (!file.is_open()) {
        std::cout << "Failed to open file" << std::endl;
        exit(0);
    }

    char key;
    std::string action;
    while (file >> key >> action) {
        key = tolower(key);
        if (action == "up")
            actions_[key] = Actions::kMoveUp;
        else if (action == "down")
            actions_[key] = Actions::kMoveDown;
        else if (action == "left")
            actions_[key] = Actions::kMoveLeft;
        else if (action == "right")
            actions_[key] = Actions::kMoveRight;
        else if (action == "quit")
            actions_[key] = Actions::kQuit;
        else if (action == "yes")
            actions_[key] = Actions::kYes;
        else if (action == "no") 
            actions_[key] = Actions::kNo;
        else if (action == "level_1")
            actions_[key] = Actions::kLevel1;
        else if (action == "level_2") 
            actions_[key] = Actions::kLevel2;
    }
    file.close();    
}