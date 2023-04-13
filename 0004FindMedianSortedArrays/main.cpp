#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        int pos = (nums1.size() + nums2.size()) / 2;
        int index1 = 0, index2 = 0;
        vector<int> cur = {1, 0}, temp = {1, 0};   // {i, j} - 第几个数组的第几个元素
        for (int i = 0; i <= pos; i++) {
            if (index1 == nums1.size()) {
                cur[0] = 2;
                cur[1] = index2;
                index2++;
            } else if (index2 == nums2.size()) {
                cur[0] = 1;
                cur[1] = index1;
                index1++;
            } else {
                if (nums1[index1] < nums2[index2]) {
                    cur[0] = 1;
                    cur[1] = index1;
                    index1++;
                } else {
                    cur[0] = 2;
                    cur[1] = index2;
                    index2++;
                }
            }
            if (i == pos - 1) temp = cur;
        }
        double res = 0, resPre = 0;
        if (cur[0] == 1) res = nums1[cur[1]];
        else res = nums2[cur[1]];
        if (!((nums1.size() + nums2.size()) % 2)){
            if (temp[0] == 1) resPre = nums1[temp[1]];
            else resPre = nums2[temp[1]];
            return (res+resPre)/2;
        } else return res;
    }
};

int main() {
    vector<int> nums1 = {1,3}, nums2 = {2,4};
    Solution s;
    cout << s.findMedianSortedArrays(nums1, nums2);
    return 0;
}
