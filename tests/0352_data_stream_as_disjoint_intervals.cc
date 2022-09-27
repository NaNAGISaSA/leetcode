#include "0352_data_stream_as_disjoint_intervals.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::data_stream_as_disjoint_intervals;

TEST(DATA_STREAM_AS_DISJOINT_INTERVALS, EXAMPLE_TEST) {
    SummaryRanges obj{};

    obj.add_num(1);
    auto res1 = obj.get_intervals();
    ASSERT_EQ(res1.size(), 1);
    ASSERT_THAT(res1[0], testing::ElementsAre(1, 1));

    obj.add_num(3);
    auto res2 = obj.get_intervals();
    ASSERT_EQ(res2.size(), 2);
    ASSERT_THAT(res2[0], testing::ElementsAre(1, 1));
    ASSERT_THAT(res2[1], testing::ElementsAre(3, 3));

    obj.add_num(7);
    auto res3 = obj.get_intervals();
    ASSERT_EQ(res3.size(), 3);
    ASSERT_THAT(res3[0], testing::ElementsAre(1, 1));
    ASSERT_THAT(res3[1], testing::ElementsAre(3, 3));
    ASSERT_THAT(res3[2], testing::ElementsAre(7, 7));

    obj.add_num(2);
    auto res4 = obj.get_intervals();
    ASSERT_EQ(res4.size(), 2);
    ASSERT_THAT(res4[0], testing::ElementsAre(1, 3));
    ASSERT_THAT(res4[1], testing::ElementsAre(7, 7));

    obj.add_num(6);
    auto res5 = obj.get_intervals();
    ASSERT_EQ(res5.size(), 2);
    ASSERT_THAT(res5[0], testing::ElementsAre(1, 3));
    ASSERT_THAT(res5[1], testing::ElementsAre(6, 7));

    obj.add_num(8);
    auto res6 = obj.get_intervals();
    ASSERT_EQ(res6.size(), 2);
    ASSERT_THAT(res6[0], testing::ElementsAre(1, 3));
    ASSERT_THAT(res6[1], testing::ElementsAre(6, 8));
}
