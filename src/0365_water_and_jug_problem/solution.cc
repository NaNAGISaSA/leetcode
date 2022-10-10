#include "0365_water_and_jug_problem.h"

namespace leetcode::water_and_jug_problem {

namespace {
int get_gcd(int a, int b) {
    return b == 0 ? a : get_gcd(b, a % b);
}
}  // namespace

bool Solution::can_measure_water(int jug1, int jug2, int target) {
    if (jug1 + jug2 < target) {
        return false;
    }
    if (jug1 == target || jug2 == target || jug1 + jug2 == target) {
        return true;
    }
    return target % get_gcd(jug1, jug2) == 0;
}

}  // namespace leetcode::water_and_jug_problem
