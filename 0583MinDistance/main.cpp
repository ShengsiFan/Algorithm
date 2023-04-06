#include <iostream>
#include "vector"
#include "string"

using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        if (word1.empty()) return word2.size();
        if (word2.empty()) return word1.size();

        vector<vector<int>> dp(word1.size(), vector<int>(word2.size(), 0));

        if (word1[0] == word2[0]) dp[0][0] = 1;
        for (int i = 1; i < word1.size(); i++) if (word1[i] == word2[0] || dp[i - 1][0]) dp[i][0] = 1;
        for (int i = 1; i < word2.size(); i++) if (word2[i] == word1[0] || dp[0][i - 1]) dp[0][i] = 1;
        for (int i = 1; i < word1.size(); i++) {
            for (int j = 1; j < word2.size(); j++) {
                if (word1[i] == word2[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return word1.size()+word2.size()-2*dp[word1.size()-1][word2.size()-1];
    }
};

int main() {
    string word1 = "", word2 = "etco";
    Solution s;
    cout << s.minDistance(word1, word2);
    return 0;
}
