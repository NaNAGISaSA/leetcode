#include "0142_linked_list_cycle_two.h"

namespace leetcode::linked_list_cycle_two {

ListNode* Solution::detect_cycle(ListNode* head) {
    ListNode* fast = head;
    ListNode* slow = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }
    if (fast == nullptr || fast->next == nullptr) {
        return nullptr;
    }
    fast = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

}  // namespace leetcode::linked_list_cycle_two
