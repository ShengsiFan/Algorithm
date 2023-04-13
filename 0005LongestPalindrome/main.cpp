/*
 * 动态规划法
 */
#include <iostream>
#include "string"
#include "vector"

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() == 1) return s;
        vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));
        //for (int i = 0; i < s.size(); i++) dp[i][i] = true;
        vector<int> res = {0, 0};
        int max = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            for (int j = i; j < s.size(); j++) {
                if (s[i] != s[j]) dp[i][j] = false;
                else {
                    if (j - i <= 1 || dp[i + 1][j - 1]) {
                        dp[i][j] = true;
                        if (j - i + 1 > res[1]) {
                            res[0] = i;
                            res[1] = j - i + 1;
                        }
                    } else dp[i][j] = false;
                }
            }
        }
        return s.substr(res[0], res[1]);
    }
};

int main() {
    string s = "abac";
    Solution so;
    cout << so.longestPalindrome(s);
    return 0;
}
