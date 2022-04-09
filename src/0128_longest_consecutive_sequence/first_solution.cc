#include <unordered_map>

#include "0128_longest_consecutive_sequence.h"

namespace leetcode::longest_consecutive_sequence::first {

int Solution::longest_consecutive(const std::vector<int>& nums) {
    std::unordered_map<int, int> map;
    int result = 0, range = 0;
    for (auto& num : nums) {
        if (map.find(num) != map.end()) {
            continue;
        }
        map.insert({num, 1});
        range = 1;
        if (map.find(num - 1) != map.end()) {
            range = map.at(num - 1) + 1;
            map.at(num) = range;
            map.at(num - map.at(num - 1)) = range;
        }
        if (map.find(num + 1) != map.end()) {
            range = map.at(num + 1) + map.at(num);
            map.at(num - map.at(num) + 1) = range;
            map.at(num + map.at(num + 1)) = range;
        }
        result = std::max(result, range);
    }
    return result;
}

}  // namespace leetcode::longest_consecutive_sequence::first
