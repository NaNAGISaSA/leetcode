#ifndef _LEETCODE_PALINDROME_NUMBER_H_
#define _LEETCODE_PALINDROME_NUMBER_H_

namespace leetcode::palindrome_number {

#define SOLUTION_CLASS_DECLARATION        \
    class Solution {                      \
    public:                               \
        static bool is_palindrome(int x); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace faster {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::palindrome_number

#endif