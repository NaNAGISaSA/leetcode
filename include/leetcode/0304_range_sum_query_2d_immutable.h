#ifndef LEETCODE_RANGE_SUM_QUERY_2D_IMMUTABLE_H_
#define LEETCODE_RANGE_SUM_QUERY_2D_IMMUTABLE_H_

#include <vector>

namespace leetcode::range_sum_query_2d_immutable {

class NumMatrix {
public:
    NumMatrix(const std::vector<std::vector<int>>& matrix);

    int sum_region(int row1, int col1, int row2, int col2);

private:
    std::vector<std::vector<int>> acc;
};

}  // namespace leetcode::range_sum_query_2d_immutable

#endif
