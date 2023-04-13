#include <iostream>
#include "vector"
#include "stack"

using namespace std;

class Solution {
public:
    int trap(vector<int> &height) {
        stack<int> st;
        int res = 0;
        st.push(0);
        for (int i = 1; i < height.size(); i++) {
            while (!st.empty() && height[i] > height[st.top()]) {
                int mid = st.top();
                st.pop();
                if (!st.empty()) res += (min(height[i], height[st.top()]) - height[mid]) * (i - st.top() - 1);
            }
            st.push(i);
        }
        return res;
    }
};

int main() {
    vector<int> height = {4,2,0,3,2,5};
    Solution s;
    cout << s.trap(height);
    return 0;
}
