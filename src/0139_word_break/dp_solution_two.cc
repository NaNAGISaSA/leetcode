#include <unordered_set>

#include "0139_word_break.h"

namespace leetcode::word_break::dp_two {

bool Solution::word_break(std::string& s, std::vector<std::string>& word_dict) {
    std::unordered_set<std::string> word_set;
    for (auto& str : word_dict) {
        word_set.insert(std::move(str));
    }
    std::vector<bool> dp_vec(s.size() + 1, false);
    dp_vec[0] = true;
    for (size_t i = 0; i < s.size(); ++i) {
        for (size_t j = i; j <= i; --j) {
            if (word_set.find(s.substr(j, i - j + 1)) != word_set.end() && dp_vec[j]) {
                dp_vec[i + 1] = true;
                break;
            }
        }
    }
    return dp_vec.back();
}

}  // namespace leetcode::word_break::dp_two
