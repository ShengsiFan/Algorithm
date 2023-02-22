#include <iostream>
#include "vector"
#include "unordered_set"

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
        vector<int> res;
        int hash[1001] = {0};

        for (int i = 0; i < nums1.size(); i++) {
            hash[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (hash[nums2[i]] != 0) {
                hash[nums2[i]]--;
                res.push_back(nums2[i]);
            }
        }
        return res;
    }
};

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 5, 5};
    vector<int> b = {5, 5, 6, 2, 4};

    Solution s;

    vector<int> res = s.intersect(a, b);

    for (vector<int>::iterator it = res.begin(); it != res.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
