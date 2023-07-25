#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    void travelsal(int i, int j, vector<vector<char>> &grid) {
        if (i >= grid.size() || i < 0) return;
        if (j >= grid[0].size() || j < 0) return;
        if (grid[i][j] == '2' || grid[i][j] == '0') return;

        grid[i][j] = '2';
        travelsal(i - 1, j, grid);
        travelsal(i + 1, j, grid);
        travelsal(i, j - 1, grid);
        travelsal(i, j + 1, grid);
    }

    int numIslands(vector<vector<char>> &grid) {
        int res = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == '1') {
                    res++;
                    travelsal(i, j, grid);
                }
            }
        }
        return res;
    }
};

int main() {
    vector<vector<char>> grid = {{'1','1','0','1','0'},
    {'1','1','0','1','0'},
    {'1','1','0','0','0'},
    {'0','0','0','0','0'}};
    Solution s;
    cout << s.numIslands(grid);
    return 0;
}
