#ifndef _LEETCODE_BINARY_TREE_PATHS_H_
#define _LEETCODE_BINARY_TREE_PATHS_H_

#include <string>
#include <vector>

#include "utils/tree_utils.h"

namespace leetcode::binary_tree_paths {

class Solution {
public:
    static std::vector<std::string> binary_tree_paths(TreeNode* root);
};

}  // namespace leetcode::binary_tree_paths

#endif