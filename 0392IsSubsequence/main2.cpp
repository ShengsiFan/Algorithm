/*
 * 动态规划实现
 */

#include "iostream"
#include "string"
#include "vector"

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty()) return true;
        if (t.empty() && !s.empty()) return false;
        vector<vector<int>> dp(s.size(), vector<int>(t.size(), 0));
        if (s[0] == t[0]) dp[0][0] = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == t[0] || dp[i - 1][0]) dp[i][0] = 1;
        }
        for (int i = 1; i < t.size(); i++) {
            if (s[0] == t[i] || dp[0][i - 1]) dp[0][i] = 1;
        }
        for (int i = 1; i < s.size(); i++) {
            for (int j = 1; j < t.size(); j++) {
                if (s[i] == t[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                if (dp[i][j] == s.size()) return true;
            }
        }
        if (dp[s.size() - 1][t.size() - 1] == s.size()) return true;
        else return false;
    }
};

int main() {
    string s = "b", t = "c";
    Solution so;
    cout << so.isSubsequence(s, t);
    return 0;
}