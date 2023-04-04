#include <iostream>
#include "vector"
#include "string"

using namespace std;

class Solution {
public:
    int findMaxForm(vector<string> &strs, int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (const auto &str : strs) {
            int x = 0, y = 0;
            for (auto ch : str) {
                if (ch == '0') x++;
                else y++;
            }
            for (int i = m; i >= x; i--) {
                for (int j = n; j >= y; j--) {
                    dp[i][j] = max(dp[i - x][j - y] + 1, dp[i][j]);
                }
            }
        }
        return dp[m][n];
    }
};

int main() {
    vector<string> strs = {"10", "0001", "111001", "1", "0"};
    Solution s;
    cout << s.findMaxForm(strs, 5, 3);
    return 0;
}
