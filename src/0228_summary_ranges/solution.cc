#include "0228_summary_ranges.h"

namespace leetcode::summary_ranges {

std::vector<std::string> Solution::summary_ranges(const std::vector<int>& nums) {
    size_t num_size = nums.size(), begin = 0, end = 0;
    std::vector<std::string> result;
    while (end < num_size) {
        ++end;
        if (end == num_size || static_cast<long>(nums[end]) - nums[end - 1] != 1L) {
            if (end - begin == 1) {
                result.push_back(std::to_string(nums[begin]));
            } else {
                result.push_back(std::to_string(nums[begin]) + "->" + std::to_string(nums[end - 1]));
            }
            begin = end;
        }
    }
    return result;
}

}  // namespace leetcode::summary_ranges
