#include "grains.h"

namespace grains {
    long long unsigned int square(int box) {
        if (box > 0) {
            return pow(2, box-1);
        }
        else {
            throw std::domain_error("bow must be >= 1");
        }
    }

    long long unsigned int total() {
        return (square(65) - 1);
    }
}  // namespace grains
