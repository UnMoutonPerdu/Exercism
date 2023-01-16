#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H

#include <string>
#include <unordered_set>
#include <random>
#include <iostream>

namespace robot_name {
    class robot {
        private:
            std::string robot_name;
            static std::unordered_set<std::string> list_of_names;
            const std::string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            const std::string digit = "0123456789";
        public:
            robot();
            std::string generate_name();
            std::string name() const;
            void reset();
    };
}  // namespace robot_name

#endif // ROBOT_NAME_H