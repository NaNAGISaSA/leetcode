#ifndef _LEETCODE_IMPLEMENT_STACK_USING_QUEUES_H_
#define _LEETCODE_IMPLEMENT_STACK_USING_QUEUES_H_

#include <queue>

namespace leetcode::implement_stack_using_queues {

class MyStack {
public:
    MyStack();

    void push(int x);
    int pop();
    int top();
    bool empty();

private:
    std::queue<int> queue;
};

}  // namespace leetcode::implement_stack_using_queues

#endif