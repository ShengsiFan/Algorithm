#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    static bool isValid(const vector<vector<char>> &table, int row, int col, char val) {
        for (int i = 0; i < 9; i++) {
            if (table[i][col] == val) return false;
        }
        for (int i = 0; i < 9; i++) {
            if (table[row][i] == val) return false;
        }
        for (int i = ((int) row / 3) * 3; i < ((int) row / 3) * 3 + 3; i++) {
            for (int j = ((int) col / 3) * 3; j < ((int) col / 3) * 3 + 3; j++) {
                if (i == row && j == col) continue;
                if (table[i][j] == val) return false;
            }
        }
        return true;
    }

    bool traversal(vector<vector<char>> &table) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (table[i][j] == '0') {
                    for (char k = '1'; k <= '9'; k++) {
                        if (isValid(table, i, j, k)) {
                            table[i][j] = k;
                            if (traversal(table)) return true;
                            table[i][j] = '0';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void shudu(vector<vector<char>> &table) {
        traversal(table);
    }
};

int main() {
    vector<char> a(9, '0');
    vector<vector<char>> table;
    int n = 9;
    Solution s;

    while (n-- && cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8]) { // 注意 while 处理多个 case
        vector<char> temp;
        for (char i : a) temp.push_back(i);
        table.push_back(temp);
    }

    s.shudu(table);
    for (auto& i : table) {
        for (auto j : i) {
            cout << j << ' ';
        }
        cout << endl;
    }
    return 0;
}
// 64 位输出请用 printf("%lld")