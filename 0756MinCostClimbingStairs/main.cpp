#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int> &cost) {
        vector<int> dp;
        dp.push_back(0);
        dp.push_back(0);
        for (int i = 2; i <= cost.size(); i++) {
            dp.push_back(min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]));
        }
        return dp[dp.size() - 1];
    }
};

int main() {
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    Solution s;
    cout << s.minCostClimbingStairs(cost);
    return 0;
}
