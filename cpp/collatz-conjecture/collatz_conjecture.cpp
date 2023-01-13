#include "collatz_conjecture.h"

namespace collatz_conjecture {
    long int steps(long int num) {
        if (num <= 0) {
            throw std::domain_error("Argument must be greater than 1");
        }
        
        int counter = 0;
        while (num != 1) {
            if (num%2 == 0) {
                num /= 2;
            }
            else {
                num = 3*num + 1;
            }
            counter += 1;
        }
        return counter;
    }
}  // namespace collatz_conjecture
