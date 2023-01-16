#if !defined(PRIME_FACTORS_H)
#define PRIME_FACTORS_H

#include <vector>
#include <cmath>

namespace prime_factors {
    typedef std::vector<int> ListPrimeFactors;
    ListPrimeFactors of(int);
}  // namespace prime_factors

#endif // PRIME_FACTORS_H