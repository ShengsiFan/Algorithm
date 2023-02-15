#include  <iostream>
#include  <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) {
        vector<int> resultArr(matrix.size() * matrix[0].size(), 0);
        int startX = 0, startY = 0;
        int loop = matrix.size() > matrix[0].size() ? matrix[0].size() / 2 : matrix.size() / 2;
        int put = 0;
        int offset = 1;

        while (loop--) {
            int i = startX;
            int j = startY;

            for (; j < matrix[0].size() - offset; j++) {
                resultArr[put++] = matrix[startX][j];
            }
            for (; i < matrix.size() - offset; i++) {
                resultArr[put++] = matrix[i][j];
            }
            for (; j > startY; j--) {
                resultArr[put++] = matrix[i][j];
            }
            for (; i > startX; i--) {
                resultArr[put++] = matrix[i][j];
            }
            startY++;
            startX++;
            offset++;
        }

        if (min(matrix.size(), matrix[0].size()) % 2) {
            if (matrix.size() < matrix[0].size()) {
                for (int j = startY; j <= matrix[0].size() - offset; j++) {
                    cout << startX << " " << startY << endl;
                    resultArr[put++] = matrix[startX][j];
                }
            } else {
                for (int i = startX; i <= matrix.size() - offset; i++) {
                    resultArr[put++] = matrix[i][startY];
                }
            }
        }
        return resultArr;
    }
};


int main() {
    Solution s;

    vector<vector<int>> M({{1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9}});

    vector<int> r = s.spiralOrder(M);

    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << " ";
    }

    return 0;
}