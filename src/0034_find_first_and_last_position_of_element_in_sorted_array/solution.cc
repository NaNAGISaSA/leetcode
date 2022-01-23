#include <string>

#include "0034_find_first_and_last_position_of_element_in_sorted_array.h"

namespace leetcode::find_first_and_last_position_of_element_in_sorted_array {

namespace {
std::vector<int> binary_search(const std::vector<int>& nums,
                               int begin,
                               int end,
                               int target,
                               const std::string& direction) {
    int middle = 0;
    while (begin <= end) {
        middle = begin + (end - begin) / 2;
        if (nums[middle] == target) {
            std::vector<int> result{middle, middle};
            if (direction != "right" && middle > begin && nums[middle - 1] == target) {
                result[0] = binary_search(nums, begin, middle - 1, target, "left")[0];
            }
            if (direction != "left" && middle < end && nums[middle + 1] == target) {
                result[1] = binary_search(nums, middle + 1, end, target, "right")[1];
            }
            return result;
        } else if (nums[middle] > target) {
            end = middle - 1;
        } else {
            begin = middle + 1;
        }
    }
    return {-1, -1};
}
}  // namespace

std::vector<int> Solution::search_range(const std::vector<int>& nums, int target) {
    return nums.size() == 0 ? std::vector<int>(2, -1) :
                              binary_search(nums, 0, static_cast<int>(nums.size() - 1), target, "middle");
}

}  // namespace leetcode::find_first_and_last_position_of_element_in_sorted_array
