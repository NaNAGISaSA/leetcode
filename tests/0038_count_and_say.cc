#include <gtest/gtest.h>

#include "0038_count_and_say.h"

using namespace leetcode::count_and_say;

TEST(COUNT_AND_SAY, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::count_and_say(1), "1");
    ASSERT_EQ(Solution::count_and_say(4), "1211");
}
