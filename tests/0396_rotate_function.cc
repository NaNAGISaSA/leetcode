#include "0396_rotate_function.h"

#include <gtest/gtest.h>

using namespace leetcode::rotate_function;

TEST(ROTATE_FUNCTION, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::max_rotate_function({4, 3, 2, 6}), 26);
    ASSERT_EQ(Solution::max_rotate_function({100}), 0);
}
