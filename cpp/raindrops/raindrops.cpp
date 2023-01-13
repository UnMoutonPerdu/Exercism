#include "raindrops.h"

namespace raindrops {
    std::string convert(int num) {

        std::string raindrop = "";
        if (num % 3 == 0) {
            raindrop += "Pling";
        }
        if (num % 5 == 0) {
            raindrop += "Plang";
        }
        if (num % 7 == 0) {
            raindrop += "Plong";
        }
        return (raindrop != "") ? raindrop : std::to_string(num);

    }
}  // namespace raindrops
