#ifndef _LEETCODE_ISOMORPHIC_STRINGS_H_
#define _LEETCODE_ISOMORPHIC_STRINGS_H_

#include <string>

namespace leetcode::isomorphic_strings {

#define SOLUTION_CLASS_DECLARATION                                             \
    class Solution {                                                           \
    public:                                                                    \
        static bool is_isomorphic(const std::string& s, const std::string& t); \
    }

namespace map {
SOLUTION_CLASS_DECLARATION;
}

namespace nomap {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::isomorphic_strings

#endif