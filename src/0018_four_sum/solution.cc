#include <algorithm>

#include "0018_four_sum.h"

namespace leetcode::four_sum {

// 1) 以2sum为base，使用递归，可以写出Nsum；
// 2) 加速的关键是对每一个loop，判断其是否可以不用循环；
std::vector<std::vector<int>> Solution::four_sum(std::vector<int>& nums, int target) {
    size_t num_size = nums.size();
    if (num_size < 4) {
        return {};
    }

    std::sort(nums.begin(), nums.end());
    size_t left = 0, right = 0;
    int tgt = 0;
    std::vector<std::vector<int>> result;
    // Speed up
    if (4L * static_cast<long>(nums[0]) > target || 4L * static_cast<long>(nums[num_size - 1]) < target) {
        return result;
    }

    for (size_t i = 0; i < num_size;) {
        // Speed up
        if (4L * static_cast<long>(nums[0]) > target) {
            return result;
        }
        for (size_t j = i + 1; j < num_size;) {
            tgt = target - nums[i] - nums[j];
            left = j + 1;
            right = num_size - 1;
            while (left < right) {
                if (nums[left] + nums[right] == tgt) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    do {
                        ++left;
                    } while (left < right && nums[left] == nums[left - 1]);
                    do {
                        --right;
                    } while (left < right && nums[right] == nums[right + 1]);
                } else if (nums[left] + nums[right] > tgt) {
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
                ++j;
            } while (j < num_size && nums[j] == nums[j - 1]);
        }
        do {
            ++i;
        } while (i < num_size && nums[i] == nums[i - 1]);
    }
    return result;
}

}  // namespace leetcode::four_sum
