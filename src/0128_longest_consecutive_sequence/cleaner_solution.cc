#include <unordered_map>

#include "0128_longest_consecutive_sequence.h"

namespace leetcode::longest_consecutive_sequence::cleaner {

int Solution::longest_consecutive(const std::vector<int>& nums) {
    std::unordered_map<int, int> map;
    int result = 0;
    for (auto& num : nums) {
        if (map.find(num) != map.end()) {
            continue;
        }
        int left_range = map.find(num - 1) == map.end() ? 0 : map[num - 1];
        int right_range = map.find(num + 1) == map.end() ? 0 : map[num + 1];
        map.insert({num, left_range + right_range + 1});
        map[num - left_range] = map[num];
        map[num + right_range] = map[num];
        result = std::max(result, map[num]);
    }
    return result;
}

}  // namespace leetcode::longest_consecutive_sequence::cleaner
