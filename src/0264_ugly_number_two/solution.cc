#include "0264_ugly_number_two.h"

#include <algorithm>
#include <vector>

namespace leetcode::ugly_number_two {

int Solution::nth_ugly_number(int n) {
    std::vector<int> dp_vec(n, 1);
    int idx2 = 0, idx3 = 0, idx5 = 0;
    for (size_t i = 1; i < dp_vec.size(); ++i) {
        int res2 = 2 * dp_vec[idx2], res3 = 3 * dp_vec[idx3], res5 = 5 * dp_vec[idx5];
        dp_vec[i] = std::min(res2, std::min(res3, res5));
        if (dp_vec[i] == res2) {
            ++idx2;
        }
        if (dp_vec[i] == res3) {
            ++idx3;
        }
        if (dp_vec[i] == res5) {
            ++idx5;
        }
    }
    return dp_vec.back();
}

}  // namespace leetcode::ugly_number_two
