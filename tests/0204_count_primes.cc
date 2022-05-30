#include "0204_count_primes.h"

#include <gtest/gtest.h>

using namespace leetcode::count_primes;

TEST(COUNT_PRIMES, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::count_primes(10), 4);
    ASSERT_EQ(Solution::count_primes(1), 0);
}
