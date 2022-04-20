#ifndef _LEETCODE_WORD_LADDER_H_
#define _LEETCODE_WORD_LADDER_H_

#include <string>
#include <vector>

namespace leetcode::word_ladder {

class Solution {
public:
    static int ladder_length(std::string begin_word, std::string end_word, std::vector<std::string>& word_list);
};

}  // namespace leetcode::word_ladder

#endif