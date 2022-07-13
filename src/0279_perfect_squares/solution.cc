#include "0279_perfect_squares.h"

#include <algorithm>
#include <vector>

namespace leetcode::perfect_squares {

int Solution::num_squares(int n) {
    std::vector<int> dp_vec(n + 1, n);
    dp_vec[0] = 0;
    for (size_t i = 1; i < dp_vec.size(); ++i) {
        for (size_t j = 1; j * j <= i; ++j) {
            dp_vec[i] = std::min(dp_vec[i], 1 + dp_vec[i - j * j]);
        }
    }
    return dp_vec.back();
}

}  // namespace leetcode::perfect_squares
