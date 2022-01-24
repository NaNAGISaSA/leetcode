#include <gtest/gtest.h>

#include "0035_search_insert_position.h"

using namespace leetcode::search_insert_position;

TEST(SEARCH_INSERT_POSITION, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::search_insert({1, 3, 5, 6}, 5), 2);
    ASSERT_EQ(Solution::search_insert({1, 3, 5, 6}, 2), 1);
    ASSERT_EQ(Solution::search_insert({1, 3, 5, 6}, 7), 4);
}
