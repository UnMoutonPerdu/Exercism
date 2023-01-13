#include "sieve.h"

namespace sieve {
    Sieve primes(int num) {
        if (num == 1) {
            return{};
        }
        Sieve result(num-1);
        std::iota (std::begin(result), std::end(result), 2);
        for (int elem: result) {
            int multiple = elem*2;
            while (multiple <= num) {
                result.erase(std::remove(result.begin(), result.end(), multiple), result.end());
                multiple += elem;
            }
        }
        return result;
    }
}  // namespace sieve
