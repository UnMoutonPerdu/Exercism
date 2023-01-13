#if !defined(TRIANGLE_H)
#define TRIANGLE_H

#include <stdexcept>

namespace triangle {
    using namespace std;

    enum class flavor {
        equilateral,
        isosceles,
        scalene
    };

    flavor kind(double x, double y, double z);
}  // namespace triangle

#endif // TRIANGLE_H