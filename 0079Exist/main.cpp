#include <iostream>
#include "vector"
#include "string"

using namespace std;

class Solution {
public:
    bool traversal(int index, int i, int j, vector<vector<bool>> &used, const vector<vector<char>> &board,
                   const string &word) {
        if (board[i][j] != word[index]) return false;
        if (index == word.size() - 1) return true;

        bool up = false, left = false, right = false, down = false;
        used[i][j] = true;
        if (i - 1 >= 0 && !used[i - 1][j]) {
            index++;
            up = traversal(index, i - 1, j, used, board, word);
            index--;
        }
        if (j - 1 >= 0 && !used[i][j - 1]) {
            index++;
            left = traversal(index, i, j - 1, used, board, word);
            index--;
        }
        if (i + 1 < board.size() && !used[i + 1][j]) {
            index++;
            down = traversal(index, i + 1, j, used, board, word);
            index--;
        }
        if (j + 1 < board[0].size() && !used[i][j + 1]) {
            index++;
            right = traversal(index, i, j + 1, used, board, word);
            index--;
        }
        used[i][j] = false;
        return up || down || left || right;
    }

    bool exist(vector<vector<char>> &board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                vector<vector<bool>> used(board.size(), vector<bool>(board[0].size(), false)); // 是否用过
                int index = 0;  // 正在匹配的word下标
                if (traversal(0, i, j, used, board, word)) return true;
            }
        }
        return false;
    }
};

int main() {
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','E','S'},{'A','D','E','E'}};
    string word = "ABCESEEEFS";
    Solution s;
    cout <<s.exist(board,word);

    return 0;
}
