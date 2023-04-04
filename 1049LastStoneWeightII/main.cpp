#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int lastStoneWeightII(vector<int> &stones) {
        int all = 0;   // 石头的总重量

        for (int stone : stones) {
            all += stone;
        }
        int half = all / 2;
        vector<int> dp(half + 1, 0);

        for (int stone : stones) {
            for (int j = half; j >= stone; j--) {
                dp[j] = max(dp[j], dp[j - stone] + stone);
            }
        }
        return 2 * ((float)all / 2 - dp[half]);

    }
};

int main() {
    vector<int> stones = {31,26,33,21,40};
    Solution s;
    cout << s.lastStoneWeightII(stones);
    return 0;
}
