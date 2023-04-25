#include <iostream>
#include "vector"
#include "unordered_map"

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int> &nums) {
        unordered_map<int, int> hash;
        int res = 0;
        for (int num: nums) {
            if (hash[num]) continue;
            if (!hash[num]) {
                if (!hash[num - 1] && !hash[num + 1]) { // 如果左右没有邻居，置1
                    hash[num] = 1;
                    res = max(res, hash[num]);
                }
                else if (!hash[num - 1] && hash[num + 1]) { // 左边没有，右边有，就把有边界加一，并更新给当前位置并作为左边界
                    hash[num] = hash[num + 1] + 1;
                    hash[num + hash[num + 1]]++;
                    res = max(res, hash[num]);   // 更新答案
                } else if (hash[num - 1] && !hash[num + 1]) { // 右边没有，左边有，类似
                    hash[num] = hash[num - 1] + 1;
                    hash[num - hash[num - 1]]++;
                    res = max(res, hash[num]);   // 更新答案
                } else if (hash[num - 1] && hash[num + 1]) {  // 如果都有，就串起来，该位置只要不为零就行，左右边界要更新
                    hash[num] = 1;
                    int temp = hash[num - hash[num - 1]] + hash[num + 1] + 1;
                    hash[num - hash[num - 1]] = temp;
                    hash[num + hash[num + 1]] = temp;

                    res = max(res, temp);   // 更新答案
                }
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums = {0};
    Solution s;
    cout << s.longestConsecutive(nums);
    return 0;
}
