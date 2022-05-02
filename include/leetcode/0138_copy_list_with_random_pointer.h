#ifndef _LEETCODE_COPY_LIST_WITH_RANDOM_POINTER_H_
#define _LEETCODE_COPY_LIST_WITH_RANDOM_POINTER_H_

namespace leetcode::copy_list_with_random_pointer {

struct Node {
    Node(int);

    int val;
    Node* next;
    Node* random;
};

#define SOLUTION_CLASS_DECLARATION                 \
    class Solution {                               \
    public:                                        \
        static Node* copy_random_list(Node* head); \
    }

namespace map {
SOLUTION_CLASS_DECLARATION;
}

namespace space_opt {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::copy_list_with_random_pointer

#endif