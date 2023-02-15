#include  <iostream>
#include  <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> resultMatrix(n, vector<int>(n, 0));
        int startX = 0, startY = 0;
        int length = n - 1; //  每个边排几个数
        int loop = n / 2;   //  圈数
        int put = 1;        //  填入的数

        while (loop--) {
            int i = startX;
            int j = startY;

            for (; j < length; j++) {
                resultMatrix[startX][j] = put++;
            }
            for (; i < length; i++) {
                resultMatrix[i][j] = put++;
            }
            for (; j > startY; j--) {
                resultMatrix[i][j] = put++;
            }
            for (; i > startX; i--) {
                resultMatrix[i][j] = put++;
            }

            startX++;
            startY++;
            length--;
        }

        if (n % 2) {
            resultMatrix[n / 2][n / 2] = n * n;
        }
        return resultMatrix;
    }
};


int main() {
    Solution s;

    int n = 5;

    vector<vector<int>> r = s.generateMatrix(n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << r[i][j] << " ";

        }
        cout <<endl;
    }

    return 0;
}