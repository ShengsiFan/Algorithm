/*
 * 给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。
 *
 * 示例：
 * 输入：nums = [-4,-1,0,3,10]
 * 输出：[0,1,9,16,100]
 * 解释：平方后，数组变为 [16,1,0,9,100]
 * 排序后，数组变为 [0,1,9,16,100]
 */
#include <iostream>
#include <vector>

using namespace std;

void MyPrint(vector<int> &v);

class Solution {
public:
    vector<int> sortedSquares(vector<int> &nums) {
        vector<int> newArr;

        int left = 0;
        int right = 1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] * nums[i + 1] <= 0) {
                left = i;
                right = i + 1;
                break;
            }
        }

        if (nums[nums.size()-1]<0){
            for (int i = nums.size()-1; i>=0; i--){
                newArr.push_back(nums[i]*nums[i]);
            }
            return newArr;
        }

        while (left>=0 && right <nums.size()) {
            if (-nums[left] < nums[right]) {
                newArr.push_back(nums[left] * nums[left]);
                left--;
            } else if (-nums[left] >= nums[right]) {
                newArr.push_back(nums[right] * nums[right]);
                right++;
            }
        }
        if (left == -1){
            for (int i = right; i<nums.size();i++){
                newArr.push_back(nums[i]*nums[i]);
            }
        }else if (right == nums.size()){
            for (int i = left; i>=0;i--) {
                newArr.push_back(nums[i]*nums[i]);
            }
        }


        return newArr;
    }
};

void MyPrint(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vTest = {-1000,-100,-30,0,500};

    Solution s;

    vector<int> v2 = s.sortedSquares(vTest);

    MyPrint(v2);

    return 0;
}