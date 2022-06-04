#ifndef _LEETCODE_MINIMUM_SIZE_SUBARRAY_SUM_H_
#define _LEETCODE_MINIMUM_SIZE_SUBARRAY_SUM_H_

#include <vector>

namespace leetcode::minimum_size_subarray_sum {

class Solution {
public:
    static int min_subarray_len(int target, const std::vector<int>& nums);
};

}  // namespace leetcode::minimum_size_subarray_sum

#endif