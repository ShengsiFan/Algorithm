#include <iostream>
#include "vector"
#include "unordered_map"

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> temp;   // key是元素值，value是索引
        for (int i = 0; i < nums.size(); i++) {
            if (temp.find(target - nums[i]) != temp.end()) {
                return vector<int>{i, temp[target - nums[i]]};
            } else {
                temp.insert({nums[i], i});
            }
        }
        return vector<int>{0, 0};
    }
};

int main() {
    vector<int> n = {1, 2, 3, 4, 5, 6};
    Solution s;
    cout << s.twoSum(n, 4)[0] << " " << s.twoSum(n, 4)[1] << endl;
    return 0;
}
