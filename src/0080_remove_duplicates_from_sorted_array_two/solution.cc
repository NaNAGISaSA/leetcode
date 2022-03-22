#include "0080_remove_duplicates_from_sorted_array_two.h"

namespace leetcode::remove_duplicates_from_sorted_array_two {

int Solution::remove_duplicates(std::vector<int>& nums) {
    int left = 1, curr_num = nums[0], curr_count = 1;
    int result = 1;
    for (int i = 1; i < static_cast<int>(nums.size()); ++i) {
        if (nums[i] == curr_num) {
            ++curr_count;
            if (curr_count < 3) {
                ++result;
                nums[left++] = curr_num;
            }
        } else {
            curr_num = nums[i];
            curr_count = 1;
            nums[left++] = curr_num;
            ++result;
        }
    }
    return result;
}

}  // namespace leetcode::remove_duplicates_from_sorted_array_two