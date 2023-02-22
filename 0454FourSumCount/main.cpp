#include <iostream>
#include "vector"
#include "unordered_map"

using namespace std;

class Solution {
public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4) {
        int res = 0;
        unordered_map<int, int> temp;

        for (int i : nums1) {
            for (int j : nums2) {
                temp[i + j]++;
            }
        }
        for (int i : nums3) {
            for (int j : nums4) {
                if (temp.find(-i - j) != temp.end()) {
                    res += temp[-i - j];
                }
            }
        }
        return res;
    }
};

int main() {
    vector<int> a = {0},
            b = {0},
            c = {0},
            d = {0};
    Solution s;
    cout << s.fourSumCount(a, b, c, d) << endl;

    return 0;
}
