#include <stack>

#include "0094_binary_tree_inorder_traversal.h"

namespace leetcode::binary_tree_inorder_traversal {

std::vector<int> Solution::inorder_traversal(TreeNode* root) {
    std::stack<TreeNode*> stack;
    std::vector<int> res;
    while (!stack.empty() || root != nullptr) {
        if (root == nullptr) {
            root = stack.top();
            stack.pop();
            res.push_back(root->val);
            root = root->right;
        } else {
            stack.push(root);
            root = root->left;
        }
    }
    return res;
}

}  // namespace leetcode::binary_tree_inorder_traversal
