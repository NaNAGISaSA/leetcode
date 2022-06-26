#include "0229_majority_element_two.h"

#include <unordered_map>

namespace leetcode::majority_element_two {

// This is the common algorithm for k >= 2 case
std::vector<int> Solution::majority_element(const std::vector<int>& nums) {
    std::unordered_map<int, int> count_map;
    count_map.reserve(2);
    for (auto& num : nums) {
        if (count_map.find(num) != count_map.end()) {
            ++count_map[num];
            continue;
        }
        if (count_map.size() == 2) {
            for (auto it = count_map.begin(); it != count_map.end();) {
                if (it->second == 1) {
                    it = count_map.erase(it);
                } else {
                    it->second -= 1;
                    ++it;
                }
            }
        } else {
            count_map.insert({num, 1});
        }
    }
    if (count_map.size() == 0) {
        return {};
    }
    for (auto it = count_map.begin(); it != count_map.end(); ++it) {
        it->second = 0;
    }
    for (auto& num : nums) {
        if (count_map.find(num) != count_map.end()) {
            ++count_map[num];
        }
    }
    std::vector<int> result;
    for (auto it = count_map.begin(); it != count_map.end(); ++it) {
        if (it->second > static_cast<int>(nums.size() / 3)) {
            result.push_back(it->first);
        }
    }
    return result;
}

}  // namespace leetcode::majority_element_two
