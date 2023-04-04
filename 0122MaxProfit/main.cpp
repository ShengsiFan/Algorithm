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
        int res = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (bought[i - 1] > 0) { // 如果发现上一天已经出手了，就重新开始
                bought[i] = -prices[i];
                notBought[i] = 0;
                continue;
            }
            bought[i] = max(bought[i - 1], -prices[i]);

            if (i < prices.size() - 1 && prices[i + 1] < prices[i]) {   // 如果下一天要跌，就卖掉
                res += max(notBought[i - 1], prices[i] + bought[i - 1]);
                bought[i] = 1;  // 标记一下，代表在这一天出手了
            } else if (i < prices.size() - 1 && prices[i + 1] >= prices[i]) {   // 下一天不跌，正常更新notBought数组
                notBought[i] = max(notBought[i - 1], prices[i] + bought[i - 1]);
            } else {    // 最后一天了，处理掉，并加在结果里面
                res += notBought[i] = max(notBought[i - 1], prices[i] + bought[i - 1]);
            }
        }
        return max(res, notBought[prices.size()-1]);
    }
};

int main() {
    vector<int> prices = {1,11,7,4,2};
    Solution s;
    cout << s.maxProfit(prices);
    return 0;
}
