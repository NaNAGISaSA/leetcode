#include <algorithm>
#include <unordered_map>
#include <unordered_set>

#include "0140_word_break_two.h"

namespace leetcode::word_break_two::memorized_dfs {

namespace {
std::vector<std::string> backtrace(const std::string& s,
                                   size_t start,
                                   size_t max_size,
                                   const std::unordered_set<std::string>& set,
                                   std::unordered_map<size_t, std::vector<std::string>> map) {
    if (map.find(start) != map.end()) {
        return map[start];
    }
    std::vector<std::string> tmp_vec;
    for (size_t i = 0; i < max_size && start + i < s.size(); ++i) {
        std::string curr_str = s.substr(start, i + 1);
        if (set.find(curr_str) == set.end()) {
            continue;
        }
        if (start + i + 1 == s.size()) {
            tmp_vec.push_back(std::move(curr_str));
        } else {
            std::vector<std::string> back_strs = backtrace(s, start + i + 1, max_size, set, map);
            if (!back_strs.empty()) {
                for (auto& str : back_strs) {
                    tmp_vec.push_back(curr_str + " " + std::move(str));
                }
            }
        }
    }
    map.insert({start, std::move(tmp_vec)});
    return map[start];
}
}  // namespace

std::vector<std::string> Solution::word_break(std::string& s, std::vector<std::string>& word_dict) {
    std::unordered_set<std::string> set;
    size_t max_size = 0;
    for (auto& str : word_dict) {
        max_size = std::max(max_size, str.size());
        set.insert(std::move(str));
    }
    std::unordered_map<size_t, std::vector<std::string>> map;
    return backtrace(s, 0, max_size, set, map);
}

}  // namespace leetcode::word_break_two::memorized_dfs
