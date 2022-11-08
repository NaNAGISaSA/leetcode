#include "0384_shuffle_an_array.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::shuffle_an_array;

TEST(SHUFFLE_AN_ARRAY, EXAMPLE_TEST) {
    Solution solution({1, 2, 3});
    ASSERT_THAT(solution.reset(), testing::ElementsAre(1, 2, 3));
}
