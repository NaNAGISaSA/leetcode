#ifndef LEETCODE_RANGE_SUM_QUERY_MUTABLE_H_
#define LEETCODE_RANGE_SUM_QUERY_MUTABLE_H_

#include <memory>
#include <vector>

namespace leetcode::range_sum_query_mutable {

class NumArray {
public:
    NumArray(std::vector<int>& nums);
    ~NumArray();

    void update(int index, int val);
    int sum_range(int left, int right);

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};

}  // namespace leetcode::range_sum_query_mutable

#endif
