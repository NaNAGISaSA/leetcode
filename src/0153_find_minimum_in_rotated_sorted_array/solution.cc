#include "0153_find_minimum_in_rotated_sorted_array.h"

namespace leetcode::find_minimum_in_rotated_sorted_array {

int Solution::find_min(const std::vector<int>& nums) {
    // all the integers of nums are unique
    int begin = 0, end = static_cast<int>(nums.size()) - 1;
    int middle = 0;
    while (begin < end) {
        if (nums[begin] < nums[end]) {
            return nums[begin];
        }
        middle = begin + (end - begin) / 2;
        if (nums[middle] > nums[end]) {
            begin = middle + 1;
        } else {
            end = middle;
        }
    }
    return nums[begin];
}

}  // namespace leetcode::find_minimum_in_rotated_sorted_array
