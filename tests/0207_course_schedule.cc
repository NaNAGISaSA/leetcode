#include "0207_course_schedule.h"

#include <gtest/gtest.h>

using namespace leetcode::course_schedule;

TEST(COURSE_SCHEDULE, BFS_SOLUTION_TEST) {
    ASSERT_TRUE(bfs::Solution::can_finish(2, {{1, 0}}));
    ASSERT_FALSE(bfs::Solution::can_finish(2, {{1, 0}, {0, 1}}));
}

TEST(COURSE_SCHEDULE, KAHN_SOLUTION_TEST) {
    ASSERT_TRUE(kahn::Solution::can_finish(2, {{1, 0}}));
    ASSERT_FALSE(kahn::Solution::can_finish(2, {{1, 0}, {0, 1}}));
}
