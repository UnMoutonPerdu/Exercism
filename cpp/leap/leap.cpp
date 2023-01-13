#include "leap.h"

using namespace std;

namespace leap {

    bool is_leap_year(int year) {
        int test1 = year % 4;
        int test2 = year % 100;
        int test3 = year % 400;

        if (test1 == 0) {
            if (test2 == 0) {
                if (test3 == 0) {
                    return true;
                }
                return false;
            }
            return true;
        }
        return false;
    }

}  // namespace leap
