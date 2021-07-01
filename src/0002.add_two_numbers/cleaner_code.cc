#include "0002_add_two_numbers.h"

namespace leetcode::add_two_numbers::cleaner {

using ListNode = leetcode::add_two_numbers::ListNode;

/*
1) 在生成result的链表时，使用dummy head，相比初始解法更加精妙；
2) 使用一个extra储存所有中间计算值，节省空间。
*/
ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
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

}  // namespace leetcode::add_two_numbers::cleaner
