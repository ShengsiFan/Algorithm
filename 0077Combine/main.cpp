#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    void traversal(vector<vector<int>> &res, vector<int> &path, int n, int k, int startIndex) {
        if (path.size() == k) {
            res.push_back(path);
            return;
        }
        for (int i = startIndex; i <= n; i++){
            path.push_back(i);
            traversal(res, path, n, k, i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> path;
        traversal(res, path, n, k, 1);
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
