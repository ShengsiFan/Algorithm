#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    bool canPartition(vector<int> &nums) {
        int partSum = 0;
        for (int num : nums) {
            partSum += num;
        }
        if (partSum % 2) return false;
        else partSum /= 2;

        vector<int> dp(partSum + 1, 0);    // dp[i]含义：不超过i的最大和
        for (int i = 0; i < nums.size(); i++) {
            for (int j = partSum; j >= nums[i]; j--) {
                dp[j] = max(dp[j], dp[j - nums[i]] + nums[i]);
            }
        }
        if (dp[partSum] != partSum) return false;
        return true;
    }
};

int main() {
    vector<int> n = {1,2,3,4};
    Solution s;
    cout << s.canPartition(n);
    return 0;
}
