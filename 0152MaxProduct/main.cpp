#include <iostream>
#include "vector"
#include "climits"

using namespace std;

class Solution {
public:
    int maxProduct(vector<int> &nums) {
        int iMax = 1, iMin = 1, res = INT_MIN;
        for (int num : nums) {
            if (num < 0) swap(iMax, iMin);
            iMax = max(num, num * iMax);
            iMin = min(num, num * iMin);
            res = max(iMax, res);
        }
        return res;
    }
};

int main() {
    vector<int> nums = {2,3,-1,1};
    Solution s;
    cout << s.maxProduct(nums);
    return 0;
}
