#include "prime_factors.h"

namespace prime_factors {
    ListPrimeFactors of(int num) {
        if (num < 2) {
            return{};
        }

        ListPrimeFactors factors;
        int max_value = std::sqrt(num)+1;

        for (int i = 2; i < max_value; i++) {
            if (num%i == 0) {
                do {
                    factors.push_back(i);
                    num /= i;
                } while (num%i == 0);

                max_value = std::sqrt(num)+1;
            }
        }

        if (num > 1) {
            factors.push_back(num);
        }


        return factors;
    }
}  // namespace prime_factors
