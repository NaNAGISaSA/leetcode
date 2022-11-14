#ifndef LEETCODE_LONGEST_ABSOLUTE_FILE_PATH_H_
#define LEETCODE_LONGEST_ABSOLUTE_FILE_PATH_H_

#include <string>

namespace leetcode::longest_absolute_file_path {

#define SOLUTION_CLASS_DECLARATION                                \
    class Solution {                                              \
    public:                                                       \
        static int length_longest_path(const std::string& input); \
    }

namespace tree {
SOLUTION_CLASS_DECLARATION;
}

namespace stack {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::longest_absolute_file_path

#endif