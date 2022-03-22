#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0080_remove_duplicates_from_sorted_array_two.h"

using namespace leetcode::remove_duplicates_from_sorted_array_two;

TEST(REMOVE_DUPLICATES_FROM_SORTED_ARRAY_TWO, EXAMPLE_TEST) {
    std::vector<int> vec{0, 0, 1, 1, 1, 1, 2, 3, 3};
    ASSERT_EQ(Solution::remove_duplicates(vec), 7);
    ASSERT_THAT(vec, testing::ElementsAre(0, 0, 1, 1, 2, 3, 3, 3, 3));
}
