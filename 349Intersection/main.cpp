#include <iostream>
#include "unordered_set"
#include "vector"

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int hash[1001] = {0};
        unordered_set<int> interSec;
        for (int i = 0; i < nums1.size(); ++i) {
            hash[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); ++i) {
            if (hash[nums2[i]] != 0){
                interSec.insert(nums2[i]);
            }
        }
        return vector<int>(interSec.begin(), interSec.end());
    }
};

int main() {
    vector<int> a = {1,2,3,4,5,6};
    vector<int> b = {6};

    Solution s;
    vector<int> c = s.intersection(a,b);

    for (vector<int>::iterator it = c.begin(); it != c.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
