#ifndef _LEETCODE_SORT_LIST_H_
#define _LEETCODE_SORT_LIST_H_

#include "utils/linked_list_utils.h"

namespace leetcode::sort_list {

#define SOLUTION_CLASS_DECLARATION                  \
    class Solution {                                \
    public:                                         \
        static ListNode* sort_list(ListNode* head); \
    }

namespace heap_sort {
SOLUTION_CLASS_DECLARATION;
}

namespace merge_sort {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::sort_list

#endif