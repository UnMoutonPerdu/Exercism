#if !defined(NTH_PRIME_H)
#define NTH_PRIME_H

#include <stdexcept>
#include <math.h>

namespace nth_prime {
    bool is_prime(long);
    long nth(long);
}  // namespace nth_prime

#endif // NTH_PRIME_H