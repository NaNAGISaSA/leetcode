#include <gtest/gtest.h>

#include "0134_gas_station.h"

using namespace leetcode::gas_station;

TEST(GAS_STATION, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::can_complete_circuit({1, 2, 3, 4, 5}, {3, 4, 5, 1, 2}), 3);
    ASSERT_EQ(Solution::can_complete_circuit({2, 3, 4}, {3, 4, 3}), -1);
}
