#ifndef _LEETCODE_PASCAL_TRIANGLE_H_
#define _LEETCODE_PASCAL_TRIANGLE_H_

#include <vector>

namespace leetcode::pascal_triangle {

class Solution {
public:
    static std::vector<std::vector<int>> generate(int num_rows);
};

}  // namespace leetcode::pascal_triangle

#endif