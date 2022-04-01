#include <queue>

#include "0102_binary_tree_level_order_traversal.h"

namespace leetcode::binary_tree_level_order_traversal {

std::vector<std::vector<int>> Solution::level_order(TreeNode* root) {
    if (root == nullptr) {
        return {};
    }
    std::vector<std::vector<int>> result;
    result.push_back({});
    std::queue<TreeNode*> queue;
    queue.push(root);
    size_t node_num = 1;
    while (!queue.empty()) {
        TreeNode* front = queue.front();
        queue.pop();
        result.back().push_back(front->val);
        if (front->left != nullptr) {
            queue.push(front->left);
        }
        if (front->right != nullptr) {
            queue.push(front->right);
        }
        if (--node_num == 0) {
            node_num = queue.size();
            if (node_num > 0) {
                result.push_back({});
            }
        }
    }
    return result;
}

}  // namespace leetcode::binary_tree_level_order_traversal
