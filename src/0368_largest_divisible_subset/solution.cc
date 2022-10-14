#include "0368_largest_divisible_subset.h"

#include <algorithm>

namespace leetcode::largest_divisible_subset {

std::vector<int> Solution::largest_divisible_subset(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());

    std::vector<int> dp_vec(nums.size(), 1);
    size_t max_idx = 0;
    for (size_t i = 1, end = nums.size(); i < end; ++i) {
        for (size_t j = i - 1; j < end; --j) {
            if (nums[i] % nums[j] == 0) {
                dp_vec[i] = std::max(dp_vec[i], 1 + dp_vec[j]);
            }
        }
        if (dp_vec[i] > dp_vec[max_idx]) {
            max_idx = i;
        }
    }

    std::vector<int> result{nums[max_idx]};
    result.reserve(dp_vec[max_idx]);
    for (size_t i = max_idx - 1; i < max_idx; --i) {
        if (dp_vec[i] + 1 == dp_vec[max_idx] && nums[max_idx] % nums[i] == 0) {
            result.push_back(nums[i]);
            max_idx = i;
        }
    }
    return result;
}

}  // namespace leetcode::largest_divisible_subset
