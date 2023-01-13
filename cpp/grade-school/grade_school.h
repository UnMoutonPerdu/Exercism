#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <string>
#include <vector>
#include <map>
#include <algorithm>

namespace grade_school {
    class school {
        private:
            std::map<int, std::vector<std::string>> listStudents;
        public:
            void add(std::string name, int grade);
            std::map<int, std::vector<std::string>> roster() const;
            std::vector<std::string> grade(int) const;
    };
}  // namespace grade_school

#endif // GRADE_SCHOOL_H