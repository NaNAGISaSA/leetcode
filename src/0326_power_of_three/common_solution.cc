#include "0326_power_of_three.h"

namespace leetcode::power_of_three::common {

bool Solution::is_power_of_three(int n) {
    if (n <= 0) {
        return false;
    }
    while (n != 1) {
        if (n % 3 != 0) {
            return false;
        }
        n /= 3;
    }
    return true;
}

}  // namespace leetcode::power_of_three::common
