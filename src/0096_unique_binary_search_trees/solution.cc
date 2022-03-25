#include <vector>

#include "0096_unique_binary_search_trees.h"

namespace leetcode::unique_binary_search_trees {

int Solution::num_trees(int n) {
    if (n < 3) {
        return n;
    }
    std::vector<int> vec(n + 1, 0);
    vec[0] = 1;
    vec[1] = 1;
    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            vec[i] += vec[j] * vec[i - j - 1];
        }
    }
    return vec.back();
}

}  // namespace leetcode::unique_binary_search_trees
