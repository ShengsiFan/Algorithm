#include <iostream>
#include "vector"
#include "stack"

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int> &heights) {
        heights.insert(heights.begin(),0);
        heights.push_back(0);
        stack<int> st;
        int res = 0;
        st.push(0);

        for (int i = 1; i < heights.size(); i++) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                int mid = st.top();
                st.pop();
                if (!st.empty()) res = max(res, (i - st.top() - 1) * heights[mid]);
            }
            st.push(i);
        }
        return res;
    }
};

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    Solution s;
    cout << s.largestRectangleArea(heights);
    return 0;
}
