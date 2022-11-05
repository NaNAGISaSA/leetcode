#include "0383_ransom_note.h"

#include <gtest/gtest.h>

using namespace leetcode::ransom_note;

TEST(RANSOM_NOTE, EXAMPLE_TEST) {
    ASSERT_FALSE(Solution::can_construct("a", "b"));
    ASSERT_FALSE(Solution::can_construct("aa", "ab"));
    ASSERT_TRUE(Solution::can_construct("aa", "aab"));
}
