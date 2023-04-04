#include <iostream>
#include "string"
#include "vector"
#include "unordered_set"

using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string> &wordDict) {
        unordered_set<string> ws(wordDict.begin(), wordDict.end());
        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;
        for (int i = 1; i <= s.size(); i++) {
            for (int j = 0; j < i; j++) {
                string temp = s.substr(j, i - j);
                if (ws.find(temp) != ws.end() && dp[j]) dp[i] = true;
            }
        }
        return dp[s.size()];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
