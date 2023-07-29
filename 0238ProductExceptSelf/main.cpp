#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size()), postfix(nums.size());
        vector<int> res(nums.size());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (i == 0) {
                prefix[i] = nums[0];
                continue;
            }
            prefix[i] = prefix[i - 1] * nums[i];
        }
        for (int i = nums.size() - 1; i > 0; i--) {
            if (i == nums.size() - 1) {
                postfix[i] = nums.back();
                continue;
            }
            postfix[i] = postfix[i + 1] * nums[i];
        }
        res[0] = postfix[1];
        res[nums.size() - 1] = prefix[nums.size() - 2];
        for (int i = 1; i < nums.size() - 1; i++) {
            res[i] = prefix[i - 1] * postfix[i + 1];
        }
        return res;
    }
};

int main() {
    vector<int> nums = {-1,1,0,-3,3};
    Solution s;
    vector<int> res = s.productExceptSelf(nums);
    for (int n : res) cout << n << " ";
    return 0;
}
