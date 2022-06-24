#include "0226_invert_binary_tree.h"

#include <stack>

namespace leetcode::invert_binary_tree::stack {

TreeNode* Solution::invert_tree(TreeNode* root) {
    if (root == nullptr) {
        return root;
    }
    std::stack<TreeNode*> stack;
    stack.push(root);
    while (!stack.empty()) {
        TreeNode* root = stack.top();
        stack.pop();
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        root->left = right;
        root->right = left;
        if (left != nullptr) {
            stack.push(left);
        }
        if (right != nullptr) {
            stack.push(right);
        }
    }
    return root;
}

}  // namespace leetcode::invert_binary_tree::stack
