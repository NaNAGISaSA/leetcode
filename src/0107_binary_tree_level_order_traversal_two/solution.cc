#include <algorithm>
#include <queue>

#include "0107_binary_tree_level_order_traversal_two.h"

namespace leetcode::binary_tree_level_order_traversal_two {

std::vector<std::vector<int>> Solution::level_order_bottom(TreeNode* root) {
    if (root == nullptr) {
        return {};
    }
    std::vector<std::vector<int>> result;
    result.push_back(std::vector<int>{});
    std::queue<TreeNode*> queue;
    queue.push(root);
    size_t node_num = 1;
    while (!queue.empty()) {
        root = queue.front();
        queue.pop();
        result.back().push_back(root->val);
        if (root->left != nullptr) {
            queue.push(root->left);
        }
        if (root->right != nullptr) {
            queue.push(root->right);
        }
        if (--node_num == 0) {
            node_num = queue.size();
            if (node_num != 0) {
                result.push_back(std::vector<int>{});
            }
        }
    }
    std::reverse(result.begin(), result.end());
    return result;
}

}  // namespace leetcode::binary_tree_level_order_traversal_two
