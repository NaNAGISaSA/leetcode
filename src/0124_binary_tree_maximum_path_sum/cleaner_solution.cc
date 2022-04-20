#include <algorithm>
#include <limits>

#include "0124_binary_tree_maximum_path_sum.h"

namespace leetcode::binary_tree_maximum_path_sum::cleaner {

namespace {
int traverse_tree(TreeNode* root, int& max_value) {
    if (root == nullptr) {
        return 0;
    }
    // the logic of first solution can be simplified as the following code
    int left_max_path = std::max(traverse_tree(root->left, max_value), 0);
    int right_max_path = std::max(traverse_tree(root->right, max_value), 0);
    max_value = std::max(root->val + left_max_path + right_max_path, max_value);
    return root->val + std::max(left_max_path, right_max_path);
}
}  // namespace

int Solution::max_path_sum(TreeNode* root) {
    int max_value = std::numeric_limits<int>::min();
    traverse_tree(root, max_value);
    return max_value;
}

}  // namespace leetcode::binary_tree_maximum_path_sum::cleaner
