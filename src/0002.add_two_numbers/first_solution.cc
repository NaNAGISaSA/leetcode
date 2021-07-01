#include "0002_add_two_numbers.h"

namespace leetcode::add_two_numbers::first {

using ListNode = leetcode::add_two_numbers::ListNode;

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head_one = new ListNode(0, l1);
    ListNode* head_two = new ListNode(0, l2);
    int add_on = 0;
    ListNode return_node;
    ListNode* current_node = &return_node;
    while (head_one != nullptr || head_two != nullptr) {
        int num1 = 0, num2 = 0;
        if (head_one != nullptr) {
            num1 = head_one->val;
            head_one = head_one->next;
        }
        if (head_two != nullptr) {
            num2 = head_two->val;
            head_two = head_two->next;
        }
        current_node->val = (num1 + num2 + add_on) % 10;
        if (head_one != nullptr || head_two != nullptr) {
            current_node->next = new ListNode;
            current_node = current_node->next;
        }
        add_on = (num1 + num2 + add_on) / 10;
    }

    if (add_on == 1) {
        current_node->next = new ListNode(1, nullptr);
    }

    delete head_one;
    delete head_two;
    return return_node.next;
}

}  // namespace leetcode::add_two_numbers::first