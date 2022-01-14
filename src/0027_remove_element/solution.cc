#include "0027_remove_element.h"

namespace leetcode::remove_element {

int Solution::remove_element(std::vector<int>& nums, int val) {
    int start = 0, end = static_cast<int>(nums.size()) - 1;
    while (start <= end) {
        if (nums[start] == val) {
            std::swap(nums[start], nums[end--]);
        } else {
            ++start;
        }
    }
    return start;
}

}  // namespace leetcode::remove_element
