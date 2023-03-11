#include <iostream>
#include "vector"
#include "algorithm"

using namespace std;

class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;

    void traversal(int startIndex, const vector<int> &nums) {
        if (startIndex > nums.size()) return;
        res.push_back(path);

        for (int i = startIndex; i < nums.size(); i++) {
            if (i > startIndex && nums[i] == nums[i-1]) continue;
            path.push_back(nums[i]);
            traversal(i + 1, nums);
            path.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        res.clear();
        path.clear();
        traversal(0, nums);
        return res;
    }
};

int main() {
    vector<int> nums = {1, 2, 2};
    Solution s;
    vector<vector<int>> a = s.subsetsWithDup(nums);
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
