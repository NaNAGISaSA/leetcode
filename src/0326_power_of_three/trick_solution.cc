#include "0326_power_of_three.h"

#include <cmath>
#include <limits>

namespace leetcode::power_of_three::trick {

bool Solution::is_power_of_three(int n) {
    int max_int_pow3 =
        static_cast<int>(std::pow(3, static_cast<int>(std::log(std::numeric_limits<int>::max()) / std::log(3))));
    return n > 0 && max_int_pow3 % n == 0;
}

}  // namespace leetcode::power_of_three::trick
