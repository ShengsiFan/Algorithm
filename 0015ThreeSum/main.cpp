#include <iostream>
#include "vector"
#include "algorithm"

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end()); // 排序

        for (int left = 0; left < nums.size() ; left++) {   // left作为遍历迭代器
            if (nums[left] > 0) return res; // 因为是排序过后的，所以三数里面最小值都大于0了，和肯定大于零
            if (left > 0 && nums[left] == nums[left - 1]) continue; // 给left去重

            int mid = left + 1, right = nums.size() - 1;

            while (mid < right) {   // 循环结束条件，mid和right指针相遇
                if (nums[left] + nums[mid] + nums[right] > 0) {
                    right--;
                } else if (nums[left] + nums[mid] + nums[right] < 0) {
                    mid++;
                } else {
                    res.push_back({nums[left], nums[mid], nums[right]});
                    while (right > mid && nums[mid] == nums[mid + 1]) { // 去重
                        mid++;
                    }
                    while (right > mid && nums[right] == nums[mid - 1]) {
                        right--;
                    }
                    mid++;
                    right--;
                }
            }
        }
        return res;
    }
};


int main() {
    vector<int> a = {1,2,-2,-1};

    Solution s;

    vector<vector<int>> b = s.threeSum(a);

    for (vector<vector<int>>::iterator it1 = b.begin(); it1 != b.end(); it1++) {
        for (vector<int>::iterator it2 = it1->begin(); it2 != it1->end(); it2++) {
            cout << *it2 << " ";
        }
        cout << endl;
    }

    return 0;
}
