#ifndef LEETCODE_UTF8_VALIDATION_H_
#define LEETCODE_UTF8_VALIDATION_H_

#include <vector>

namespace leetcode::utf8_validation {

#define SOLUTION_CLASS_DECLARATION                            \
    class Solution {                                          \
    public:                                                   \
        static bool valid_utf8(const std::vector<int>& data); \
    }

namespace number {
SOLUTION_CLASS_DECLARATION;
}

namespace bit {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::utf8_validation

#endif
