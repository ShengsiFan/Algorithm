#include <iostream>
#include "vector"
#include "unordered_set"

using namespace std;

class Solution {
public:
    vector<int> path;
    vector<vector<int>> res;
    void traversal(int startIndex, const vector<int> &nums) {
        if (path.size() > 1) res.push_back(path);
        unordered_set<int> s;
        for (int i = startIndex; i < nums.size(); i++) {
            if (!path.empty() && nums[i] < path[path.size()-1] || s.find(nums[i]) != s.end()) continue;

            s.insert(nums[i]);
            path.push_back(nums[i]);
            traversal(i + 1, nums);
            path.pop_back();
        }
    }

    vector<vector<int>> findSubsequences(vector<int> &nums) {
        traversal(0, nums);
        return res;
    }
};

int main() {
    vector<int> nums = {4, 6, 7, 7};
    Solution s;
    vector<vector<int>> a = s.findSubsequences(nums);

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
