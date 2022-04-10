#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0131_palindrome_partitioning.h"

using namespace leetcode::palindrome_partitioning;

TEST(PALINDROME_PARTITIONING, EXAMPLE_TEST) {
    auto res = Solution::partition("aab");
    ASSERT_EQ(res.size(), 2);
    ASSERT_THAT(res[0], testing::ElementsAre("a", "a", "b"));
    ASSERT_THAT(res[1], testing::ElementsAre("aa", "b"));
}
