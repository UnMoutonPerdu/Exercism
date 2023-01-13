#include "pangram.h"

namespace pangram {

    bool is_pangram(std::string sentence) {
        std::map<char, bool> letters_seen;
        for (char letter: sentence) {
            if (std::isalpha(letter)) {
                letters_seen[std::tolower(letter)] = true;
            }
        }
        
        return (letters_seen.size() == 26) ? true : false;
    }

}  // namespace pangram
