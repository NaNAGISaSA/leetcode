#include "0331_verify_preorder_serialization_of_a_binary_tree.h"

#include <gtest/gtest.h>

using namespace leetcode::verify_preorder_serialization_of_a_binary_tree;

TEST(VERIFY_PREORDER_SERIALIZATION_OF_A_BINARY_TREE, EXAMPLE_TEST) {
    ASSERT_TRUE(Solution::is_valid_serialization("9,3,4,#,#,1,#,#,2,#,6,#,#"));
    ASSERT_FALSE(Solution::is_valid_serialization("1,#"));
    ASSERT_FALSE(Solution::is_valid_serialization("9,#,#,1"));
}
