#include <iostream>
#include "vector"
#include "climits"

using namespace std;

class Solution {
public:
    int combinationSum4(vector<int> &nums, int target) {
        vector<int> dp(target + 1, 0);
        dp[0] = 1;
        for (int j = 0; j <= target; j++) {
            for (int num : nums) {
                if (j - num >= 0 && dp[j] < INT_MAX - dp[j - num]) dp[j] += dp[j - num];
            }
        }
        return dp[target];
    }
};

int main() {
    vector<int> nums = {1, 2, 3};
    Solution s;
    cout << s.combinationSum4(nums, 4);
    return 0;
}
