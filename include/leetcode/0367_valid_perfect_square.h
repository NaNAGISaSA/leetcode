#ifndef LEETCODE_VALID_PERFECT_SQUARE_H_
#define LEETCODE_VALID_PERFECT_SQUARE_H_

namespace leetcode::valid_perfect_square {

#define SOLUTION_CLASS_DECLARATION              \
    class Solution {                            \
    public:                                     \
        static bool is_perfect_square(int num); \
    }

namespace common {
SOLUTION_CLASS_DECLARATION;
}

namespace bs {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::valid_perfect_square

#endif
