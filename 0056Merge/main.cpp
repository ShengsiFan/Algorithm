#include <iostream>
#include "vector"
#include "algorithm"

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        for (vector<int> interval: intervals) {
            if (res.empty() || interval[0] > res[res.size() - 1][1]) res.push_back(interval);
            else res[res.size() - 1][1] = max(interval[1], res[res.size() - 1][1]);
        }
        return res;
    }
};

int main() {
    vector<vector<int>> v = {{1,  3},
                             {2,  6},
                             {8,  10},
                             {15, 18}};
    Solution s;
    vector<vector<int>> res = s.merge(v);
    for (vector<int> row: res) {
        cout << row[0] << " " << row[1] << endl;
    }
    return 0;
}
