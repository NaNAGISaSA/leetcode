#include "0207_course_schedule.h"

#include <gtest/gtest.h>

using namespace leetcode::course_schedule;

TEST(COURSE_SCHEDULE, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::can_finish(2, {{1, 0}}));
    ASSERT_FALSE(Solution::can_finish(2, {{1, 0}, {0, 1}}));
}
