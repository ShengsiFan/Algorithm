#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>> &matrix) {
        if (matrix.size() == 1) return;
        int n = (int) matrix.size();
        for (int i = 0; i < n / 2; i++) {
            for (int j = i; j < n - i - 1; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[n - j - 1][i];
                matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
                matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
                matrix[j][n - i - 1] = temp;
            }
        }
    }
};

int main() {
    vector<vector<int>> mat =  {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    Solution s;
    s.rotate(mat);
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size();j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
