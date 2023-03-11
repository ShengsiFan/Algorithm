#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    vector<int> path;
    vector<vector<int>> res;

    void traversal(int startIndex, vector<int> &nums) {
        if (startIndex > nums.size()) return;

        res.push_back(path);
        for (int i = startIndex; i < nums.size(); i++) {
            path.push_back(nums[i]);
            traversal(i + 1, nums);
            path.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int> &nums) {
        path.clear();
        res.clear();
        traversal(0, nums);
        return res;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};
    Solution s;
    vector<vector<int>> a = s.subsets(nums);

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
