#include "0332_reconstruct_itinerary.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::reconstruct_itinerary;

TEST(RECONSTRUCT_ITINERARY, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::find_itinerary({{"MUC", "LHR"}, {"JFK", "MUC"}, {"SFO", "SJC"}, {"LHR", "SFO"}}),
                testing::ElementsAre("JFK", "MUC", "LHR", "SFO", "SJC"));
    ASSERT_THAT(
        Solution::find_itinerary({{"JFK", "SFO"}, {"JFK", "ATL"}, {"SFO", "ATL"}, {"ATL", "JFK"}, {"ATL", "SFO"}}),
        testing::ElementsAre("JFK", "ATL", "JFK", "SFO", "ATL", "SFO"));
    ASSERT_THAT(Solution::find_itinerary({{"JFK", "KUL"}, {"JFK", "NRT"}, {"NRT", "JFK"}}),
                testing::ElementsAre("JFK", "NRT", "JFK", "KUL"));
}
