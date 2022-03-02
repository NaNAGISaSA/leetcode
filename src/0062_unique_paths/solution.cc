#include <vector>

#include "0062_unique_paths.h"

namespace leetcode::unique_paths {

int Solution::unique_paths(int m, int n) {
    if (m == 1 || n == 1) {
        return 1;
    }
    std::vector<int> dp_vec(n, 1);
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            dp_vec[j] += dp_vec[j - 1];
        }
    }
    return dp_vec.back();
}

}  // namespace leetcode::unique_paths
