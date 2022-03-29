#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0089_gray_code.h"

using namespace leetcode::gray_code;

TEST(GRAY_CODE, DIRECT_SOLUTION_TEST) {
    auto res1 = direct::Solution::gray_code(2);
    ASSERT_THAT(res1, testing::ElementsAre(0, 1, 3, 2));
    auto res2 = direct::Solution::gray_code(1);
    ASSERT_THAT(res2, testing::ElementsAre(0, 1));
}

TEST(GRAY_CODE, BACKTRACE_SOLUTION_TEST) {
    auto res1 = backtrace::Solution::gray_code(2);
    ASSERT_THAT(res1, testing::ElementsAre(0, 1, 3, 2));
    auto res2 = backtrace::Solution::gray_code(1);
    ASSERT_THAT(res2, testing::ElementsAre(0, 1));
}
