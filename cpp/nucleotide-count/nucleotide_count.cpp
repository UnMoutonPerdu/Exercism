#include "nucleotide_count.h"

namespace nucleotide_count {
    counter::counter(std::string sequence) {
        for (char letter: sequence) {
            if (letter != 'A' && letter != 'C' && letter != 'G' && letter != 'T') {
                throw std::invalid_argument("sequence must be valid");
            }
        }
        this->sequence = sequence;
    }

    std::map<char, int> counter::nucleotide_counts() const {
        std::map<char, int> counter = { {'A', 0}, {'C', 0}, {'G', 0}, {'T', 0} };
        for (char letter: this->sequence) {
            counter[letter] += 1;
        }
        std::cout << std::endl;
        return counter;
    }
}  // namespace nucleotide_count
