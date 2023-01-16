#include "allergies.h"

namespace allergies {
    allergies::allergy_test::allergy_test(int score) {
        this->score = score;
    }

    bool allergies::allergy_test::is_allergic_to(std::string allergy) {
        return this->score & score_allergies.at(allergy);
    }

    ListOfAllergies allergies::allergy_test::get_allergies() {
        ListOfAllergies list_allergies;
        for (std::pair<std::string, int> elem: score_allergies) {
            if (this->score & elem.second) {
                list_allergies.insert(elem.first);
            }
        }
        return list_allergies;
    }
}  // namespace allergies
