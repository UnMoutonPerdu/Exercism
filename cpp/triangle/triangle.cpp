#include "triangle.h"

using namespace std;

namespace triangle {

    flavor kind(double x, double y, double z) {
        if ((x <= 0 || y <= 0 || z <= 0) || (z > x+y || y > x+z || x > y+z)) {
            throw domain_error("Error_Domain");
        }

        if (x == y && x == z) {
            return flavor::equilateral;
        }
        else if (x == y || x == z || y == z) {
            return flavor::isosceles;
        }

        return flavor::scalene;
    }

}  // namespace triangle
