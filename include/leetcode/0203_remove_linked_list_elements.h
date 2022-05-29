#ifndef _LEETCODE_REMOVE_LINKED_LIST_ELEMENTS_H_
#define _LEETCODE_REMOVE_LINKED_LIST_ELEMENTS_H_

#include "utils/linked_list_utils.h"

namespace leetcode::remove_linked_list_elements {

class Solution {
public:
    static ListNode* remove_elements(ListNode* head, int val);
};

}  // namespace leetcode::remove_linked_list_elements

#endif