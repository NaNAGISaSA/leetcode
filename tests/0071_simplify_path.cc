#include <gtest/gtest.h>

#include "0071_simplify_path.h"

using namespace leetcode::simplify_path;

TEST(SIMPLIFY_PATH, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::simplify_path("/../"), "/");
    ASSERT_EQ(Solution::simplify_path("/home//foo/"), "/home/foo");
    ASSERT_EQ(Solution::simplify_path("/.da/./.../...."), "/.da/.../....");
}
