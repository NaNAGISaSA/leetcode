#ifndef _LEETCODE_ADD_BINARY_H_
#define _LEETCODE_ADD_BINARY_H_

#include <string>

#define SOLUTION_CLASS_DECLARATION                                                 \
    class Solution {                                                               \
    public:                                                                        \
        static std::string add_binary(const std::string& a, const std::string& b); \
    }

namespace leetcode::add_binary {

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace cleaner {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::add_binary

#endif