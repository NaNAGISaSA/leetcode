#include <deque>

#include "0103_binary_tree_zigzag_level_order_traversal.h"

namespace leetcode::binary_tree_zigzag_level_order_traversal {

std::vector<std::vector<int>> Solution::zigzag_level_order(TreeNode* root) {
    if (root == nullptr) {
        return {};
    }
    std::deque<TreeNode*> deque;
    deque.push_back(root);
    std::vector<std::vector<int>> result;
    result.push_back({});
    size_t node_num = 1;
    bool front_direction = true;
    while (!deque.empty()) {
        if (front_direction) {
            TreeNode* curr = deque.front();
            deque.pop_front();
            result.back().push_back(curr->val);
            if (curr->left != nullptr) {
                deque.push_back(curr->left);
            }
            if (curr->right != nullptr) {
                deque.push_back(curr->right);
            }
        } else {
            TreeNode* curr = deque.back();
            deque.pop_back();
            result.back().push_back(curr->val);
            if (curr->right != nullptr) {
                deque.push_front(curr->right);
            }
            if (curr->left != nullptr) {
                deque.push_front(curr->left);
            }
        }
        if (--node_num == 0) {
            front_direction = !front_direction;
            node_num = deque.size();
            if (node_num != 0) {
                result.push_back({});
            }
        }
    }
    return result;
}

}  // namespace leetcode::binary_tree_zigzag_level_order_traversal
