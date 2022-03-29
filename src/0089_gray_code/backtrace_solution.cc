#include <bitset>

#include "0089_gray_code.h"

namespace leetcode::gray_code::backtrace {

namespace {
void backtrace(std::vector<int>& res, std::bitset<32>& bitset, int idx) {
    if (idx < 0) {
        res.push_back(static_cast<int>(bitset.to_ulong()));
        return;
    }
    backtrace(res, bitset, idx - 1);
    bitset.flip(idx);
    backtrace(res, bitset, idx - 1);
}
}  // namespace

std::vector<int> Solution::gray_code(int n) {
    // 1 <= n <= 16
    std::vector<int> res;
    std::bitset<32> bitset;
    backtrace(res, bitset, n - 1);
    return res;
}

}  // namespace leetcode::gray_code::backtrace
