#include <algorithm>
#include <unordered_set>

#include "0140_word_break_two.h"

namespace leetcode::word_break_two::common_dfs {

namespace {
void backtrace(const std::string& s,
               size_t start,
               size_t max_word_size,
               std::vector<std::string>& curr,
               std::vector<std::string>& result,
               const std::unordered_set<std::string>& str_set) {
    if (start == s.size()) {
        std::string tmp = curr[0];
        for (size_t i = 1; i < curr.size(); ++i) {
            tmp.push_back(' ');
            tmp += curr[i];
        }
        result.push_back(std::move(tmp));
        return;
    }
    for (size_t i = 0; i < max_word_size; ++i) {
        if (start + i == s.size()) {
            return;
        }
        std::string tmp = s.substr(start, i + 1);
        if (str_set.find(tmp) != str_set.end()) {
            curr.push_back(std::move(tmp));
            backtrace(s, start + i + 1, max_word_size, curr, result, str_set);
            curr.pop_back();
        }
    }
}
}  // namespace

std::vector<std::string> Solution::word_break(std::string& s, std::vector<std::string>& word_dict) {
    std::unordered_set<std::string> str_set;
    str_set.reserve(word_dict.size());
    size_t max_word_size = 0;
    for (auto& str : word_dict) {
        max_word_size = std::max(max_word_size, str.size());
        str_set.insert(std::move(str));
    }
    std::vector<std::string> result;
    std::vector<std::string> curr;
    backtrace(s, 0, max_word_size, curr, result, str_set);
    return result;
}

}  // namespace leetcode::word_break_two::common_dfs
