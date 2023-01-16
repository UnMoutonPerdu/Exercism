#include "robot_name.h"

namespace robot_name {
    std::unordered_set<std::string> robot::list_of_names = {};

    std::string robot::generate_name() {
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<> alpha_distribution('A', 'Z');
            std::uniform_int_distribution<> numeric_distribution(0, 999);
            std::string alpha1 = std::string(1, (char) alpha_distribution(gen));
            std::string alpha2 = std::string(1, (char) alpha_distribution(gen));
            std::string numeric = std::to_string(numeric_distribution(gen));
            numeric = std::string(3 - numeric.length(), '0') + numeric;
            return alpha1 + alpha2 + numeric;
    }

    robot::robot() {
        std::string new_name;
        do {
            new_name = generate_name();
        } while (robot::list_of_names.count(new_name) != 0);
        robot::list_of_names.insert(new_name);
        this->robot_name = new_name;
    }

    void robot::reset() {
        std::string new_name;
        do {
            new_name = generate_name();
        } while (robot::list_of_names.count(new_name) != 0);
        robot::list_of_names.insert(new_name);
        this->robot_name = new_name;
    }

    std::string robot::name() const {
        return this->robot_name;
    }
}  // namespace robot_name
