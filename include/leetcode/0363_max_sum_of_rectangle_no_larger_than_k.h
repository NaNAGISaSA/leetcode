#ifndef LEETCODE_MAX_SUM_OF_RECTANGLE_NO_LARGER_THAN_K_H_
#define LEETCODE_MAX_SUM_OF_RECTANGLE_NO_LARGER_THAN_K_H_

#include <vector>

namespace leetcode::max_sum_of_rectangle_no_larger_than_k {

class Solution {
public:
    static int max_sum_submatrix(const std::vector<std::vector<int>>& matrix, int k);
};

}  // namespace leetcode::max_sum_of_rectangle_no_larger_than_k

#endif
