#ifndef _LEETCODE_WORD_BREAK_TWO_H_
#define _LEETCODE_WORD_BREAK_TWO_H_

#include <string>
#include <vector>

namespace leetcode::word_break_two {

class Solution {
public:
    static std::vector<std::string> word_break(std::string& s, std::vector<std::string>& word_dict);
};

}  // namespace leetcode::word_break_two

#endif