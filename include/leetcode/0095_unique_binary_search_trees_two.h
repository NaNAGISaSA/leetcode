#ifndef _LEETCODE_UNIQUE_BINARY_SEARCH_TREES_TWO_H_
#define _LEETCODE_UNIQUE_BINARY_SEARCH_TREES_TWO_H_

#include <vector>

#include "utils/tree_utils.h"

namespace leetcode::unique_binary_search_trees_two {

class Solution {
public:
    static std::vector<TreeNode*> generate_trees(int n);
};

}  // namespace leetcode::unique_binary_search_trees_two

#endif