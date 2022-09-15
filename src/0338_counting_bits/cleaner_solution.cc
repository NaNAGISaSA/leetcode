#include "0338_counting_bits.h"

namespace leetcode::counting_bits::cleaner {

std::vector<int> Solution::count_bits(int n) {
    std::vector<int> result(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        result[i] = result[i / 2] + (i & 1);
    }
    return result;
}

}  // namespace leetcode::counting_bits::cleaner
