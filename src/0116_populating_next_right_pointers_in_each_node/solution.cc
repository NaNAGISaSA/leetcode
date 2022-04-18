#include "0116_populating_next_right_pointers_in_each_node.h"

namespace leetcode::populating_next_right_pointers_in_each_node {

Node* Solution::connect(Node* root) {
    if (root == nullptr) {
        return root;
    }
    // perfect binary tree
    Node* curr_level_begin = root;
    while (curr_level_begin != nullptr) {
        Node* curr = curr_level_begin;
        while (curr != nullptr) {
            if (curr->left != nullptr) {
                curr->left->next = curr->right;
            }
            if (curr->right != nullptr && curr->next != nullptr) {
                curr->right->next = curr->next->left;
            }
            curr = curr->next;
        }
        curr_level_begin = curr_level_begin->left;
    }
    return root;
}

}  // namespace leetcode::populating_next_right_pointers_in_each_node
