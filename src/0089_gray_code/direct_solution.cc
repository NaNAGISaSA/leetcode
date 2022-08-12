#include "0089_gray_code.h"

namespace leetcode::gray_code::direct {

/*
 * n = 2:
 * 00   01   11   10
 *
 * n = 2 -> 3:
 * 000  001  011  010 ----
 *                       |
 * 100  101  111  110 <---
 */
std::vector<int> Solution::gray_code(int n) {
    std::vector<int> result{0};
    result.reserve(1 << n);
    for (int i = 1; i <= n; ++i) {
        int add_on = 1 << (i - 1);
        int add_num_size = static_cast<int>(result.size()) - 1;
        for (int j = add_num_size; j >= 0; --j) {
            result.push_back(add_on + result[j]);
        }
    }
    return result;
}

}  // namespace leetcode::gray_code::direct
