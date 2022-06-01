#include "0206_reverse_linked_list.h"

namespace leetcode::reverse_linked_list {

ListNode* Solution::reverse_list(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* next = nullptr;
    while (head != nullptr) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

}  // namespace leetcode::reverse_linked_list
