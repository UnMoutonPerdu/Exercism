#if !defined(SAY_H)
#define SAY_H

#include <string>
#include <map>
#include <stdexcept>
#include <iostream>

namespace say {
    typedef std::map<char, std::string> Converter;
    static Converter by_unit = {
        {'0', ""},
        {'1', "one"},
        {'2', "two"},
        {'3', "three"},
        {'4', "four"},
        {'5', "five"},
        {'6', "six"},
        {'7', "seven"},
        {'8', "eight"},
        {'9', "nine"}
    };
    static Converter by_decade = {
        {'2', "twenty"},
        {'3', "thirty"},
        {'4', "forty"},
        {'5', "fifty"},
        {'6', "sixty"},
        {'7', "seventy"},
        {'8', "eighty"},
        {'9', "ninety"}
    };
    static Converter by_the_first_decade = {
        {'0', "ten"},
        {'1', "eleven"},
        {'2', "twelve"},
        {'3', "thirteen"},
        {'4', "fourteen"},
        {'5', "fifteen"},
        {'6', "sixteen"},
        {'7', "seventeen"},
        {'8', "eighteen"},
        {'9', "nineteen"}
    };
    static std::map<int, std::string> by_pow_of_ten = {
        {1, ""},
        {2, "thousand "},
        {3, "million "},
        {4, "billion "}
    };

    std::string in_english(long long int);
    void say_by_three(std::string, std::string&);
}  // namespace say

#endif // SAY_H