#include "0083_remove_duplicates_from_sorted_list.h"

namespace leetcode::remove_duplicates_from_sorted_list {

ListNode* Solution::delete_duplicates(ListNode* head) {
    if (head == nullptr) {
        return head;
    }
    ListNode* prev = head;
    ListNode* curr = head->next;
    while (curr != nullptr) {
        if (prev->val == curr->val) {
            curr = curr->next;
            prev->next = curr;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}

}  // namespace leetcode::remove_duplicates_from_sorted_list
