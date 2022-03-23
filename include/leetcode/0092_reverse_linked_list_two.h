#ifndef _LEETCODE_REVERSE_LINKED_LIST_TWO_H_
#define _LEETCODE_REVERSE_LINKED_LIST_TWO_H_

#include "utils/linked_list_utils.h"

namespace leetcode::reverse_linked_list_two {

class Solution {
public:
    static ListNode* reverse_between(ListNode* head, int left, int right);
};

}  // namespace leetcode::reverse_linked_list_two

#endif