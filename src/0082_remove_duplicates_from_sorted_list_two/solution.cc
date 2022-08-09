#include "0082_remove_duplicates_from_sorted_list_two.h"

namespace leetcode::remove_duplicates_from_sorted_list_two {

ListNode* Solution::delete_duplicates(ListNode* head) {
    if (head == nullptr) {
        return head;
    }
    auto get_tail = [](ListNode* node) {
        while (node->next != nullptr && node->val == node->next->val) {
            node = node->next;
        }
        return node;
    };
    ListNode* prev = nullptr;
    ListNode* curr = head;
    head = nullptr;
    while (curr != nullptr) {
        ListNode* tail = get_tail(curr);
        if (tail == curr) {
            if (prev == nullptr) {
                head = curr;
                prev = curr;
            } else {
                prev->next = curr;
                prev = prev->next;
            }
            curr = curr->next;
        } else {
            curr = tail->next;
        }
    }
    if (prev != nullptr) {
        prev->next = nullptr;
    }
    return head;
}

}  // namespace leetcode::remove_duplicates_from_sorted_list_two