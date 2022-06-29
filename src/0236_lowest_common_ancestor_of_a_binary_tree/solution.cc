#include "0236_lowest_common_ancestor_of_a_binary_tree.h"

namespace leetcode::lowest_common_ancestor_of_a_binary_tree {

TreeNode* Solution::lowest_common_ancestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == nullptr || root == p || root == q) {
        return root;
    }
    TreeNode* left_ancestor = lowest_common_ancestor(root->left, p, q);
    TreeNode* right_ancestor = lowest_common_ancestor(root->right, p, q);
    if (left_ancestor != nullptr && right_ancestor != nullptr) {
        return root;
    } else {
        return left_ancestor != nullptr ? left_ancestor : right_ancestor;
    }
}

}  // namespace leetcode::lowest_common_ancestor_of_a_binary_tree
