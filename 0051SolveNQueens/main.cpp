#include <iostream>
#include "vector"
#include "string"

using namespace std;

class Solution {
public:
    vector<vector<vector<char>>> result;

    bool isValid(const vector<vector<char>> chessBoard, int row, int col, int n) {
        for (int i = 0; i < row; i++) {
            if (chessBoard[i][col] == 'Q' || (col - row + i >= 0 && chessBoard[i][col - row + i] == 'Q'
                                              || (col + row - i >= 0 && chessBoard[i][col + row - i] == 'Q')))
                return false;
        }
        return true;
    }

    void traversal(int row, int n, vector<vector<char>> &chessBoard) {
        if (row == n) {
            result.push_back(chessBoard);
        }

        for (int i = 0; i < n; i++) {
            if (isValid(chessBoard, row, i, n)) {
                chessBoard[row][i] = 'Q';
                traversal(row + 1, n, chessBoard);
                chessBoard[row][i] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        //if (n < 4) return res;

        vector<char> row(n, '.');
        vector<vector<char>> chessBoard(n, row);
        traversal(0, n, chessBoard);

        for (int i = 0; i < result.size(); i++) {
            vector<string> tempChessBoard;
            for (int j = 0; j < n; j++) {
                string tempString;
                for (int k = 0; k < n; k++) {
                    tempString.push_back(result[i][j][k]);
                }
                tempChessBoard.push_back(tempString);
            }
            res.push_back(tempChessBoard);
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<vector<string>> res = s.solveNQueens(3);

    for (auto it1 = res.begin(); it1 != res.end(); it1++) {
        for (auto it2 = (*it1).begin(); it2 != (it1)->end(); it2++) {
            cout << *it2 << " ";
        }
        cout << endl;
    }
    return 0;
}
