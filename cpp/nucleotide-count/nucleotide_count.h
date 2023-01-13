#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <iostream>

namespace nucleotide_count {
    class counter {
        private:
            std::string sequence;
        public:
            counter(std::string);
            std::map<char, int> nucleotide_counts() const;
    };
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H