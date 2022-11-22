#ifndef LEETCODE_DECODE_STRING_H_
#define LEETCODE_DECODE_STRING_H_

#include <string>

namespace leetcode::decode_string {

#define SOLUTION_CLASS_DECLARATION                       \
    class Solution {                                     \
    public:                                              \
        static std::string decode(const std::string& s); \
    }

namespace recurse {
SOLUTION_CLASS_DECLARATION;
}

namespace stack {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::decode_string

#endif
