#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int maximalSquare(vector<vector<char>> &matrix) {
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), 0));
        int res = 0;

        for (int i = 0; i < matrix.size(); i++) {
            dp[i][0] = matrix[i][0] - '0';
            res = res > dp[i][0] ? res : dp[i][0];
        }
        for (int j = 0; j < matrix[0].size(); j++) {
            dp[0][j] = matrix[0][j] - '0';
            res = res > dp[0][j] ? res : dp[0][j];
        }

        for (int i = 1; i < matrix.size(); i++) {
            for (int j = 1; j < matrix[i].size(); j++) {
                if (matrix[i][j] == '1') dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
                res = res > dp[i][j] ? res : dp[i][j];
            }
        }

        return res * res;
    }
};

int main() {
    vector<vector<char>> mat = {{'1','0','1','0','0'}, {'1','0','1','1','1'}, {'1','1','1','1','1'}, {'1','0','0','1','0'}};
    Solution s;
    cout << s.maximalSquare(mat);
    return 0;
}
