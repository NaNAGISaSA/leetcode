#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0017_letter_combinations_of_a_phone_number.h"

using namespace leetcode::letter_combinations_of_a_phone_number;

TEST(LETTER_COMBINATIONS_OF_A_PHONE_NUMBER, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::letter_combinations("").size(), 0);
    ASSERT_THAT(Solution::letter_combinations("2"), testing::ElementsAre("a", "b", "c"));
    ASSERT_THAT(Solution::letter_combinations("23"),
                testing::ElementsAre("ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"));
}
