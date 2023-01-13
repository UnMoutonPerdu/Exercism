#include "gigasecond.h"

namespace gigasecond {
    ptime advance(ptime actual) {
        return actual + seconds(1'000'000'000);
    }
}  // namespace gigasecond
