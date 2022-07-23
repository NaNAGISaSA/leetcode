#include "0295_find_median_from_data_stream.h"

#include <gtest/gtest.h>

using namespace leetcode::find_median_from_data_stream;

TEST(FIND_MEDIAN_FROM_DATA_STREAM, EXAMPLE_TEST) {
    MedianFinder finder;
    finder.add_num(1);
    finder.add_num(2);
    ASSERT_DOUBLE_EQ(finder.find_median(), 1.5);
    finder.add_num(3);
    ASSERT_DOUBLE_EQ(finder.find_median(), 2.0);
}
