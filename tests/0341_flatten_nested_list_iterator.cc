#include "0341_flatten_nested_list_iterator.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::flatten_nested_list_iterator;

TEST(FLATTEN_NESTED_LIST_ITERATOR, LIST_SOLUTION_TEST) {
    std::vector<NestedInteger> vec1{NestedInteger({NestedInteger(1), NestedInteger(1)}),
                                    NestedInteger(2),
                                    NestedInteger({NestedInteger(1), NestedInteger(1)})};
    list::NestedIterator iter1(vec1);
    std::vector<int> res1;
    while (iter1.hasNext()) {
        res1.push_back(iter1.next());
    }
    ASSERT_THAT(res1, testing::ElementsAre(1, 1, 2, 1, 1));

    std::vector<NestedInteger> vec2{NestedInteger(1),
                                    NestedInteger({NestedInteger(4), NestedInteger({NestedInteger(6)})})};
    list::NestedIterator iter2(vec2);
    std::vector<int> res2;
    while (iter2.hasNext()) {
        res2.push_back(iter2.next());
    }
    ASSERT_THAT(res2, testing::ElementsAre(1, 4, 6));
}

TEST(FLATTEN_NESTED_LIST_ITERATOR, STACK_SOLUTION_TEST) {
    std::vector<NestedInteger> vec1{NestedInteger({NestedInteger(1), NestedInteger(1)}),
                                    NestedInteger(2),
                                    NestedInteger({NestedInteger(1), NestedInteger(1)})};
    stack::NestedIterator iter1(vec1);
    std::vector<int> res1;
    while (iter1.hasNext()) {
        res1.push_back(iter1.next());
    }
    ASSERT_THAT(res1, testing::ElementsAre(1, 1, 2, 1, 1));

    std::vector<NestedInteger> vec2{NestedInteger(1),
                                    NestedInteger({NestedInteger(4), NestedInteger({NestedInteger(6)})})};
    stack::NestedIterator iter2(vec2);
    std::vector<int> res2;
    while (iter2.hasNext()) {
        res2.push_back(iter2.next());
    }
    ASSERT_THAT(res2, testing::ElementsAre(1, 4, 6));
}
