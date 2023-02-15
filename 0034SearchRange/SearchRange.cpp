#include <iostream>
#include <vector>

using namespace std;

void MyPrint(vector<int> &v);

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        vector<int> resultVector = {-1, -1};

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > target){
                right = mid -1;
            } else if (nums[mid] <target){
                left = mid+1;
            } else{
                int findFront  = mid;
                int findBehind = mid;
                while (findFront >= left){
                    if (nums[findFront] == target) {
                        findFront--;
                    } else{
                        break;
                    }
                }
                while (findBehind <= right){
                    if (nums[findBehind] == target){
                        findBehind++;
                    }else{
                        break;
                    }
                }
                resultVector = {findFront+1, findBehind-1};
                return resultVector;
            }
        }
        return resultVector;
    }
};


int main() {
    vector<int> vTest = {1, 2, 2,3,3,4,5};

    Solution s;
    vector<int> v2 = s.searchRange(vTest,5);

    return 0;
}


void MyPrint(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}