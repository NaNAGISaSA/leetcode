#include "0039_combination_sum.h"

namespace leetcode::combination_sum {

namespace {
void backtrack(const std::vector<int>& candidates,
               const int target,
               std::vector<int>& candidate_count,
               const size_t index,
               const int sum,
               std::vector<std::vector<int>>& result) {
    if (sum == target) {
        std::vector<int> tmp;
        for (size_t i = 0; i < index; ++i) {
            for (int j = 0; j < candidate_count[i]; ++j) {
                tmp.push_back(candidates[i]);
            }
        }
        result.push_back(std::move(tmp));
        return;
    }
    if (index == candidates.size() || sum > target) {
        return;
    }
    int num = 0;
    while (sum + num * candidates[index] <= target) {
        candidate_count[index] = num;
        backtrack(candidates, target, candidate_count, index + 1, sum + num * candidates[index], result);
        ++num;
    }
}
}  // namespace

std::vector<std::vector<int>> Solution::combination_sum(const std::vector<int>& candidates, int target) {
    std::vector<std::vector<int>> result;
    std::vector<int> candidate_count(candidates.size(), 0);
    backtrack(candidates, target, candidate_count, 0, 0, result);
    return result;
}

}  // namespace leetcode::combination_sum
