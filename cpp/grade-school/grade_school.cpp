#include "grade_school.h"

namespace grade_school {
    std::map<int, std::vector<std::string>> school::roster() const {    
        return this->listStudents;
    }

    void school::add(std::string name, int grade) {
        if (this->listStudents.count(grade)) {
            this->listStudents[grade].push_back(name);
            std::sort(this->listStudents[grade].begin(), this->listStudents[grade].end());
        }
        else {
            std::vector<std::string> newVec;
            newVec.push_back(name);
            this->listStudents.insert(std::pair<int, std::vector<std::string>>(grade, newVec));
        }
    }

    std::vector<std::string> school::grade(int grade) const {
        if (this->listStudents.count(grade)) {
            auto copyVect = this->listStudents;
            return copyVect[grade];
        }

        return{};
    }
}  // namespace grade_school
