#include "0390_elimination_game.h"

namespace leetcode::elimination_game {

int Solution::last_remaining(int n) {
    int head = 1, step = 1;
    bool forward = true;
    while (n != 1) {
        if (forward || n % 2 != 0) {
            head += step;
        }
        step *= 2;
        n /= 2;
        forward = !forward;
    }
    return head;
}

}  // namespace leetcode::elimination_game
