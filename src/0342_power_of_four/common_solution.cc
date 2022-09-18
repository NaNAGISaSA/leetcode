#include "0342_power_of_four.h"

namespace leetcode::power_of_four::common {

bool Solution::is_power_of_four(int n) {
    if (n <= 0) {
        return false;
    }
    while (n % 4 == 0) {
        n /= 4;
    }
    return n == 1;
}

}  // namespace leetcode::power_of_four::common
