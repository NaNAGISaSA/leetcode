#include "0216_combination_sum_three.h"

namespace leetcode::combination_sum_three {

namespace {
void backtrace(std::vector<std::vector<int>>& result,
               std::vector<int>& acc,
               const int k,
               const int target,
               const int start) {
    int acc_size = static_cast<int>(acc.size());
    if (target == 0 && acc_size == k) {
        result.push_back(acc);
        return;
    }
    if (target <= 0 || acc_size == k) {
        return;
    }
    for (int i = start; i < 10; ++i) {
        acc.push_back(i);
        backtrace(result, acc, k, target - i, i + 1);
        acc.pop_back();
    }
}
}  // namespace

std::vector<std::vector<int>> Solution::combination_sum3(int k, int n) {
    std::vector<std::vector<int>> result;
    std::vector<int> acc;
    acc.reserve(k);
    backtrace(result, acc, k, n, 1);
    return result;
}

}  // namespace leetcode::combination_sum_three
