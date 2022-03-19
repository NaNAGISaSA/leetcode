#include "0077_combinations.h"

namespace {
void backtrack(int n, int k, int start, std::vector<int>& acc, std::vector<std::vector<int>>& result) {
    if (k == 0) {
        result.push_back(acc);
        return;
    }
    // here, use n - k + 1 as upper bound can save a lot of time
    for (int i = start; i <= n - k + 1; ++i) {
        acc.push_back(i);
        backtrack(n, k - 1, i + 1, acc, result);
        acc.pop_back();
    }
}
}  // namespace

namespace leetcode::combinations {

std::vector<std::vector<int>> Solution::combine(int n, int k) {
    std::vector<std::vector<int>> result;
    std::vector<int> acc;
    backtrack(n, k, 1, acc, result);
    return result;
}

}  // namespace leetcode::combinations
