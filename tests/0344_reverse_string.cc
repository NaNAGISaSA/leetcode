#include "0344_reverse_string.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::reverse_string;

TEST(REVERSE_STRING, EXAMPLE_TEST) {
    std::vector<char> str1{'h', 'e', 'l', 'l', 'o'}, str2{'H', 'a', 'n', 'n', 'a', 'h'};
    Solution::reverse_string(str1);
    Solution::reverse_string(str2);
    ASSERT_THAT(str1, testing::ElementsAre('o', 'l', 'l', 'e', 'h'));
    ASSERT_THAT(str2, testing::ElementsAre('h', 'a', 'n', 'n', 'a', 'H'));
}
