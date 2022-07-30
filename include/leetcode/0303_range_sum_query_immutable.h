#ifndef LEETCODE_RANGE_SUM_QUERY_IMMUTABLE_H_
#define LEETCODE_RANGE_SUM_QUERY_IMMUTABLE_H_

#include <vector>

namespace leetcode::range_sum_query_immutable {

class NumArray {
public:
    NumArray(const std::vector<int>& nums);

    int sum_range(int left, int right);

private:
    std::vector<int> acc;
};

}  // namespace leetcode::range_sum_query_immutable

#endif
