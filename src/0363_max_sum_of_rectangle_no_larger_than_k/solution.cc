#include "0363_max_sum_of_rectangle_no_larger_than_k.h"

#include <algorithm>
#include <limits>
#include <set>

namespace leetcode::max_sum_of_rectangle_no_larger_than_k {

int Solution::max_sum_submatrix(const std::vector<std::vector<int>>& matrix, int k) {
    size_t m = matrix.size(), n = matrix[0].size();
    int result = std::numeric_limits<int>::min();
    for (size_t i = 0; i < m; ++i) {
        std::vector<int> acc(n, 0);
        for (size_t j = i; j < m; ++j) {
            for (size_t k = 0; k < n; ++k) {
                acc[k] += matrix[j][k];
            }

            std::set<int> set{0};
            int acc_tmp = 0;
            for (auto num : acc) {
                acc_tmp += num;
                auto it = set.lower_bound(acc_tmp - k);
                if (it != set.end()) {
                    result = std::max(result, acc_tmp - *it);
                }
                set.insert(acc_tmp);
            }
        }
    }
    return result;
}

}  // namespace leetcode::max_sum_of_rectangle_no_larger_than_k
