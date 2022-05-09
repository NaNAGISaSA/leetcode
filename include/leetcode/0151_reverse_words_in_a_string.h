#ifndef _LEETCODE_REVERSE_WORDS_IN_A_STRING_H_
#define _LEETCODE_REVERSE_WORDS_IN_A_STRING_H_

#include <string>

namespace leetcode::reverse_words_in_a_string {

#define SOLUTION_CLASS_DECLARATION                        \
    class Solution {                                      \
    public:                                               \
        static std::string reverse_words(std::string& s); \
    }

namespace direct {
SOLUTION_CLASS_DECLARATION;
}

namespace inplace {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::reverse_words_in_a_string

#endif