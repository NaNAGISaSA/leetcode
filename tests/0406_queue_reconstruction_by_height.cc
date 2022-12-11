#include "0406_queue_reconstruction_by_height.h"

#include <gtest/gtest.h>

using namespace leetcode::queue_reconstruction_by_height;

TEST(QUEUE_RECONSTRUCTION_BY_HEIGHT, EXAMPLE_TEST) {
    std::vector<std::vector<int>> input1{{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}};
    auto res1 = Solution::reconstruct_queue(input1);
    std::vector<std::vector<int>> truth1{{5, 0}, {7, 0}, {5, 2}, {6, 1}, {4, 4}, {7, 1}};

    std::vector<std::vector<int>> input2{{6, 0}, {5, 0}, {4, 0}, {3, 2}, {2, 2}, {1, 4}};
    auto res2 = Solution::reconstruct_queue(input2);
    std::vector<std::vector<int>> truth2{{4, 0}, {5, 0}, {2, 2}, {3, 2}, {1, 4}, {6, 0}};

    auto assert_result = [](const std::vector<std::vector<int>>& result, const std::vector<std::vector<int>>& truth) {
        for (size_t i = 0; i < result.size(); ++i) {
            ASSERT_EQ(result[i].front(), truth[i].front());
            ASSERT_EQ(result[i].back(), truth[i].back());
        }
    };

    assert_result(res1, truth1);
    assert_result(res2, truth2);
}
