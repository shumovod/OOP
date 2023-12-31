#include "headers/handler.h"

char Handler::get_last_key() const {
    return last_key_;
}

Actions Handler::get_last_action() const {
    return last_action_;
}

Actions Handler::get_action() {
    char key = input_.reader();
    Actions action;
    if (actions_.count(key) == 0)
        action = Actions::kUnknown;
    else
        action = actions_[key];
    last_key_ = key;
    last_action_ = action;
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
    std::unordered_map <char, Actions> actions_map; 
    std::unordered_map <std::string, bool> action_assigned; 

    action_assigned["up"] = false;
    action_assigned["down"] = false;
    action_assigned["left"] = false;
    action_assigned["right"] = false;
    action_assigned["quit"] = false;
    action_assigned["yes"] = false;
    action_assigned["no"] = false;
    action_assigned["one"] = false;
    action_assigned["two"] = false;
    action_assigned["three"] = false;

    while (file >> key >> action) {
        key = tolower(key);
        if (actions_map.count(key) > 0) {
            std::cout << "Error: Key " << key << " is assigned to multiple actions" << std::endl;
            exit(0);
        }
        if (action_assigned[action]) {
            std::cout << "Error: Action " << action << " is assigned to multiple keys" << std::endl;
            exit(0);
        }
        actions_map[key] = convert_action(action);
        action_assigned[action] = true;
    }

    for (const auto& pair : action_assigned) {
        if (!pair.second) {
            std::cout << "Error: Action " << pair.first << " is not assigned to any key" << std::endl;
            exit(0);
        }
    }
    actions_ = actions_map;
    file.close();
}

Actions Handler::convert_action(const std::string& action) {
    if (action == "up")
        return Actions::kMoveUp;
    else if (action == "down")
        return Actions::kMoveDown;
    else if (action == "left")
        return Actions::kMoveLeft;
    else if (action == "right")
        return Actions::kMoveRight;
    else if (action == "quit")
        return Actions::kQuit;
    else if (action == "yes")
        return Actions::kYes;
    else if (action == "no")
        return Actions::kNo;
    else if (action == "one")
        return Actions::kOne;
    else if (action == "two")
        return Actions::kTwo;
    else if (action == "three")
        return Actions::kThree;
    else
        return Actions::kUnknown;
}