#include "0386_lexicographical_numbers.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::lexicographical_numbers;

TEST(LEXICOGRAPHICAL_NUMBERS, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::lexical_order(13), testing::ElementsAre(1, 10, 11, 12, 13, 2, 3, 4, 5, 6, 7, 8, 9));
    ASSERT_THAT(Solution::lexical_order(2), testing::ElementsAre(1, 2));
}
