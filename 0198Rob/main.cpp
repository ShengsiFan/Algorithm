#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int rob(vector<int> &nums) {
        vector<int> dp(nums.size(), 0);
        if (nums.size() == 1) return nums[0];
        dp[0] = nums[0];
        dp[1] = nums[0] > nums[1] ? nums[0] : nums[1];

        for (int i = 2; i < nums.size(); i++) {
            if (i == 2) {
                dp[i] = max(nums[0] + nums[2], nums[1]);
                continue;
            }
            dp[i] = max(dp[i - 3] + nums[i], dp[i - 2] + nums[i]);
            dp[i] = max(dp[i], dp[i - 1]);
        }
        return dp[nums.size() - 1];
    }
};

int main() {
    vector<int> nums = {2,7,9,3,1};
    Solution s;
    cout << s.rob(nums);
    return 0;
}
