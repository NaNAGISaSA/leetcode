#ifndef _LEETCODE_WORD_BREAK_TWO_H_
#define _LEETCODE_WORD_BREAK_TWO_H_

#include <string>
#include <vector>

namespace leetcode::word_break_two {

#define SOLUTION_CLASS_DECLARATION                                                                       \
    class Solution {                                                                                     \
    public:                                                                                              \
        static std::vector<std::string> word_break(std::string& s, std::vector<std::string>& word_dict); \
    }

namespace common_dfs {
SOLUTION_CLASS_DECLARATION;
}

namespace memorized_dfs {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::word_break_two

#endif