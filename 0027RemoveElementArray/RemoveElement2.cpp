/*
给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int removeElement(vector<int> &nums, int val){
        int slow = 0;
        for (int fast = 0; fast < nums.size(); fast++){
            if (nums[fast] != val){
                
                nums[slow] = nums[fast];
                slow++;
            }
        }
        int res = nums.size() - slow;
        for (int i = 0; i < res; i++){
            nums.pop_back();
        }
        return res;
    }
};

int main(){

    vector<int> v = {3,2,2,3};

    
    Solution s;
    cout << "number of the target: " << s.removeElement(v, 2) << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<< *it << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}