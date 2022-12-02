#include "0399_evaluate_division.h"

#include <gtest/gtest.h>

using namespace leetcode::evaluate_division;

TEST(EVALUATE_DIVISION, EXAMPLE_TEST) {
    auto res1 = Solution::calc_equation(
        {{"a", "b"}, {"b", "c"}}, {2.0, 3.0}, {{"a", "c"}, {"b", "a"}, {"a", "e"}, {"a", "a"}, {"x", "x"}});
    std::vector<double> truth1{6.00000, 0.50000, -1.00000, 1.00000, -1.00000};

    auto res2 = Solution::calc_equation(
        {{"a", "b"}, {"b", "c"}, {"bc", "cd"}}, {1.5, 2.5, 5.0}, {{"a", "c"}, {"c", "b"}, {"bc", "cd"}, {"cd", "bc"}});
    std::vector<double> truth2{3.75000, 0.40000, 5.00000, 0.20000};

    auto res3 = Solution::calc_equation({{"a", "b"}}, {0.5}, {{"a", "b"}, {"b", "a"}, {"a", "c"}, {"x", "y"}});
    std::vector<double> truth3{0.50000, 2.00000, -1.00000, -1.00000};

    std::vector<std::vector<double>*> result{&res1, &res2, &res3}, truth{&truth1, &truth2, &truth3};
    for (size_t i = 0, e = result.size(); i < e; ++i) {
        ASSERT_EQ(result[i]->size(), truth[i]->size());
        for (size_t i2 = 0, e2 = result[i]->size(); i2 < e2; ++i2) {
            ASSERT_DOUBLE_EQ(result[i]->at(i2), truth[i]->at(i2));
        }
    }
}
