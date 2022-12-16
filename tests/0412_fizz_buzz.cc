#include "0412_fizz_buzz.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::fizz_buzz;

TEST(FIZZ_BUZZ, EXAMPLE_TEST) {
    ASSERT_THAT(
        Solution::fizz_buzz(15),
        testing::ElementsAre(
            "1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz"));
}
