#ifndef _LEETCODE_REVERSE_LINKED_LIST_H_
#define _LEETCODE_REVERSE_LINKED_LIST_H_

#include "utils/linked_list_utils.h"

namespace leetcode::reverse_linked_list {

class Solution {
public:
    static ListNode* reverse_list(ListNode* head);
};

}  // namespace leetcode::reverse_linked_list

#endif