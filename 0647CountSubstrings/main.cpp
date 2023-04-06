/*
 * 动态规划实现
 */
#include <iostream>
#include "string"
#include "vector"

using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        vector<vector<bool>> dp(s.size(),vector<bool>(s.size(), false));
        int res = 0;
        for (int i = s.size()-1; i>=0;i--) {
            for (int j = i; j < s.size();j++) {
                if (s[i] != s[j]) dp[i][j] = false;
                else {
                    if (j-i<=1 || dp[i+1][j-1]) {
                        dp[i][j] = true;
                        res++;
                    }
                    else dp[i][j] = false;
                }
            }
        }
        return res;
    }
};

int main() {
    string st = "avc";
    Solution s;
    cout << s.countSubstrings(st);
    return 0;
}
