#include "0162_find_peak_element.h"

namespace leetcode::find_peak_element {

int Solution::find_peak_element(const std::vector<int>& nums) {
    // You may imagine that nums[-1] = nums[n] = -∞
    // nums[i] != nums[i + 1] for all valid i
    if (nums.size() == 1 || nums[0] > nums[1]) {
        return 0;
    }
    int nums_size = static_cast<int>(nums.size());
    if (nums[nums_size - 1] > nums[nums_size - 2]) {
        return nums_size - 1;
    }
    int begin = 1, middle = 0, end = nums_size - 2;
    while (begin < end) {
        middle = begin + (end - begin) / 2;
        if (nums[middle] < nums[middle - 1]) {
            end = middle - 1;
        } else if (nums[middle] < nums[middle + 1]) {
            begin = middle + 1;
        } else {
            return middle;
        }
    }
    return begin;
}

}  // namespace leetcode::find_peak_element
