#include "0398_random_pick_index.h"

#include <gtest/gtest.h>

using namespace leetcode::random_pick_index;

TEST(RANDOM_PICK_INDEX, EXAMPLE_TEST) {
    Solution solution({1, 2, 3});
    ASSERT_EQ(solution.pick(1), 0);
    ASSERT_EQ(solution.pick(3), 2);
}
