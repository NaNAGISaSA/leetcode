#include <algorithm>

#include "0040_combination_sum_two.h"

namespace leetcode::combination_sum_two {

namespace {
void backtrace(const std::vector<int>& candidates,
               int target,
               size_t index,
               std::vector<int>& current,
               std::vector<std::vector<int>>& result) {
    if (target == 0) {
        result.push_back(current);
        return;
    }
    if (target < 0 || index >= candidates.size()) {
        return;
    }
    for (size_t i = index; i < candidates.size(); ++i) {
        if (i > index && candidates[i] == candidates[i - 1]) {
            continue;  // after sort, it is the same as count table
        }
        current.push_back(candidates[i]);
        backtrace(candidates, target - candidates[i], i + 1, current, result);
        current.pop_back();
    }
}
}  // namespace

std::vector<std::vector<int>> Solution::combination_sum2(std::vector<int>& candidates, int target) {
    std::vector<std::vector<int>> result;
    std::vector<int> current;
    std::sort(candidates.begin(), candidates.end());
    backtrace(candidates, target, 0, current, result);
    return result;
}

}  // namespace leetcode::combination_sum_two