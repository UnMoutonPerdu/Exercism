#include "hamming.h"

namespace hamming {
    int compute(std::string s, std::string t) {
        if (s.size() != t.size()) {
            throw std::domain_error("lengths must be the same");
        }
        int countDiff = 0;
        for (long unsigned int i = 0; i < s.size(); i++) {
            countDiff += (s[i] != t[i]);
        }
        return countDiff;
    }
}  // namespace hamming
