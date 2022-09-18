#include "0342_power_of_four.h"

namespace leetcode::power_of_four::trick {

bool Solution::is_power_of_four(int n) {
    // only 1 bit and the only 1 bit must in odd position
    return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555) != 0;
}

}  // namespace leetcode::power_of_four::trick
