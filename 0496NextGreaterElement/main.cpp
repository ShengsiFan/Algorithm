#include <iostream>
#include "vector"
#include "stack"
#include "unordered_map"

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
        stack<int> st;
        unordered_map<int, int> mp;
        vector<int> res(nums1.size(), -1);
        st.push(0);
        for (int i = 1; i < nums2.size(); i++) {
            while (!st.empty() && nums2[st.top()] < nums2[i]) {
                mp[nums2[st.top()]] = nums2[i];
                st.pop();
            }
            st.push(i);
        }
        for (int i = 0; i < nums1.size(); i++) {
            if (mp.find(nums1[i]) != mp.end()) res[i] = mp[nums1[i]];
        }
        return res;
    }
};

int main() {
    vector<int> nums1 = {2,4}, nums2 = {1, 2, 3, 4};
    Solution s;
    vector<int> res = s.nextGreaterElement(nums1, nums2);
    for (int i: res) cout << i << " ";
    return 0;
}
