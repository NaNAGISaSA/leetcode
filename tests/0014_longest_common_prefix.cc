#include <gtest/gtest.h>

#include "0014_longest_common_prefix.h"

using namespace leetcode::longest_common_prefix;

TEST(LONGEST_COMMON_PREFIX, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::longest_common_prefix({"flower", "flow", "flight"}), "fl");
    ASSERT_EQ(Solution::longest_common_prefix({"dog", "racecar", "car"}), "");
}