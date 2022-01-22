#include "0033_search_in_rotated_sorted_array.h"

namespace leetcode::search_in_rotated_sorted_array::one_path {

int Solution::search(const std::vector<int>& nums, int target) {
    int start = 0, middle = 0, end = static_cast<int>(nums.size() - 1);
    while (start <= end) {
        middle = (start + end) / 2;
        if (nums[middle] == target) {
            return middle;
        }
        if (nums[middle] < nums[start]) {
            if (target > nums[middle] && target <= nums[end]) {
                start = middle + 1;
            } else {
                end = middle - 1;
            }
        } else {
            if (target >= nums[start] && target < nums[middle]) {
                end = middle - 1;
            } else {
                start = middle + 1;
            }
        }
    }
    return -1;
}

}  // namespace leetcode::search_in_rotated_sorted_array::one_path
