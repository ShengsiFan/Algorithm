#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;

    void traversal(vector<int> &nums, vector<bool> &used) {
        if (path.size() == nums.size()) {
            res.push_back(path);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;

            used[i] = true;
            path.push_back(nums[i]);
            traversal(nums, used);
            path.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int> &nums) {
        vector<bool> used(nums.size(), false);
        path.clear();
        res.clear();
        traversal(nums, used);
        return res;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};
    Solution s;
    vector<vector<int>> res = s.permute(nums);

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
