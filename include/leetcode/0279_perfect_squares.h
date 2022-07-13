#ifndef _LEETCODE_PERFECT_SQUARES_H_
#define _LEETCODE_PERFECT_SQUARES_H_

namespace leetcode::perfect_squares {

#define SOLUTION_CLASS_DECLARATION     \
    class Solution {                   \
    public:                            \
        static int num_squares(int n); \
    }

namespace dp {
SOLUTION_CLASS_DECLARATION;
}

namespace bfs {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::perfect_squares

#endif
