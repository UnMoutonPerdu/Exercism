#include "nth_prime.h"

namespace nth_prime {
    bool is_prime(long num) {
        for (int i = 2; i < int(std::sqrt(num)) + 1; i++) {
            if (num % i == 0) {
                return false;
            }
        }   
        return true;
    }

    long nth(long num) {
        if (num <= 0) {
            throw std::domain_error("argument must be greater than 1");
        }

        int counter = 0;
        int number = 1;
        while (counter != num) {
            number += 1;
            if (is_prime(number)) {
                counter += 1;
            }
        }
        return number;
    }
}  // namespace nth_prime
