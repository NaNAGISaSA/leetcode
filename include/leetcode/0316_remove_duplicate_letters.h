#ifndef LEETCODE_REMOVE_DUPLICATE_LETTERS_H_
#define LEETCODE_REMOVE_DUPLICATE_LETTERS_H_

#include <string>

namespace leetcode::remove_duplicate_letters {

#define SOLUTION_CLASS_DECLARATION                                  \
    class Solution {                                                \
    public:                                                         \
        static std::string remove_duplicate_letters(std::string s); \
    }

namespace select {
SOLUTION_CLASS_DECLARATION;
}

namespace deque {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::remove_duplicate_letters

#endif