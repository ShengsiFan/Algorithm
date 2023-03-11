#include <iostream>
#include "vector"
#include "algorithm"

using namespace std;

class Solution {
public:
    void traversal(int &sum, int startIndex, vector<vector<int>> &res, vector<int> &path,
                   const vector<int> &candidates, const int &target) {
        if (sum == target) {
            res.push_back(path);
            return;
        }
        if (sum > target) return;
        for (int i = startIndex; i < candidates.size(); i++) {
            if (i != startIndex && candidates[i] == candidates[i - 1]) continue;
            sum += candidates[i];
            path.push_back(candidates[i]);
            traversal(sum, i + 1, res, path, candidates, target);
            sum -= candidates[i];
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        int sum = 0;
        vector<int> path;
        traversal(sum, 0, res, path, candidates, target);
        return res;
    }
};

int main() {
    vector<int> c = {10, 1, 2, 7, 6, 1, 5};
    Solution s;


    vector<vector<int>> res = s.combinationSum(c, 8);

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
