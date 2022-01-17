#ifndef _LEETCODE_SUBSTRING_WITH_CONCATENATION_OF_ALL_WORDS_H_
#define _LEETCODE_SUBSTRING_WITH_CONCATENATION_OF_ALL_WORDS_H_

#include <string>
#include <vector>

namespace leetcode::substring_with_concatenation_of_all_words {

class Solution {
public:
    static std::vector<int> find_substring(const std::string& s, const std::vector<std::string>& words);
};

}  // namespace leetcode::substring_with_concatenation_of_all_words

#endif
