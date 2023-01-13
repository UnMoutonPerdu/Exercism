#include "say.h"

namespace say {
    void say_by_three(std::string group, std::string& seq) {
        bool first_non_zero = false;
        if (group[0] != '0') {
            seq += by_unit[group[0]] + " hundred";
            first_non_zero = true;
        }
        switch (group[1])
        {
        case '0':
            if (group[2] != '0') {
                if (first_non_zero) {
                    seq += " ";
                }
                seq += by_unit[group[2]];
            }
            break;

        case '1':
            if (first_non_zero) {
                seq += " ";
            }
            seq += by_the_first_decade[group[2]];
            break;

        default:
            if (first_non_zero) {
                seq += " ";
            }
            seq += by_decade[group[1]];
            if (group[2] != '0') {
                seq += "-" + by_unit[group[2]];
            }
            break;
        }
    }

    std::string in_english(long long int num) {
        if (num < 0 || num > 999999999999) {
            throw std::domain_error("num must be valid");
        }

        if (num == 0) {
            return "zero";
        }

        std::string sequence_in_english = "";

        std::string sequence = std::to_string(num);
        if (sequence.size()%3 != 0) {
            std::string complete_with_zeros(3-(sequence.size()%3), '0');
            sequence = complete_with_zeros + sequence;
        }        

        std::string group_of_three;

        for (int i = 0; i < (int) sequence.size()/3; i++) {
            group_of_three = sequence.substr(3*i, 3);
            if (group_of_three != "000") {
                say_by_three(group_of_three, sequence_in_english);
                if (sequence.size()/3-i != 1) {
                    sequence_in_english += " ";
                }
                sequence_in_english += by_pow_of_ten[sequence.size()/3-i];
            }
        }

        if (sequence_in_english[sequence_in_english.size()-1] == ' ') {
            return sequence_in_english.substr(0, sequence_in_english.size()-1);
        }

        return sequence_in_english;
    }

}  // namespace say