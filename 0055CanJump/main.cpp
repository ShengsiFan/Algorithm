#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    bool canJump(vector<int> &nums) {
        int can = (int) nums.size() - 1;    // 从该处开始一定能到最后
        int cur = (int) nums.size() - 1;    // 当前遍历元素
        while (cur >= 0) {
            if (nums[cur] >= can - cur) can = cur;  // 如果cur这个元素能跳到can的位置，那cur就成为新的can
            cur--;
        }
        if (can) return false;
        else return true;
    }
};

int main() {
    vector<int> nums = {3, 2, 1, 0, 4};
    Solution s;
    cout << s.canJump(nums);
    return 0;
}
