#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if (prices.size() <= 1) return 0;

        vector<vector<int>> dp(prices.size(), vector<int>(4, 0));    // 0-持股；1-不持股非冷冻期；2-当天卖出股；3-冷冻期
        dp[0][0] = -prices[0];
        for (int i = 1; i < prices.size(); i++) {
            dp[i][0] = max(max(dp[i - 1][0], dp[i - 1][1] - prices[i]),
                           dp[i - 1][3] - prices[i]);   // 有可能：前一天本来就持股、前一天是冷冻期、前一天是不持股的非冷冻期
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][3]); // 前一天就是不持股的非冷冻期、前一天是冷冻期
            dp[i][2] = dp[i - 1][0] + prices[i];    // 卖
            dp[i][3] = dp[i - 1][2];                // 冷冻期不操作
        }
        return max(max(dp[prices.size() - 1][1], dp[prices.size() - 1][2]), dp[prices.size() - 1][3]);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
