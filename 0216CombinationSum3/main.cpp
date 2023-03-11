#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    void traversal(vector<vector<int>> &res, int &sum, vector<int> &path, int k, int n, int startIndex) {
        if (path.size() == k && sum == n) { // 终止条件——个数相同且和满足要求
            res.push_back(path);
            return;
        }
        for (int i = startIndex; i <= 9; i++) { // 回溯过程
            sum += i;
            path.push_back(i);
            traversal(res, sum, path, k, n, i + 1);
            sum -= i;
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> path;
        int sum = 0;
        traversal(res, sum, path, k, n, 1);
        return res;
    }
};

int main() {
    Solution s;
    vector<vector<int>> res = s.combinationSum3(2, 5);
    for (vector<vector<int>>::iterator it1 = res.begin(); it1 != res.end(); it1++) {
        for (vector<int>::iterator it2 = (*it1).begin(); it2 != (*it1).end(); it2++) {
            cout << *it2 << " ";
        }
        cout << endl;
    }
    return 0;
}
