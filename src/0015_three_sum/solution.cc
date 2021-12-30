#include <algorithm>
#include <unordered_map>

#include "0015_three_sum.h"

namespace leetcode::three_sum {

std::vector<std::vector<int>> Solution::three_sum(std::vector<int>& nums) {
    size_t num_size = nums.size();
    std::sort(nums.begin(), nums.end());

    std::vector<std::vector<int>> result;
    for (size_t i = 0; i < num_size;) {
        if (nums[i] > 0) {
            break;
        }
        size_t left = i + 1, right = num_size - 1;
        int target = -1 * nums[i];
        while (left < right) {
            if (nums[left] + nums[right] < target) {
                do {
                    ++left;
                } while (left < right && nums[left] == nums[left - 1]);
            } else if (nums[left] + nums[right] > target) {
                do {
                    --right;
                } while (left < right && nums[right] == nums[right + 1]);
            } else {
                result.push_back({nums[i], nums[left], nums[right]});
                do {
                    ++left;
                } while (left < right && nums[left] == nums[left - 1]);
                do {
                    --right;
                } while (left < right && nums[right] == nums[right + 1]);
            }
        }
        target *= -1;
        while (i < num_size && nums[i] == target) {
            ++i;
        }
    }
    return result;
}

}  // namespace leetcode::three_sum
