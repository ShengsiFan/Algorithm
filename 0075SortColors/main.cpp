#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    void sortColors(vector<int> &nums) {
        if (nums.size() == 1) return;
        int zero = -1, two = (int) nums.size() - 1;
        for (int i = 0; i <= two; i++) {
            if (nums[i] == 2) {
                while (nums[two] == 2 && two > i) two--;
                if (nums[two] == 0) {
                    swap(nums[two], nums[i]);
                    swap(nums[i], nums[++zero]);
                } else swap(nums[two], nums[i]);
            } else if (nums[i] == 0) {
                if (i == 0) {
                    zero = 0;
                    continue;
                }
                if (zero == -1) {
                    zero = 0;
                    swap(nums[zero], nums[i]);
                    continue;
                }
                while (nums[zero] == 0 && zero < i) zero++;
                swap(nums[zero], nums[i]);
            }
        }
    }
};

int main() {
    vector<int> nums = {1, 2, 0};
    Solution s;
    s.sortColors(nums);
    for (int i: nums) cout << i << " ";
    return 0;
}
