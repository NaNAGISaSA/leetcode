#ifndef _LEETCODE_IMPLEMENT_QUEUE_USING_STACKS_H_
#define _LEETCODE_IMPLEMENT_QUEUE_USING_STACKS_H_

#include <stack>

namespace leetcode::implement_queue_using_stacks {

class MyQueue {
public:
    MyQueue();

    void push(int x);
    int pop();
    int peek();
    bool empty();

private:
    std::stack<int> s1;
    std::stack<int> s2;
};

}  // namespace leetcode::implement_queue_using_stacks

#endif