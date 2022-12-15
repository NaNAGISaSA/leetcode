#include "0410_split_array_largest_sum.h"

#include <algorithm>

namespace leetcode::split_array_largest_sum::bs {

int Solution::split_array(const std::vector<int>& nums, int k) {
    int begin = nums[0], end = 0;
    for (auto num : nums) {
        begin = std::max(begin, num);
        end += num;
    }

    auto can_split = [&nums, &k](int target) {
        int split_num = 1, curr_sum = 0;
        for (auto num : nums) {
            curr_sum += num;
            if (curr_sum > target) {
                curr_sum = num;
                ++split_num;
            }
        }
        return split_num <= k;
    };

    int middle = 0, result = begin;
    while (begin <= end) {
        middle = begin + (end - begin) / 2;
        if (can_split(middle)) {
            end = middle - 1;
            result = middle;
        } else {
            begin = middle + 1;
        }
    }
    return result;
}

}  // namespace leetcode::split_array_largest_sum::bs
