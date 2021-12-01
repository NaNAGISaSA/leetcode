#ifndef _LEETCODE_UTILS_LINKED_LIST_UTILS_H_
#define _LEETCODE_UTILS_LINKED_LIST_UTILS_H_

namespace leetcode::utils {

struct ListNode {
    ListNode() : val(0), next(nullptr) {
    }
    ListNode(int x) : val(x), next(nullptr) {
    }
    ListNode(int x, ListNode* next) : val(x), next(next) {
    }
    int val;
    ListNode* next;
};

}  // namespace leetcode::utils

#endif
