#ifndef LEETCODE_COUNT_OF_RANGE_SUM_H_
#define LEETCODE_COUNT_OF_RANGE_SUM_H_

#include <vector>

namespace leetcode::count_of_range_sum {

class Solution {
public:
    static int count_range_sum(const std::vector<int>& nums, int lower, int upper);
};

}  // namespace leetcode::count_of_range_sum

#endif