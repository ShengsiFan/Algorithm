#include <iostream>
#include "vector"
#include "climits"

using namespace std;

class Solution {
public:
    int numSquares(int n) {
        vector<int> nums;
        for (int i = 1; i <= 100; i++) {
            nums.push_back(i * i);
        }
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int num : nums) {
            if (num > n) break;
            for (int j = num; j <= n; j++) {
                if (dp[j - num] != INT_MAX) dp[j] = min(dp[j], dp[j - num] + 1);
            }
        }
        //for (int d : dp) cout << d << endl;
        return dp[n];
    }
};

int main() {
    Solution s;
    cout << s.numSquares(13);
    return 0;
}
