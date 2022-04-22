#include "0141_linked_list_cycle.h"

namespace leetcode::linked_list_cycle {

bool Solution::has_cycle(ListNode* head) {
    ListNode* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        head = head->next;
        fast = fast->next->next;
        if (head == fast) {
            break;
        }
    }
    return fast != nullptr && fast->next != nullptr;
}

}  // namespace leetcode::linked_list_cycle
