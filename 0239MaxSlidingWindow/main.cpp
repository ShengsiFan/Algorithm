#include <iostream>
#include "vector"
#include "queue"

using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k) {
        if (k == 1) {
            return nums;
        }
        queue<int> window;
        vector<int> res;
        int max = 0;

        for (int i = 0; i < k; i++) {
            window.push(nums[i]);
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        res.push_back(max);
        for (int i = k; i < nums.size(); i++) {
            if (window.front() == max) { // 如果马上最大值要出队了，找新的最大值
                queue<int> temp = window;
                temp.pop();
                int nowMax = temp.front();
                for (int j = 0; j < k - 1; j++) {    // 遍历找最大值
                    if (temp.front() > nowMax) nowMax = temp.front();
                    temp.pop();
                }
                window.pop();
                window.push(nums[i]);
                if (nums[i] > nowMax) max = nums[i];    // 新值若大于目前的最大值，更新最大值
                else max = nowMax;
            } else {    // 如果出队的不是最大值，就正常去头加尾，如果新数比最大值大，更新最大值
                if (nums[i] > max) max = nums[i];    // 新值若大于目前的最大值，更新最大值
                else max = max;
                window.pop();
                window.push(nums[i]);
            }
            res.push_back(max); // 更新最大值进输入数组
        }
        return res;
    }
};

int main() {
    vector<int> nums = {-5426,9766,-5396,-7824,-3941,4600,-1485,-1486,-4530,-1636,-2088,-5295,-5383,5786,-9489,3180,-4575,-7043,-2153,1123,1750};

    Solution s;

    vector<int> res = s.maxSlidingWindow(nums, 3);

    for (vector<int>::iterator it = res.begin(); it != res.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;


    return 0;
}
