#include <algorithm>

#include "0104_maximum_depth_of_binary_tree.h"

namespace leetcode::maximum_depth_of_binary_tree::recurse_dfs {

int Solution::max_depth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    return std::max(max_depth(root->left), max_depth(root->right)) + 1;
}

}  // namespace leetcode::maximum_depth_of_binary_tree::recurse_dfs
