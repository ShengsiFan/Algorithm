#include <iostream>
#include "string"
#include "vector"

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<bool>> dp(s.size() + 1, vector<bool>(p.size() + 1));
        s = " " + s;
        p = " " + p;
        dp[0][0] = true;
        for (int i = 0; i < s.size(); i++) {
            for (int j = 1; j < p.size(); j++) {
                if (j <= p.size() - 2 && p[j + 1] == '*') continue;
                if (p[j] == '*') dp[i][j] = (j >= 2 && dp[i][j - 2]) ||
                                            (i >= 1 && dp[i - 1][j] && (s[i] == p[j - 1] || p[j - 1] == '.'));
                else dp[i][j] = i >= 1 && dp[i - 1][j - 1] && (s[i] == p[j] || p[j] == '.');
            }
        }
        return dp[s.size() - 1][p.size() - 1];
    }
};

int main() {
    string s = "mississippi", p = "mis*is*p*.";


    Solution so;
    cout << so.isMatch(s, p);
    return 0;
}
