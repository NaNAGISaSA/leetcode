#include <gtest/gtest.h>

#include "0093_restore_ip_addresses.h"

using namespace leetcode::restore_ip_addresses;

TEST(RESTORE_IP_ADDRESSES, EXAMPLE_TEST) {
    auto res1 = Solution::restore_ip_addresses("101023");
    ASSERT_EQ(res1.size(), 5);
    ASSERT_EQ(res1[0], "1.0.10.23");
    ASSERT_EQ(res1[1], "1.0.102.3");
    ASSERT_EQ(res1[2], "10.1.0.23");
    ASSERT_EQ(res1[3], "10.10.2.3");
    ASSERT_EQ(res1[4], "101.0.2.3");
    auto res2 = Solution::restore_ip_addresses("0000");
    ASSERT_EQ(res2.size(), 1);
    ASSERT_EQ(res2[0], "0.0.0.0");
}
