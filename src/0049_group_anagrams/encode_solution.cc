#include <unordered_map>

#include "0049_group_anagrams.h"

namespace leetcode::group_anagrams::encode {

namespace {
std::string encode(const std::string& str) {
    std::vector<int> count_vec(26, 0);
    for (auto& chr : str) {
        ++count_vec[chr - 'a'];
    }
    std::string result("");
    for (auto& num : count_vec) {
        result += std::to_string(num) + "-";
    }
    return result;
}
}  // namespace

std::vector<std::vector<std::string>> Solution::group_anagrams(std::vector<std::string>& strs) {
    std::unordered_map<std::string, std::vector<std::string>> str_map;
    for (auto& str : strs) {
        // Time Complexity: sort O(N*KlogK) v.s. encode O(N*K)
        std::string encode_str = encode(str);
        if (str_map.find(encode_str) == str_map.end()) {
            str_map.insert({encode_str, {}});
        }
        str_map[encode_str].push_back(std::move(str));
    }
    std::vector<std::vector<std::string>> result;
    for (auto it = str_map.begin(); it != str_map.end(); ++it) {
        result.push_back(std::move(it->second));
    }
    return result;
}

}  // namespace leetcode::group_anagrams::encode