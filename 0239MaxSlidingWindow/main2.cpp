#include <iostream>
#include "vector"
#include "deque"

using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k) {
        if (k == 1) return nums;
        deque<int> deq;
        vector<int> res;

        // 第一个窗口，只留按顺序从大到小正确的元素，如 1, 5, 2, 3， 就只留5, 3
        for (int i = 0; i < k; i++) {
            while (!deq.empty() && nums[i] > deq.back()) {
                deq.pop_back();
            }
            deq.push_back(nums[i]);
        }
        res.push_back(deq.front());

        // 往后滑
        for (int i = k; i < nums.size(); i++) {
            if (nums[i - k] == deq.front()) deq.pop_front();
            while (!deq.empty() && nums[i] > deq.back()) {
                deq.pop_back();
            }
            deq.push_back(nums[i]);
            res.push_back(deq.front());
        }
        return res;
    }
};

int main() {
    vector<int> nums = {-5426, 9766, -5396, -7824, -3941, 4600, -1485, -1486, -4530, -1636, -2088, -5295, -5383, 5786,
                        -9489, 3180, -4575, -7043, -2153, 1123, 1750};

    Solution s;

    vector<int> res = s.maxSlidingWindow(nums, 6);

    for (vector<int>::iterator it = res.begin(); it != res.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
