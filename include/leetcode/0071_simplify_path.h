#ifndef _LEETCODE_SIMPLIFY_PATH_H_
#define _LEETCODE_SIMPLIFY_PATH_H_

#include <string>

namespace leetcode::simplify_path {

#define SOLUTION_CLASS_DECLARATION                                 \
    class Solution {                                               \
    public:                                                        \
        static std::string simplify_path(const std::string& path); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace split {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::simplify_path

#endif