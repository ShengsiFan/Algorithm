#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int findLength(vector<int> &nums1, vector<int> &nums2) {
        if (nums1.empty() || nums2.empty()) return 0;
        vector<vector<int>> dp(nums1.size(), vector<int>(nums2.size(), 0)); // 截至该位置，两个数组重复长度
        int res = 0;
        // 初始化
        if (nums1[0] == nums2[0]) dp[0][0] = 1;
        for (int i = 1; i < nums1.size(); i++) {
            if (nums1[i] == nums2[0]) {
                dp[i][0] = 1;
                res = 1;
            }
        }
        for (int i = 1; i < nums2.size(); i++) {
            if (nums2[i] == nums1[0]) {
                dp[0][i] = 1;
                res = 1;
            }
        }
        // 如果左上角不为零，说明在此之前若干位都相等，则等于左上角加1
        for (int i = 1; i < nums1.size(); i++) {
            for (int j = 1; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
                res = max(res, dp[i][j]);
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums1 = {0, 1, 1, 1, 1}, nums2 = {1, 0, 1, 0, 1};
    Solution s;
    cout << s.findLength(nums1, nums2);
    return 0;
}
