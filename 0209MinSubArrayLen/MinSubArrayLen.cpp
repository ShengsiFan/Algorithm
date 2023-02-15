#include <iostream>
#include <vector>

using namespace std;

void MyPrint(vector<int> &v);

class Solution {
public:
    int minSubArrayLen(int target, vector<int> &nums) {
        int slow = 0;
        int sum = 0;
        int result = nums.size();

        for (int fast = 0; fast < nums.size(); ++fast) {
            sum += nums[fast];

            while (sum >= target) {
                result = result > fast - slow + 1 ? fast - slow + 1 : result;
                sum -= nums[slow];
                slow++;
            }
        }
        if(result==nums.size()){
            int sumAll = 0;
            for (int i=0;i<nums.size();i++){
                sumAll+=nums[i];
            }
            if (sumAll<target){
                return 0;
            }
        }
        return result;
    }
};


int main() {
    vector<int> vTest = {1, 1, 100};

    Solution s;

    cout << s.minSubArrayLen(200,vTest)<< endl;

    return 0;
}


void MyPrint(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}