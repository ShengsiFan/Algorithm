#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int maxProfit(int k, vector<int> &prices) {
        if (prices.size() <= 1) return 0;
        k = min(k, (int) prices.size() / 2);
        vector<vector<int>> dp(prices.size(), vector<int>(2 * k, 0)); // 行：天数；列：2k第k次买入，2k+1第k次出手
        for (int i = 0; i < k; i++) {
            dp[0][2 * i] = -prices[0];
        }

        for (int i = 1; i < prices.size(); i++) {
            for (int j = 0; j < k; j++) {
                if (j > 0) dp[i][2 * j] = max(dp[i - 1][2 * j], dp[i - 1][2 * j - 1] - prices[i]);
                else dp[i][j] = max(dp[i-1][j],-prices[i]);
                dp[i][2 * j + 1] = max(dp[i - 1][2 * j + 1], dp[i - 1][2 * j] + prices[i]);
            }
        }
        return dp[prices.size() - 1][2 * k - 1];
    }
};

int main() {
    vector<int> prices = {3,2,6,5,0,3};
    Solution s;
    cout << s.maxProfit(2, prices);
    return 0;
}
