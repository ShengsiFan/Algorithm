#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];
        int res = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            dp[i] = max(nums[i], dp[i - 1] + nums[i]);
            if (dp[i] > res) res = dp[i];
        }
        return res;
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution s;
    cout << s.maxSubArray(nums);
    return 0;
}
