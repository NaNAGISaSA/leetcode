#include "0303_range_sum_query_immutable.h"

namespace leetcode::range_sum_query_immutable {

NumArray::NumArray(const std::vector<int>& nums) : acc(nums.size() + 1, 0) {
    for (size_t i = 0; i < nums.size(); ++i) {
        acc[i + 1] = acc[i] + nums[i];
    }
}

int NumArray::sum_range(int left, int right) {
    return acc[right + 1] - acc[left];
}

}  // namespace leetcode::range_sum_query_immutable
