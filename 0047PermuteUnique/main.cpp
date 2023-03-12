#include <iostream>
#include "vector"
#include "algorithm"

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
            if (i > 0 && nums[i] == nums[i - 1] && used[i - 1]) continue;
            if (used[i]) continue;

            path.push_back(nums[i]);
            used[i] = true;
            traversal(nums, used);
            used[i] = false;
            path.pop_back();
        }
    }

    vector<vector<int>> permuteUnique(vector<int> &nums) {
        res.clear();
        path.clear();
        sort(nums.begin(), nums.end());
        vector<bool> used(nums.size(), false);
        traversal(nums, used);
        return res;
    }
};

int main() {
    vector<int> nums = {1, 1, 2};

    Solution s;
    vector<vector<int>> res = s.permuteUnique(nums);

    for (vector<vector<int>>::iterator it1 = res.begin(); it1 != res.end(); it1++) {
        for (vector<int>::iterator it2 = (*it1).begin(); it2 != (*it1).end(); it2++) {
            cout << *it2 << " ";
        }
        cout << endl;
    }

    return 0;
}
