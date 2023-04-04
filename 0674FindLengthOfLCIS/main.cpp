#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        vector<int> dp(nums.size(),1);  // 截至当前位置的递增序列有多少个了
        int res = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i-1]) {
                dp[i] = dp[i-1]+1;
                res = max(res,dp[i]);
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums = {2,2,2,2,2,2};
    Solution s;
    cout << s.findLengthOfLCIS(nums);
    return 0;
}
