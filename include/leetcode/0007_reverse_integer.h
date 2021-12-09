#ifndef _LEETCODE_REVERSE_INTEGER_H_
#define _LEETCODE_REVERSE_INTEGER_H_

namespace leetcode::reverse_integer {

#define SOLUTION_CLASS_DECLARATION \
    class Solution {               \
    public:                        \
        static int reverse(int x); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace elegant {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::reverse_integer

#endif