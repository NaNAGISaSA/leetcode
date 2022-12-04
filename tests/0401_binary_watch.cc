#include "0401_binary_watch.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::binary_watch;

TEST(BINARY_WATCH, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::read_binary_watch(0), testing::ElementsAre("0:00"));
    ASSERT_THAT(Solution::read_binary_watch(1),
                testing::ElementsAre("0:01", "0:02", "0:04", "0:08", "0:16", "0:32", "1:00", "2:00", "4:00", "8:00"));
    ASSERT_THAT(Solution::read_binary_watch(9), testing::ElementsAre());
}
