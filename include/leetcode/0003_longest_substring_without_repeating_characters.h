#ifndef _LEETCODE_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H_
#define _LEETCODE_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H_

#include <string>

namespace leetcode::longest_substring_without_repeating_characters {

#define SOLUTION_CLASS_DECLARATION                                    \
    class Solution {                                                  \
    public:                                                           \
        static int length_of_longest_substring(const std::string& s); \
    }

namespace first_solution {
SOLUTION_CLASS_DECLARATION;
}

namespace two_pointers {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::longest_substring_without_repeating_characters

#endif