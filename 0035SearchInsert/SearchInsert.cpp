#include <iostream>
#include <vector>

using namespace std;

void MyPrint(vector<int> &v);

class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > target){
                right = mid -1;
            } else if (nums[mid] <target){
                left = mid+1;
            } else{
                return mid;
            }
        }

        return left;
    }
};


int main() {
    vector<int> vTest = {1, 2,7, 8};

    Solution s;
    s.searchInsert(vTest, 6);

    return 0;
}


void MyPrint(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}