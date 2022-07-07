#include "0263_ugly_number.h"

namespace leetcode::ugly_number {

bool Solution::is_ugly(int n) {
    if (n <= 0) {
        return false;
    }
    int nums[3] = {2, 3, 5};
    for (auto& num : nums) {
        while (n % num == 0) {
            n /= num;
        }
    }
    return n == 1;
}

}  // namespace leetcode::ugly_number
