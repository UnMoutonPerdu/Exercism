#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <string>
#include <unordered_set>
#include <map>

namespace allergies {
    typedef std::unordered_set<std::string> ListOfAllergies;

    class allergy_test {
        private:
            int score;
            const std::map<std::string, int> score_allergies = {
                {"eggs", 1},
                {"peanuts", 2},
                {"shellfish", 4},
                {"strawberries", 8},
                {"tomatoes", 16},
                {"chocolate", 32},
                {"pollen", 64},
                {"cats", 128}
            };
        public:
            allergy_test(int);
            bool is_allergic_to(std::string);
            ListOfAllergies get_allergies();
    };
}  // namespace allergies

#endif // ALLERGIES_H