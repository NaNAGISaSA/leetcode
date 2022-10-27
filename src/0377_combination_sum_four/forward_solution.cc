#include "0377_combination_sum_four.h"

#include <limits>

namespace leetcode::combination_sum_four::forward {

int Solution::combination_sum(const std::vector<int>& nums, int target) {
    std::vector<long> dp_vec(target + 1, 0);
    dp_vec.front() = 1L;
    for (int i = 1; i <= target; ++i) {
        for (size_t j = 0, end = nums.size(); j < end; ++j) {
            if (i >= nums[j]) {
                dp_vec[i] = (dp_vec[i] + dp_vec[i - nums[j]]) % std::numeric_limits<int>::max();
            }
        }
    }
    return static_cast<int>(dp_vec.back());
}

}  // namespace leetcode::combination_sum_four::forward
