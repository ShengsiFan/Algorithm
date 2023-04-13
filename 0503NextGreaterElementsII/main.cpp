#include <iostream>
#include "vector"
#include "stack"

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int> &nums) {
        vector<int> doubleNums = nums;
        doubleNums.insert(doubleNums.end(),doubleNums.begin(),doubleNums.end());
        vector<int> res(doubleNums.size(),-1);
        stack<int> st;
        st.push(0);
        for (int i = 1; i < doubleNums.size(); i++) {
            while (!st.empty() && doubleNums[st.top()] < doubleNums[i]) {
                res[st.top()] = doubleNums[i];
                st.pop();
            }
            st.push(i);
        }
        res.resize(nums.size());
        return res;
    }
};

int main() {
    vector<int> nums = {1,2,3,4,3};
    Solution s;
    vector<int> res = s.nextGreaterElements(nums);
    for (int i : res) cout << i << " ";
    return 0;
}
