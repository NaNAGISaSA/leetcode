#ifndef LEETCODE_FLATTEN_NESTED_LIST_ITERATOR_H_
#define LEETCODE_FLATTEN_NESTED_LIST_ITERATOR_H_

#include <memory>
#include <vector>

namespace leetcode::flatten_nested_list_iterator {

class NestedInteger {
public:
    explicit NestedInteger(int);
    explicit NestedInteger(const std::vector<NestedInteger>&);

    bool isInteger() const;
    int getInteger() const;
    const std::vector<NestedInteger>& getList() const;

private:
    int integer;
    std::vector<NestedInteger> integer_vec;
};

namespace list {
class NestedIterator {
public:
    NestedIterator(std::vector<NestedInteger>& nested_list);
    ~NestedIterator();

    int next();
    bool hasNext();

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};
}  // namespace list

namespace stack {
class NestedIterator {
public:
    NestedIterator(std::vector<NestedInteger>& nested_list);
    ~NestedIterator();

    int next();
    bool hasNext();

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};
}  // namespace stack

}  // namespace leetcode::flatten_nested_list_iterator

#endif