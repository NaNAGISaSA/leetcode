#include "0139_word_break.h"

namespace leetcode::word_break::dp_one {

bool Solution::word_break(std::string& s, std::vector<std::string>& word_dict) {
    std::vector<bool> dp_vec(s.size() + 1, false);
    dp_vec[0] = true;
    for (size_t i = 1; i <= s.size(); ++i) {
        for (size_t j = 0; j < word_dict.size(); ++j) {
            size_t word_size = word_dict[j].size();
            if (word_size <= i && dp_vec[i - word_size] && s.substr(i - word_size, word_size) == word_dict[j]) {
                dp_vec[i] = true;
                break;
            }
        }
    }
    return dp_vec.back();
}

}  // namespace leetcode::word_break::dp_one
