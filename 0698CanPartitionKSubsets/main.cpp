#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int sumEach = 0;    // 每个子集和应该是多少

    bool traversal(const vector<int> &nums, int startIndex, vector<int> &sum) {
        if (startIndex == nums.size()) {
            for (int i : sum) {
                if (i != sumEach) return false;
            }
            return true;
        }

        for (int i = 0; i < sum.size(); i++) {
            if (sum[i] + nums[startIndex] > sumEach) continue;

            sum[i] += nums[startIndex];
            if (traversal(nums, startIndex + 1, sum)) return true;
            else sum[i] -= nums[startIndex];
            if (sum[i] == 0) break;
        }
        return false;
    }

    bool canPartitionKSubsets(vector<int> &nums, int k) {
        for (int num : nums) {
            sumEach += num;
        }
        if (sumEach % k) return false;
        else sumEach /= k;
        //vector<bool> taken(nums.size(), false); // 记录元素有没有用过
        vector<int> sum(k, 0);

        return traversal(nums, 0, sum);
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 3, 5, 2, 4};
    Solution s;
    cout << s.canPartitionKSubsets(nums, 4);
    return 0;
}
