#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int> &nums) {
        vector<int> dp(nums.size(), 1);
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) dp[i] = max(dp[i], dp[j] + 1);
            }
            res = max(res, dp[i]);
            cout << dp[i] << " " << res << endl;
        }
        return res;
    }
};

int main() {
    vector<int> nums = {1, 3, 6, 7, 9, 4, 10, 5, 6};
    Solution s;
    cout << s.lengthOfLIS(nums);
    return 0;
}
