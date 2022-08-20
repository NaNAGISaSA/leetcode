#include "0319_bulb_switcher.h"

#include <gtest/gtest.h>

using namespace leetcode::bulb_switcher;

TEST(BULB_SWITCHER, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::bulb_switch(0), 0);
    ASSERT_EQ(Solution::bulb_switch(1), 1);
    ASSERT_EQ(Solution::bulb_switch(3), 1);
    ASSERT_EQ(Solution::bulb_switch(9), 3);
}
