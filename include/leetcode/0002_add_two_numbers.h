#ifndef _LEETCODE_ADD_TWO_NUMBERS_H_
#define _LEETCODE_ADD_TWO_NUMBERS_H_

namespace leetcode::add_two_numbers {

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

#define SOLUTION_CLASS_DECLARATION                           \
    class Solution {                                         \
    public:                                                  \
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace cleaner {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::add_two_numbers

#endif