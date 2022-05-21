#include <unordered_map>

#include "0187_repeated_dna_sequences.h"

namespace leetcode::repeated_dna_sequences {

std::vector<std::string> Solution::find_repeated_dna_sequences(const std::string& s) {
    if (s.size() < 11) {
        return {};
    }
    // this problem is all about reduce space complexity
    const std::unordered_map<char, int> map{{'A', 0}, {'C', 1}, {'G', 2}, {'T', 3}};
    std::unordered_map<int, int> count_map;
    std::vector<std::string> result;
    int value = 0;
    for (size_t i = 0; i < 10; ++i) {
        value <<= 2;
        value |= map.at(s[i]);
    }
    count_map.insert({value, 1});
    for (size_t i = 10; i < s.size(); ++i) {
        value &= 0x3FFFF;
        value <<= 2;
        value |= map.at(s[i]);
        if (count_map.find(value) == count_map.end()) {
            count_map.insert({value, 1});
        } else {
            count_map[value] += 1;
            if (count_map[value] == 2) {
                result.push_back(s.substr(i - 9, 10));
            }
        }
    }
    return result;
}

}  // namespace leetcode::repeated_dna_sequences
