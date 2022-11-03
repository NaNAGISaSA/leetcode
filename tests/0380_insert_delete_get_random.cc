#include "0380_insert_delete_get_random.h"

#include <gtest/gtest.h>

using namespace leetcode::insert_delete_get_random;

TEST(INSERT_DELETE_GET_RANDOM, EXAMPLE_TEST) {
    RandomizedSet set;
    ASSERT_TRUE(set.insert(1));
    ASSERT_TRUE(set.insert(2));
    ASSERT_FALSE(set.remove(3));
    ASSERT_TRUE(set.remove(2));
    ASSERT_FALSE(set.insert(1));
    ASSERT_EQ(set.get_random(), 1);
}
