#include "0026_remove_duplicates_from_sorted_array.h"

namespace leetcode::remove_duplicates_from_sorted_array {

int Solution::remove_duplicates(std::vector<int>& nums) {
    int nums_size = static_cast<int>(nums.size());
    if (nums_size == 0) {
        return nums_size;
    }
    int index = 0, curr_index = 1;
    while (curr_index < nums_size) {
        if (nums[curr_index] == nums[index]) {
            ++curr_index;
            continue;
        }
        std::swap(nums[++index], nums[curr_index++]);
    }
    return index + 1;
}

}  // namespace leetcode::remove_duplicates_from_sorted_array
