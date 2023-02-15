#include <iostream>
#include <vector>

using namespace std;

void MyPrint(vector<int> &v);

class Solution {
public:
    int minSubArrayLen(int target, vector<int> &nums) {
        int result = nums.size();

        for (int i = 0; i < nums.size(); ++i) {
            int sum = 0;
            for (int j = i; j < nums.size(); ++j) {
                sum += nums[j];
                if (sum >= target) {
                    result = result > j - i + 1 ? j - i + 1 : result;
                }
            }
        }
        if (result == nums.size()){
            int sum = 0;
            for (int i = 0; i<nums.size();i++){
                sum+=nums[i];
            }
            if(sum<target){
                return 0;
            }
        }
        return result;
    }
};


int main() {
    vector<int> vTest = {1, 1, 100};

    Solution s;

    cout << s.minSubArrayLen(102, vTest) << endl;

    return 0;
}


void MyPrint(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}