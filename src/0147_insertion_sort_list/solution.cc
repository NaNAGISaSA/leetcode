#include "0147_insertion_sort_list.h"

namespace leetcode::insertion_sort_list {

ListNode* Solution::insertion_sort_list(ListNode* head) {
    ListNode* unsort_head = head->next;
    head->next = nullptr;
    while (unsort_head != nullptr) {
        ListNode* unsorted_curr = unsort_head;
        unsort_head = unsort_head->next;
        if (unsorted_curr->val < head->val) {
            unsorted_curr->next = head;
            head = unsorted_curr;
        } else {
            ListNode* sorted_prev = head;
            ListNode* sorted_curr = head->next;
            while (sorted_curr != nullptr) {
                if (sorted_curr->val >= unsorted_curr->val) {
                    break;
                }
                sorted_prev = sorted_curr;
                sorted_curr = sorted_curr->next;
            }
            sorted_prev->next = unsorted_curr;
            unsorted_curr->next = sorted_curr;
        }
    }
    return head;
}

}  // namespace leetcode::insertion_sort_list
