#include "0117_populating_next_right_pointers_in_each_node_two.h"

namespace leetcode::populating_next_right_pointers_in_each_node_two {

Node* Solution::connect(Node* root) {
    if (root == nullptr) {
        return root;
    }
    Node* curr = nullptr;
    Node* prev = nullptr;
    Node* next_level_begin = root;
    while (next_level_begin != nullptr) {
        curr = next_level_begin;
        prev = nullptr;
        next_level_begin = nullptr;
        while (curr != nullptr) {
            if (curr->left != nullptr) {
                if (prev != nullptr) {
                    prev->next = curr->left;
                    prev = prev->next;
                } else {
                    prev = curr->left;
                    next_level_begin = curr->left;
                }
            }
            if (curr->right != nullptr) {
                if (prev != nullptr) {
                    prev->next = curr->right;
                    prev = prev->next;
                } else {
                    prev = curr->right;
                    next_level_begin = curr->right;
                }
            }
            curr = curr->next;
        }
    }
    return root;
}

}  // namespace leetcode::populating_next_right_pointers_in_each_node_two
