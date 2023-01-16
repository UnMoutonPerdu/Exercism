#include "sum_of_multiples.h"

namespace sum_of_multiples {
    int to(std::vector<int> factors, int num) {
        int sum = 0;
        if (factors == std::vector<int>{}) {
            return 0;
        }
        
        std::unordered_set<int> multiples;
        int need_to_break = 0;
        for (int i = 1; i < num; i++) {
            for (int elem: factors) {
                if (elem*i >= num) {
                    need_to_break += 1;
                }
                else {
                    multiples.insert(elem*i);
                }
            }
            if (need_to_break == (int) factors.size()) {
                break;
            }
            else {
                need_to_break = 0;
            }
        }

        std::unordered_set<int>::iterator it;
        for (it = multiples.begin(); it != multiples.end(); it++) {
            sum += *it;
        }

        return sum;
    }
}  // namespace sum_of_multiples
