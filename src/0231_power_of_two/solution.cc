#include "0231_power_of_two.h"

namespace leetcode::power_of_two {

bool Solution::is_power_of_two(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

}  // namespace leetcode::power_of_two
