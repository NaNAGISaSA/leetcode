#include <gtest/gtest.h>

#include "0150_evaluate_reverse_polish_notation.h"

using namespace leetcode::evaluate_reverse_polish_notation;

TEST(EVALUATE_REVERSE_POLISH_NOTATION, EXAMPLE_TEST) {
    ASSERT_EQ(Solution::eval_rpn({"2", "1", "+", "3", "*"}), 9);  // ((2 + 1) * 3) = 9
    ASSERT_EQ(Solution::eval_rpn({"4", "13", "5", "/", "+"}), 6);  // (4 + (13 / 5)) = 6
    ASSERT_EQ(Solution::eval_rpn({"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"}),
              22);  // ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
}
