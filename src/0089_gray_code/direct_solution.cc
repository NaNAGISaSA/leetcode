#include "0089_gray_code.h"

namespace leetcode::gray_code::direct {

/*
n = 2:
00   01   11   10

n = 2 -> 3:
000  001  011  010 ----
                      |
100  101  111  110 <---
*/
std::vector<int> Solution::gray_code(int n) {
    // 1 <= n <= 16
    std::vector<int> res;
    res.reserve(1 << n);
    res.push_back(0);
    for (int i = 1; i <= n; ++i) {
        int begin_index = 1 << (i - 1);
        int end_index = 1 << i;
        for (int j = begin_index; j < end_index; ++j) {
            res.push_back(res[end_index - 1 - j] | begin_index);
        }
    }
    return res;
}

}  // namespace leetcode::gray_code::direct
