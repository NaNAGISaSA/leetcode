#include "0381_insert_delete_get_random_duplicates_allowed.h"

#include <gtest/gtest.h>

using namespace leetcode::insert_delete_get_random_duplicates_allowed;

TEST(INSERT_DELETE_GET_RANDOM_DUPLICATES_ALLOWED, EXAMPLE_TEST) {
    RandomizedCollection collection;
    ASSERT_TRUE(collection.insert(1));
    ASSERT_FALSE(collection.insert(1));
    ASSERT_TRUE(collection.insert(2));
    ASSERT_FALSE(collection.remove(3));
    ASSERT_TRUE(collection.remove(1));
    ASSERT_TRUE(collection.remove(1));
    ASSERT_EQ(collection.get_random(), 2);
}
