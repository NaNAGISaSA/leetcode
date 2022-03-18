#include "0075_sort_colors.h"

namespace leetcode::sort_colors {

void Solution::sort_colors(std::vector<int>& nums) {
    int left = 0, right = static_cast<int>(nums.size() - 1);
    int index = 0;
    while (index <= right) {
        if (nums[index] == 2) {
            std::swap(nums[index], nums[right--]);
        } else if (nums[index] == 0) {
            std::swap(nums[index++], nums[left++]);
        } else {
            ++index;
        }
    }
}

}  // namespace leetcode::sort_colors
