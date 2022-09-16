#include "0341_flatten_nested_list_iterator.h"

#include <gtest/gtest.h>

using namespace leetcode::flatten_nested_list_iterator;

TEST(FLATTEN_NESTED_LIST_ITERATOR, LIST_SOLUTION_TEST) {
    list::NestedIterator iter1({NestedInteger({NestedInteger(1), NestedInteger(1)}),
                                NestedInteger(2),
                                NestedInteger({NestedInteger(1), NestedInteger(1)})});
    ASSERT_EQ(iter1.next(), 1);
    ASSERT_EQ(iter1.next(), 1);
    ASSERT_EQ(iter1.next(), 2);
    ASSERT_EQ(iter1.next(), 1);
    ASSERT_TRUE(iter1.hasNext());
    ASSERT_EQ(iter1.next(), 1);
    ASSERT_FALSE(iter1.hasNext());
    list::NestedIterator iter2(
        {NestedInteger(1), NestedInteger({NestedInteger(4), NestedInteger({NestedInteger(6)})})});
    ASSERT_EQ(iter2.next(), 1);
    ASSERT_EQ(iter2.next(), 4);
    ASSERT_TRUE(iter2.hasNext());
    ASSERT_EQ(iter2.next(), 6);
    ASSERT_FALSE(iter2.hasNext());
}
