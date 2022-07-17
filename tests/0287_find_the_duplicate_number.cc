#include "0287_find_the_duplicate_number.h"

#include <gtest/gtest.h>

using namespace leetcode::find_the_duplicate_number;

TEST(FIND_THE_DUPLICATE_NUMBER, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::find_duplicate({1, 3, 4, 2, 2}), 2);
    ASSERT_EQ(Solution::find_duplicate({1, 3, 2, 2, 2}), 2);
}
