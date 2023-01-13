#if !defined(SIEVE_H)
#define SIEVE_H

#include <vector>
#include <numeric>
#include <algorithm>

namespace sieve {
    typedef std::vector<int> Sieve;
    Sieve primes(int);
}  // namespace sieve

#endif // SIEVE_H