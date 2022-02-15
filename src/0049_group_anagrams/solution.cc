#include <algorithm>
#include <unordered_map>

#include "0049_group_anagrams.h"

namespace leetcode::group_anagrams {

std::vector<std::vector<std::string>> Solution::group_anagrams(std::vector<std::string>& strs) {
    std::unordered_map<std::string, std::vector<std::string>> result_map;
    for (size_t i = 0; i < strs.size(); ++i) {
        std::string tmp = strs[i];
        std::sort(strs[i].begin(), strs[i].end());
        if (result_map.find(strs[i]) == result_map.end()) {
            result_map.insert({strs[i], {}});
        }
        result_map[strs[i]].push_back(std::move(tmp));
    }
    std::vector<std::vector<std::string>> result;
    for (auto it = result_map.begin(); it != result_map.end(); ++it) {
        result.push_back(std::move(it->second));
    }
    return result;
}

}  // namespace leetcode::group_anagrams
