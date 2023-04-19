#include <iostream>
#include "vector"
#include "stack"

using namespace std;

class Solution {
public:
    int maxArea(vector<int> &height) {
        int res = 0;
        int left = 0, right = height.size() - 1;
        while (left < right) {
            res = max(res, min(height[left], height[right]) * (right - left));
            if (height[left] < height[right]) left++;
            else right--;
        }
        return res;
    }
};

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    Solution s;
    cout << s.maxArea(height);
    return 0;
}
