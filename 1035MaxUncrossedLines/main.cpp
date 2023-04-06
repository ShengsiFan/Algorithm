#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums2.empty()) return 0;
        vector<vector<int>> dp(nums1.size(), vector<int>(nums2.size(), 0));
        int res = 0;
        if (nums1[0] == nums2[0]) {
            dp[0][0] = 1;
            res = 1;
        }
        cout << "A ";
        for (int a: nums2) {
            cout << a << " ";
        }
        cout << endl;
        for (int i = 1; i < nums1.size(); i++) {
            if (nums2[0] == nums1[i] || dp[i - 1][0]) {
                dp[i][0] = 1;
                res = 1;
            }
        }
        cout << nums1[0] << " ";
        for (int i = 1; i < nums2.size(); i++) {
            if (nums1[0] == nums2[i] || dp[0][i - 1]) {
                dp[0][i] = 1;
                res = 1;
            }
            cout << dp[0][i] << " ";
        }
        cout << endl;
        for (int i = 1; i < nums1.size(); i++) {
            cout << nums1[i] << " " << dp[i][0] << " ";
            for (int j = 1; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    // else dp[i][j] = max(dp[i][j - 1] + 1, dp[i - 1][j] + 1);
                } else dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                cout << dp[i][j] << " ";
                res = max(res, dp[i][j]);
            }
            cout << endl;
        }
        return res;
    }
};

int main() {
    vector<int> nums1 = {1,3,7,1,7,5}, nums2 = {1,9,2,5,1};
    Solution s;
    cout << s.maxUncrossedLines(nums1, nums2);
    return 0;
}
