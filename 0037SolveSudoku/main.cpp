#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    static bool isValid(const vector<vector<char>> &board, int row, int col, char val) {
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == val) return false;
        }
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == val) return false;
        }
        for (int i = ((int) row / 3) * 3; i < ((int) row / 3) * 3 + 3; i++) {
            for (int j = ((int) col / 3) * 3; j < ((int) col / 3) * 3 + 3; j++) {
                if (i == row && j == col) continue;
                if (board[i][j] == val) return false;
            }
        }
        return true;
    }

    bool traversal(vector<vector<char>> &board) {
        for (int i = 0; i < 9; i++) {     // 行
            for (int j = 0; j < 9; j++) {   // 列
                if (board[i][j] == '0') {
                    for (char k = '1'; k <= '9'; k++) {  // 一个格子试1-9
                        if (isValid(board, i, j, k)) {
                            board[i][j] = k;
                            if (traversal(board)) return true;
                            board[i][j] = '0';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>> &board) {
        traversal(board);
    }
};

int main() {
    vector<vector<char>> board = {{'0', '9', '5', '0', '2', '0', '0', '6', '0'},
                                  {'0', '0', '7', '1', '0', '3', '9', '0', '2'},
                                  {'6', '0', '0', '0', '0', '5', '3', '0', '4'},
                                  {'0', '4', '0', '0', '1', '0', '6', '0', '7'},
                                  {'5', '0', '0', '2', '0', '7', '0', '0', '9'},
                                  {'7', '0', '3', '0', '9', '0', '0', '2', '0'},
                                  {'0', '0', '9', '8', '0', '0', '0', '0', '6'},
                                  {'8', '0', '6', '3', '0', '2', '1', '0', '5'},
                                  {'0', '5', '0', '0', '7', '0', '2', '8', '3'}};

    Solution s;
    s.solveSudoku(board);

    for (auto it1 = board.begin(); it1 != board.end(); it1++) {
        for (auto it2 = (*it1).begin(); it2 != (*it1).end(); it2++) {
            cout << *it2 << " ";
        }
        cout << endl;
    }

    return 0;
}
