#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int> &nums, int target) {
        int sumAll = 0; // 总和
        int sum = 0;    // 前面放加号的数之和 (sum + target) / 2
        for (int num : nums) {
            sumAll += num;
        }
        if ((sumAll + target) % 2) return 0;
        if (abs(target) > sumAll) return 0;
        else sum = (sumAll + target) / 2;

        vector<int> dp(sum + 1, 0);
        dp[0] = 1;
        for (int num : nums) {
            for (int j = sum; j >= num; j--) {
                dp[j] += dp[j - num];
            }
        }
        return dp[sum];
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 1, 1};
    Solution s;
    cout << s.findTargetSumWays(nums, 3);
    return 0;
}
