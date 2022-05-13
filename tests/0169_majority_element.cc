#include <gtest/gtest.h>

#include "0169_majority_element.h"

using namespace leetcode::majority_element;

TEST(MAJORITY_ELEMENT, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::majority_element({2, 2, 1, 1, 1, 2, 2}), 2);
}
