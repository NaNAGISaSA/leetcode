#include "0338_counting_bits.h"

namespace leetcode::counting_bits::first {

std::vector<int> Solution::count_bits(int n) {
    if (n == 0) {
        return {0};
    }
    std::vector<int> pow2;
    for (int i = 1; i <= n; i *= 2) {
        pow2.push_back(i);
    }
    std::vector<int> result{0};
    result.reserve(n + 1);
    int idx_prev = -1, idx_curr = 0;
    for (int num = 1; num <= n; ++num) {
        if (num == pow2[idx_curr]) {
            result.push_back(1);
            ++idx_prev;
            ++idx_curr;
        } else {
            result.push_back(1 + result[num - pow2[idx_prev]]);
        }
    }
    return result;
}

}  // namespace leetcode::counting_bits::first
