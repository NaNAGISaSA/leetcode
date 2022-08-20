#include "0319_bulb_switcher.h"

#include <cmath>

namespace leetcode::bulb_switcher {

/*
 * 由分析可知，在到达x时，其有奇数个因数（包含x），则其为on的状态，有偶数个因数，则其为off的
 *   状态，因此本题可以转换为统计[1, n]区间有多少数为奇数个因数。该统计可以分为以下两种情况：
 * 1）该数为质数，因数只有1和它本身，因此为off状态；
 * 2）该数不为质数，存在其它因数，由于因数都是成对出现，因此如果因数为奇数，则其sqrt必为整数，
 *     如16：(1, 16), (2, 8), (4, 4)
 */
int Solution::bulb_switch(int n) {
    return static_cast<int>(sqrt(n));
}

}  // namespace leetcode::bulb_switcher