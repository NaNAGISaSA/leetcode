#ifndef _LEETCODE_MAXIMUM_SUBARRAY_H_
#define _LEETCODE_MAXIMUM_SUBARRAY_H_

#include <vector>

namespace leetcode::maximum_subarray {

class Solution {
public:
    static int max_subarray(const std::vector<int>& nums);
};

}  // namespace leetcode::maximum_subarray

#endif