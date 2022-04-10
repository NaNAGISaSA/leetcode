#ifndef _LEETCODE_LINKED_LIST_CYCLE_TWO_H_
#define _LEETCODE_LINKED_LIST_CYCLE_TWO_H_

#include "utils/linked_list_utils.h"

namespace leetcode::linked_list_cycle_two {

class Solution {
public:
    static ListNode* detect_cycle(ListNode* head);
};

}  // namespace leetcode::linked_list_cycle_two

#endif