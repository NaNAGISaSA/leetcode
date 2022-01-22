#include "0033_search_in_rotated_sorted_array.h"

namespace leetcode::search_in_rotated_sorted_array::two_path {

int Solution::search(const std::vector<int>& nums, int target) {
    int begin = 0, middle = 0, end = static_cast<int>(nums.size() - 1);
    // find the smallest number first
    while (begin < end) {
        middle = begin + (end - begin) / 2;
        if (nums[middle] > nums[end]) {
            begin = middle + 1;
        } else {
            end = middle;
        }
    }

    end = static_cast<int>(nums.size() - 1);
    if (nums[end] < target) {
        end = begin - 1;
        begin = 0;
    }

    while (begin <= end) {
        middle = begin + (end - begin) / 2;
        if (nums[middle] == target) {
            return middle;
        } else if (nums[middle] > target) {
            end = middle - 1;
        } else {
            begin = middle + 1;
        }
    }
    return -1;
}

}  // namespace leetcode::search_in_rotated_sorted_array::two_path