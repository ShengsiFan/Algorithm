#include <iostream>
#include "vector"
#include "algorithm"

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int> &nums) {
        int i = nums.size() - 1;
        for (; i > 0; i--) if (nums[i] > nums[i - 1]) break;
        if (i == 0) {
            sort(nums.begin(), nums.end());
            return;
        }
        int j = nums.size() - 1;
        for (; j >= i + 1; j--) if (nums[j] > nums[i - 1]) break;
        if (j == nums.size()) {
            swap(nums[i], nums[i - 1]);
            reverse(nums.begin() + i, nums.end());
            return;
        }
        swap(nums[i - 1], nums[j]);
        reverse(nums.begin() + i, nums.end());
    }
};

int main() {
    vector<int> nums = {2,2,7,5,4,3,2,2,1};
    Solution s;
    s.nextPermutation(nums);
    for (int i: nums) cout << i << " ";
    return 0;
}
