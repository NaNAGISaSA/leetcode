#include "0217_contains_duplicate.h"

#include <unordered_set>

namespace leetcode::contains_duplicate {

bool Solution::contains_duplicate(const std::vector<int>& nums) {
    std::unordered_set<int> set;
    for (auto& num : nums) {
        if (set.find(num) != set.end()) {
            return true;
        }
        set.insert(num);
    }
    return false;
}

}  // namespace leetcode::contains_duplicate
