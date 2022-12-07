#include "0403_frog_jump.h"

#include <algorithm>
#include <unordered_set>

namespace leetcode::frog_jump {

bool Solution::can_cross(const std::vector<int>& stones) {
    if (stones[1] != 1) {
        return false;
    }
    std::vector<std::unordered_set<int>> step_vec(stones.size(), std::unordered_set<int>{});
    step_vec[1].insert(1);
    step_vec[1].insert(2);
    std::vector<int> max_val_vec(stones.size(), 0);
    max_val_vec[1] = 2;
    for (size_t i = 1, e = stones.size(); i < e; ++i) {
        for (size_t j = i + 1; j < e; ++j) {
            int step = stones[j] - stones[i];
            if (step > max_val_vec[i]) {
                break;
            }
            if (step_vec[i].find(step) != step_vec[i].end()) {
                step_vec[j].insert(step);
                step_vec[j].insert(step - 1);
                step_vec[j].insert(step + 1);
                max_val_vec[j] = std::max(max_val_vec[j], step + 1);
            }
        }
    }
    return !step_vec.back().empty();
}

}  // namespace leetcode::frog_jump
