#include <iostream>
#include "vector"
#include "stack"

using namespace std;

class Solution {
public:
    int area(vector<int> height) {
        int res = 0;;
        stack<int> st;
        height.push_back(-1);
        for (int i = 0; i < height.size();i++) {
            while (!st.empty() && height[i] < height[st.top()]) {
                int temp = st.top();
                st.pop();
                int left = st.empty()?-1:st.top();
                res = max(res, (i-left-1)*height[temp]);
            }
            st.push(i);
        }
        return res;
    }
    int maximalRectangle(vector <vector<char>> &matrix) {
        vector<int> height(matrix[0].size());
        int res = 0;
        for (int i = 0; i < matrix.size();i++) {
            for (int j = 0; j < matrix[i].size();j++) {
                if (matrix[i][j] =='1') height[j]++;
                else height[j] = 0;
            }
            res = max(res, area(height));
        }
        return res;
    }
};


int main() {
    vector <vector<char>> matrix = {{'1', '0', '1', '0', '0'},
                                    {'1', '0', '1', '1', '1'},
                                    {'1', '1', '1', '1', '1'},
                                    {'1', '0', '0', '1', '0'}};
    Solution s;
    cout << s.maximalRectangle(matrix);

    return 0;
}
