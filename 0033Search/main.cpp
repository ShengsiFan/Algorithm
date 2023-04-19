#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        if (nums.empty()) return -1;
        if (nums.size() == 1) return nums[0] == target ? 0 : -1;
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] >= nums[0]) {
                if (target >= nums[0] && target < nums[mid]) right = mid - 1;
                else left = mid + 1;
            } else {
                if (target <= nums[nums.size() - 1] && target > nums[mid]) left = mid + 1;
                else right = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {3,1};
    Solution s;
    cout << s.search(nums, 1);
    return 0;
}
