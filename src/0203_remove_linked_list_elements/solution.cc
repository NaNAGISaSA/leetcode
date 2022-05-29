#include "0203_remove_linked_list_elements.h"

namespace leetcode::remove_linked_list_elements {

ListNode* Solution::remove_elements(ListNode* head, int val) {
    while (head != nullptr && head->val == val) {
        head = head->next;
    }
    if (head == nullptr) {
        return head;
    }
    ListNode* prev = head;
    ListNode* curr = head->next;
    while (curr != nullptr) {
        if (curr->val == val) {
            prev->next = curr->next;
        } else {
            prev = curr;
        }
        curr = curr->next;
    }
    return head;
}

}  // namespace leetcode::remove_linked_list_elements
