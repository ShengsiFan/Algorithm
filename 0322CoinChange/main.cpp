#include <iostream>
#include "vector"
#include "climits"

using namespace std;

class Solution {
public:
    int coinChange(vector<int> &coins, int amount) {
        for (int coin : coins) {
            if (coin == amount) return 1;
        }
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;

        for (int coin : coins) {
            for (int j = coin; j <= amount; j++) {
                if (dp[j - coin] != INT_MAX) dp[j] = min(dp[j], dp[j - coin] + 1);
            }
        }

        if (dp[amount] == INT_MAX) return -1;
        else return dp[amount];
    }
};

int main() {
    vector<int> coins = {2};
    Solution s;
    cout << s.coinChange(coins, 3);
    return 0;
}
