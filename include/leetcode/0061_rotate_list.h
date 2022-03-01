#ifndef _LEETCODE_ROTATE_LIST_H_
#define _LEETCODE_ROTATE_LIST_H_

#include "utils/linked_list_utils.h"

using leetcode::utils::ListNode;

namespace leetcode::rotate_list {

class Solution {
public:
    static ListNode* rotate_right(ListNode* head, int k);
};

}  // namespace leetcode::rotate_list

#endif