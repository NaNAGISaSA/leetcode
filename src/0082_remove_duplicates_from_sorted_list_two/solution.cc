#include "0082_remove_duplicates_from_sorted_list_two.h"

namespace leetcode::remove_duplicates_from_sorted_list_two {

ListNode* Solution::delete_duplicates(ListNode* head) {
    if (head == nullptr) {
        return head;
    }
    auto get_block_tail = [](ListNode* curr) {
        while (curr->next != nullptr && curr->val == curr->next->val) {
            curr = curr->next;
        }
        return curr;
    };
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr != nullptr) {
        ListNode* block_tail = get_block_tail(curr);
        if (block_tail == curr) {
            if (prev == nullptr) {
                prev = curr;
                head = curr;
            } else {
                prev->next = curr;
                prev = prev->next;
            }
        } else {
            if (prev != nullptr) {
                prev->next = block_tail->next;
            }
        }
        curr = block_tail->next;
    }
    return prev == nullptr ? nullptr : head;
}

}  // namespace leetcode::remove_duplicates_from_sorted_list_two