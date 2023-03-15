#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int a = 1, b = 2;
        int cur = 0;
        for (int i = 3; i <= n; i++) {
            cur = a + b;
            a = b;
            b = cur;
        }
        return cur;
    }
};

int main() {
    Solution solution;
    cout << solution.climbStairs(5);
    return 0;
}
