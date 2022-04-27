#include <stack>

#include "0144_binary_tree_preorder_traversal.h"

namespace leetcode::binary_tree_preorder_traversal {

std::vector<int> Solution::preorder_traversal(TreeNode* root) {
    if (root == nullptr) {
        return {};
    }
    std::stack<TreeNode*> stack;
    stack.push(root);
    std::vector<int> result;
    while (!stack.empty()) {
        TreeNode* top = stack.top();
        stack.pop();
        result.push_back(top->val);
        if (top->right != nullptr) {
            stack.push(top->right);
        }
        if (top->left != nullptr) {
            stack.push(top->left);
        }
    }
    return result;
}

}  // namespace leetcode::binary_tree_preorder_traversal
