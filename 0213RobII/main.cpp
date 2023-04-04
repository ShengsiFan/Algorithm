#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int robPart(const vector<int> &nums, int start, int end) {
        if (end - start == 0) return nums[start];
        if (end - start == 1) return max(nums[start], nums[end]);
        if (end - start == 2) return max(nums[start] + nums[end], nums[start + 1]);
        vector<int> dp(nums.size(), 0);
        dp[start] = nums[start];
        dp[start + 1] = max(nums[start], nums[start + 1]);
        dp[start + 2] = max(nums[start] + nums[start + 2], nums[start + 1]);
        for (int i = start + 3; i <= end; i++) {
            dp[i] = max(max(dp[i - 3] + nums[i], dp[i - 2] + nums[i]), dp[i - 1]);
        }
        return dp[end];
    }

    int rob(vector<int> &nums) {
        if (nums.empty()) return 0;
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0], nums[1]);
        int a = robPart(nums, 0, nums.size() - 2);
        int b = robPart(nums, 1, nums.size() - 1);
        return max(a, b);
    }
};

int main() {
    vector<int> nums = {200, 3, 140, 20, 10};
    Solution s;
    cout << s.rob(nums);
    return 0;
}
