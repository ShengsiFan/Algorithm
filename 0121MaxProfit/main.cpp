#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if (prices.empty()) return 0;
        vector<int> bought(prices.size(), 0);
        vector<int> notBought(prices.size(), 0);
        bought[0] = -prices[0];
        notBought[0] = 0;
        for (int i = 1; i < prices.size(); i++) {
            bought[i] = max(bought[i - 1], -prices[i]);
            notBought[i] = max(notBought[i - 1], prices[i] + bought[i - 1]);
        }
        return notBought[prices.size() - 1];
    }
};

int main() {

    return 0;
}
