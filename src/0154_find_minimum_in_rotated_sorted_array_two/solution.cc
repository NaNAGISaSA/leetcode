#include "0154_find_minimum_in_rotated_sorted_array_two.h"

namespace leetcode::find_minimum_in_rotated_sorted_array_two {

int Solution::find_min(const std::vector<int>& nums) {
    int begin = 0, middle = 0, end = static_cast<int>(nums.size()) - 1;
    while (begin < end) {
        if (nums[begin] < nums[end]) {
            return nums[begin];
        }
        middle = begin + (end - begin) / 2;
        if (nums[begin] > nums[middle]) {
            end = middle;
            continue;
        }
        if (nums[middle] > nums[end]) {
            begin = middle + 1;
            continue;
        }
        // nums[begin] >= nums[end]
        // nums[begin] <= nums[middle] <= nums[end]
        while (begin <= middle) {
            if (nums[begin] == nums[middle]) {
                ++begin;
            } else if (nums[begin] < nums[middle]) {
                return nums[begin];
            } else {
                end = middle;
                break;
            }
        }
    }
    return nums[begin];
}

}  // namespace leetcode::find_minimum_in_rotated_sorted_array_two
