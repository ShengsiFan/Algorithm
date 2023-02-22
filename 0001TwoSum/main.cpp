#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        int sum = 0;
        for (int i = 0; i < nums.size()-1; i++){
            for (int j = i + 1; j < nums.size(); j++){
                if (nums[i]+nums[j]==target){
                    return vector<int>{i,j};
                }
            }
        }
        return vector<int>{0,0};
    }
};

int main() {
    vector<int> n = {1,2,3,4,5,6};
    Solution s;
    cout << s.twoSum(n,4)[0] <<" " <<s.twoSum(n,4)[1]<<endl;
    return 0;
}
