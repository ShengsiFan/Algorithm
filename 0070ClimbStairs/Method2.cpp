#include <iostream>
#include "vector"
#include "climits"

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        for (int j = 1; j <= n; j++) {
            if (j >= 1) dp[j] += dp[j - 1];
            if (j >= 2) dp[j] += dp[j - 2];
        }
        return dp[n];
    }
};

int main() {
    Solution solution;
    cout << solution.climbStairs(5);
    return 0;
}
