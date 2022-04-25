#include <stack>

#include "0145_binary_tree_postorder_traversal.h"

namespace leetcode::binary_tree_postorder_traversal {

std::vector<int> Solution::postorder_traversal(TreeNode* root) {
    if (root == nullptr) {
        return {};
    }
    std::vector<int> result;
    std::stack<TreeNode*> node_stack;
    node_stack.push(root);
    TreeNode* last_pop_node = nullptr;
    while (!node_stack.empty()) {
        TreeNode* curr = node_stack.top();
        if (curr->left != nullptr && last_pop_node != curr->left &&
            (curr->right == nullptr || last_pop_node != curr->right)) {
            node_stack.push(curr->left);
        } else if (curr->right != nullptr && last_pop_node != curr->right) {
            node_stack.push(curr->right);
        } else {
            result.push_back(curr->val);
            last_pop_node = curr;
            node_stack.pop();
        }
    }
    return result;
}

}  // namespace leetcode::binary_tree_postorder_traversal
