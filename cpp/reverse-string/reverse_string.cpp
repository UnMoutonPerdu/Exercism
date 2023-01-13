#include "reverse_string.h"

using namespace std;

namespace reverse_string {

    string reverse_string(string word) {
        string word_reverse = "";
        int word_length = word.length();

        for (int i = 0; i < word_length; i++) {
            word_reverse = word[i] + word_reverse;
        }

        return word_reverse;
    }

}  // namespace reverse_string
