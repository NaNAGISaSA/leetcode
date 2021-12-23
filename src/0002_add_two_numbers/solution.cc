#include "0002_add_two_numbers.h"

namespace leetcode::add_two_numbers {

ListNode* Solution::add_two_numbers(ListNode* l1, ListNode* l2) {
    ListNode dummy_head;
    ListNode* current = &dummy_head;
    int extra = 0;
    while (extra || l1 || l2) {
        if (l1 != nullptr) {
            extra += l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr) {
            extra += l2->val;
            l2 = l2->next;
        }
        current->next = new ListNode(extra % 10);
        current = current->next;
        extra /= 10;
    }
    return dummy_head.next;
}

}  // namespace leetcode::add_two_numbers
