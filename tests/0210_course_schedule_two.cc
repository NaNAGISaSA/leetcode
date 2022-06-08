#include "0210_course_schedule_two.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::course_schedule_two;

TEST(COURSE_SCHEDULE, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::find_order(4, {{1, 0}, {2, 0}, {3, 1}, {3, 2}}), testing::ElementsAre(0, 1, 2, 3));
    ASSERT_THAT(Solution::find_order(3, {{1, 0}, {1, 2}, {0, 1}}), testing::ElementsAre());
}
