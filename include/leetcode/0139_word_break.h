#ifndef _LEETCODE_WORD_BREAK_H_
#define _LEETCODE_WORD_BREAK_H_

#include <string>
#include <vector>

namespace leetcode::word_break {

#define SOLUTION_CLASS_DECLARATION                                                   \
    class Solution {                                                                 \
    public:                                                                          \
        static bool word_break(std::string& s, std::vector<std::string>& word_dict); \
    }

namespace dp_one {
SOLUTION_CLASS_DECLARATION;
}

namespace dp_two {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::word_break

#endif