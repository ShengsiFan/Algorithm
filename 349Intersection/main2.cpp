#include <iostream>
#include "unordered_set"
#include "vector"

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> hash1(nums1.begin(), nums1.end());
        unordered_set<int> resSet;
        for (int num : nums2){
            if (hash1.find(num) != hash1.end()){
                resSet.insert(num);
            }
        }
        return vector<int>(resSet.begin(), resSet.end());
    }
};

int main() {
    vector<int> a = {1,2,3,4,5,6};
    vector<int> b = {2,5};

    Solution s;
    vector<int> c = s.intersection(a,b);

    for (vector<int>::iterator it = c.begin(); it != c.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
