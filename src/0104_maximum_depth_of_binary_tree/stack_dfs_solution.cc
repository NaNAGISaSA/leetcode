#include <algorithm>
#include <stack>

#include "0104_maximum_depth_of_binary_tree.h"

namespace leetcode::maximum_depth_of_binary_tree::stack_dfs {

int Solution::max_depth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    std::stack<TreeNode*> node_stack;
    std::stack<int> depth_stack;
    node_stack.push(root);
    depth_stack.push(1);
    int max_depth = 0;
    while (!node_stack.empty()) {
        int depth = depth_stack.top();
        depth_stack.pop();
        max_depth = std::max(max_depth, depth);
        TreeNode* node = node_stack.top();
        node_stack.pop();
        if (node->left != nullptr) {
            node_stack.push(node->left);
            depth_stack.push(depth + 1);
        }
        if (node->right != nullptr) {
            node_stack.push(node->right);
            depth_stack.push(depth + 1);
        }
    }
    return max_depth;
}

}  // namespace leetcode::maximum_depth_of_binary_tree::stack_dfs
