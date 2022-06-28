#ifndef _LEETCODE_PALINDROME_LINKED_LIST_H_
#define _LEETCODE_PALINDROME_LINKED_LIST_H_

#include "utils/linked_list_utils.h"

namespace leetcode::palindrome_linked_list {

class Solution {
public:
    static bool is_palindrome(ListNode* head);
};

}  // namespace leetcode::palindrome_linked_list

#endif