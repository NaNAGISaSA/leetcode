#include "0039_combination_sum.h"

#include <algorithm>

namespace leetcode::combination_sum {

namespace {
void backtrack(const std::vector<int>& candidates,
               std::vector<std::vector<int>>& result,
               std::vector<int>& curr,
               const size_t start,
               const int target) {
    if (target <= 0) {
        if (target == 0) {
            result.push_back(curr);
        }
        return;
    }
    for (size_t i = start; i < candidates.size(); ++i) {
        curr.push_back(candidates[i]);
        backtrack(candidates, result, curr, i, target - candidates[i]);
        curr.pop_back();
    }
}
}  // namespace

std::vector<std::vector<int>> Solution::combination_sum(std::vector<int>& candidates, int target) {
    std::vector<std::vector<int>> result;
    std::vector<int> curr;
    std::sort(candidates.begin(), candidates.end());
    backtrack(candidates, result, curr, 0, target);
    return result;
}

}  // namespace leetcode::combination_sum
