#include "0376_wiggle_subsequence.h"

#include <algorithm>

namespace leetcode::wiggle_subsequence {

int Solution::wiggle_max_length(const std::vector<int>& nums) {
    size_t nums_size = nums.size();
    std::vector<std::pair<int, int>> dp_vec(nums_size + 1, {1, 1});
    int result = 1;
    for (size_t i = 2; i <= nums_size; ++i) {
        for (size_t j = 1; j < i; ++j) {
            if (nums[i - 1] > nums[j - 1]) {
                dp_vec[i].first = std::max(dp_vec[i].first, 1 + dp_vec[j].second);
            } else if (nums[i - 1] < nums[j - 1]) {
                dp_vec[i].second = std::max(dp_vec[i].second, 1 + dp_vec[j].first);
            }
        }
        result = std::max(result, std::max(dp_vec[i].first, dp_vec[i].second));
    }
    return result;
}

}  // namespace leetcode::wiggle_subsequence
