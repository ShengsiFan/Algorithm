#include <iostream>
#include "string"
#include "vector"

using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        if (s.size() <= 1) return 0;
        vector<int> dp(s.size(), 0);
        int res = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == '(') dp[i] = 0;
            else {
                if (s[i - 1] == '(') {
                    if (i >= 2) dp[i] = dp[i - 2] + 2;
                    else dp[i] = 2;
                } else {
                    if (i - dp[i - 1] - 1 >= 0 && s[i - dp[i - 1] - 1] == '(') {
                        dp[i] = dp[i - 1] + 2;
                        if (i - dp[i - 1] - 1 >= 1) dp[i] += dp[i - dp[i - 1] - 2];
                    }
                    else dp[i] = 0;
                }
            }
            res = max(dp[i], res);
        }
        return res;
    }
};

int main() {
    string str = "()(())";
    Solution s;
    cout << s.longestValidParentheses(str);
    return 0;
}
