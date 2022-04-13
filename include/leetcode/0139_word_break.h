#ifndef _LEETCODE_WORD_BREAK_H_
#define _LEETCODE_WORD_BREAK_H_

#include <string>
#include <vector>

namespace leetcode::word_break {

class Solution {
public:
    static bool word_break(std::string& s, std::vector<std::string>& word_dict);
};

}  // namespace leetcode::word_break

#endif