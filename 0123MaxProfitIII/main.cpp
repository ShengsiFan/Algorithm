#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if (prices.size() <= 1) return 0;
        vector<int> buyFirst(prices.size(), 0);
        vector<int> sellFirst(prices.size(), 0);
        vector<int> buySecond(prices.size(), 0);
        vector<int> sellSecond(prices.size(), 0);
        buyFirst[0] = -prices[0];
        buySecond[0] = -prices[0];

        for (int i = 1; i < prices.size(); i++) {
            buyFirst[i] = max(buyFirst[i - 1], -prices[i]);
            sellFirst[i] = max(sellFirst[i - 1], buyFirst[i - 1] + prices[i]);
            buySecond[i] = max(buySecond[i - 1], sellFirst[i - 1] - prices[i]);
            sellSecond[i] = max(sellSecond[i - 1], buySecond[i - 1] + prices[i]);
        }
        return sellSecond[prices.size() - 1];
    }
};

int main() {
    vector<int> prices = {1, 2, 4, 2, 5, 7, 2, 4, 9, 0};
    Solution s;
    cout << s.maxProfit(prices);
    return 0;
}
