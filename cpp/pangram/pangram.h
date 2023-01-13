#if !defined(PANGRAM_H)
#define PANGRAM_H

#include <string>
#include <map>
#include <cctype>

namespace pangram {
    bool is_pangram(std::string sentence);
}  // namespace pangram

#endif // PANGRAM_H