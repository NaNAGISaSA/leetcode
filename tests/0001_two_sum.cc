#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0001_two_sum.h"

using namespace leetcode::two_sum;

class TestParam {
public:
    TestParam(const std::vector<int>& _nums, int _target, const std::vector<int>& _truth)
        : nums(_nums), target(_target), truth(_truth) {
    }

    std::vector<int> nums;
    int target;
    std::vector<int> truth;
};

class TestSuite : public testing::TestWithParam<TestParam> {
public:
    void reorder_output(std::vector<int>& output) {
        if (output[0] > output[1]) {
            output.push_back(output[0]);
            output.erase(output.begin());
        }
    }
};

TEST_P(TestSuite, TestHashSetMethod) {
    auto param = GetParam();
    std::vector<int> result = hashset::Solution().two_sum(param.nums, param.target);
    reorder_output(result);
    ASSERT_THAT(result, testing::ElementsAre(param.truth[0], param.truth[1]));
}

TEST_P(TestSuite, TestHashMapMethod) {
    auto param = GetParam();
    std::vector<int> result = hashmap::Solution().two_sum(param.nums, param.target);
    reorder_output(result);
    ASSERT_THAT(result, testing::ElementsAre(param.truth[0], param.truth[1]));
}

INSTANTIATE_TEST_SUITE_P(TWO_SUM_TEST,
                         TestSuite,
                         testing::Values(TestParam({2, 7, 11, 15}, 9, {0, 1}),
                                         TestParam({3, 2, 4}, 6, {1, 2}),
                                         TestParam({3, 3}, 6, {0, 1})));
