#include <stack>

#include "0101_symmetric_tree.h"

namespace leetcode::symmetric_tree::stack {

bool Solution::is_symmetric(TreeNode* root) {
    std::stack<TreeNode*> stack;
    stack.push(root->left);
    stack.push(root->right);
    while (!stack.empty()) {
        TreeNode* root1 = stack.top();
        stack.pop();
        TreeNode* root2 = stack.top();
        stack.pop();
        if (root1 == nullptr || root2 == nullptr) {
            if (root1 == root2) {
                continue;
            }
            return false;
        }
        if (root1->val != root2->val) {
            return false;
        }
        stack.push(root1->left);
        stack.push(root2->right);
        stack.push(root1->right);
        stack.push(root2->left);
    }
    return true;
}

}  // namespace leetcode::symmetric_tree::stack
