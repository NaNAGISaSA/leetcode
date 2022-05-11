#ifndef _LEETCODE_MIN_STACK_H_
#define _LEETCODE_MIN_STACK_H_

#include <stack>

namespace leetcode::min_stack {

class MinStack {
public:
    MinStack();
    void push(int val);
    void pop();
    int top();
    int getMin();

private:
    std::stack<int> num_stack;
    std::stack<int> min_stack;
};

}  // namespace leetcode::min_stack

#endif