#include <iostream>
#include "string"
#include "vector"

using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        if (text1.empty() || text2.empty()) return 0;
        vector<vector<int>> dp(text1.size(), vector<int>(text2.size(), 0));
        int res = 0;
        if (text1[0] == text2[0]) {
            dp[0][0] = 1;
            res = 1;
        }
        cout << "A ";
        for (char a: text2) {
            cout << a << " ";
        }
        cout << endl;
        for (int i = 1; i < text1.size(); i++) {
            if (text2[0] == text1[i] || dp[i - 1][0]) {
                dp[i][0] = 1;
                res = 1;
            }
        }
        cout << text1[0] << " ";
        for (int i = 1; i < text2.size(); i++) {
            if (text1[0] == text2[i] || dp[0][i - 1]) {
                dp[0][i] = 1;
                res = 1;
            }
            cout << dp[0][i] << " ";
        }
        cout << endl;
        for (int i = 1; i < text1.size(); i++) {
            cout << text1[i] << " " << dp[i][0] << " ";
            for (int j = 1; j < text2.size(); j++) {
                if (text1[i] == text2[j]) {
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
    string text1 = "a", text2 = "a";



    Solution s;
    cout << s.longestCommonSubsequence(text1, text2);
    return 0;
}
