#include <iostream>
#include <vector>
#include "stack"

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int> &temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<int> st;
        st.push(0);
        for (int i = 1; i < temperatures.size(); i++) {
            cout << temperatures[st.top()] << " " << temperatures[i] <<endl;
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                res[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return res;
    }
};

int main() {
    vector<int> t = {1,2,3,4};
    Solution s;
    vector<int> res = s.dailyTemperatures(t);
    for (int i: res) cout << i << " ";
    return 0;
}
