#include "0021_merge_two_sorted_lists.h"

namespace leetcode::merge_two_sorted_lists {

ListNode* Solution::merge_two_lists(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr || list2 == nullptr) {
        return list1 == nullptr ? list2 : list1;
    }
    ListNode* head = nullptr;
    if (list1->val < list2->val) {
        head = list1;
        list1 = list1->next;
    } else {
        head = list2;
        list2 = list2->next;
    }
    ListNode* result = head;
    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val < list2->val) {
            head->next = list1;
            list1 = list1->next;
        } else {
            head->next = list2;
            list2 = list2->next;
        }
        head = head->next;
    }
    head->next = list1 == nullptr ? list2 : list1;
    return result;
}

}  // namespace leetcode::merge_two_sorted_lists
