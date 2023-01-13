#include "difference_of_squares.h"

namespace difference_of_squares {
    long sum_of_squares(long num) {
        return (num*(num+1)*(2*num+1))/6;
    }
    long square_of_sum(long num) {
        return std::pow(num*(num+1)/2, 2);
    }
    long difference(long num) {
        return square_of_sum(num)-sum_of_squares(num);
    }
}  // namespace difference_of_squares
