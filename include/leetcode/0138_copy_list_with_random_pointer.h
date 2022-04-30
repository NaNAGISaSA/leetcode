#ifndef _LEETCODE_COPY_LIST_WITH_RANDOM_POINTER_H_
#define _LEETCODE_COPY_LIST_WITH_RANDOM_POINTER_H_

namespace leetcode::copy_list_with_random_pointer {

struct Node {
    Node(int);

    int val;
    Node* next;
    Node* random;
};

class Solution {
public:
    static Node* copy_random_list(Node* head);
};

}  // namespace leetcode::copy_list_with_random_pointer

#endif