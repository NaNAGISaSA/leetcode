#ifndef LEETCODE_INTEGER_BREAK_H_
#define LEETCODE_INTEGER_BREAK_H_

namespace leetcode::integer_break {

#define SOLUTION_CLASS_DECLARATION       \
    class Solution {                     \
    public:                              \
        static int integer_break(int n); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace analysis {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::integer_break

#endif