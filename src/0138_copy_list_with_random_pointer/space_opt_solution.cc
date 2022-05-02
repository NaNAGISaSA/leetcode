#include "0138_copy_list_with_random_pointer.h"

namespace leetcode::copy_list_with_random_pointer::space_opt {

Node* Solution::copy_random_list(Node* head) {
    if (head == nullptr) {
        return head;
    }
    Node* cp_head = head;
    Node* next = nullptr;
    while (head != nullptr) {
        Node* node = new Node(head->val);
        next = head->next;
        head->next = node;
        node->next = next;
        head = next;
    }
    head = cp_head;
    while (head != nullptr) {
        if (head->random != nullptr) {
            head->next->random = head->random->next;
        }
        head = head->next->next;
    }
    head = cp_head;
    cp_head = head->next;
    Node* ret_head = head->next;
    while (head != nullptr) {
        next = head->next->next;
        if (next != nullptr) {
            cp_head->next = next->next;
            cp_head = cp_head->next;
        }
        head->next = next;
        head = next;
    }
    return ret_head;
}

}  // namespace leetcode::copy_list_with_random_pointer::space_opt
