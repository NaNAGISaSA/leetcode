#ifndef _LEETCODE_ADD_TWO_NUMBERS_H_
#define _LEETCODE_ADD_TWO_NUMBERS_H_

#include "utils/linked_list_utils.h"

using leetcode::utils::ListNode;

namespace leetcode::add_two_numbers {

class Solution {
public:
    static ListNode* add_two_numbers(ListNode* l1, ListNode* l2);
};

}  // namespace leetcode::add_two_numbers

#endif