#include <gtest/gtest.h>

#include "0071_simplify_path.h"

using namespace leetcode::simplify_path;

TEST(SIMPLIFY_PATH, FIRST_SOLUTION_TEST) {
    ASSERT_EQ(first::Solution::simplify_path("/../"), "/");
    ASSERT_EQ(first::Solution::simplify_path("/home//foo/"), "/home/foo");
    ASSERT_EQ(first::Solution::simplify_path("/.da/./.../...."), "/.da/.../....");
}

TEST(SIMPLIFY_PATH, SPLIT_SOLUTION_TEST) {
    ASSERT_EQ(split::Solution::simplify_path("/../"), "/");
    ASSERT_EQ(split::Solution::simplify_path("/home//foo/"), "/home/foo");
    ASSERT_EQ(split::Solution::simplify_path("/.da/./.../...."), "/.da/.../....");
}
