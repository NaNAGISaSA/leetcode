#include <algorithm>
#include <cmath>
#include <limits>

#include "0016_three_sum_closest.h"

namespace leetcode::three_sum_closest {

int Solution::three_sum_closest(std::vector<int>& nums, int target) {
    // 3 <= nums.length <= 1000
    std::sort(nums.begin(), nums.end());
    size_t nums_size = nums.size();
    int result = 0, min_dis = std::numeric_limits<int>::max();
    for (size_t i = 0; i < nums_size;) {
        size_t left = i + 1, right = nums_size - 1;
        int curr_target = target - nums[i];
        while (left < right) {
            if (std::abs(nums[left] + nums[right] - curr_target) < min_dis) {
                min_dis = std::abs(nums[left] + nums[right] - curr_target);
                result = nums[i] + nums[left] + nums[right];
            }
            if (nums[left] + nums[right] == curr_target) {
                return result;
            } else if (nums[left] + nums[right] > curr_target) {
                do {
                    --right;
                } while (left < right && nums[right] == nums[right + 1]);
            } else {
                do {
                    ++left;
                } while (left < right && nums[left] == nums[left - 1]);
            }
        }
        do {
            ++i;
        } while (i < nums_size && nums[i] == nums[i - 1]);
    }
    return result;
}

}  // namespace leetcode::three_sum_closest
