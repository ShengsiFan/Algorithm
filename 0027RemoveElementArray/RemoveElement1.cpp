/*
给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
                continue;
            }else{
                count++;
                int j = i + 1;
                int count_in = 1;
                while (nums[j] == val && j < nums.size()){
                    j++;
                    count_in++;
                    count++;
                }
                for (int k = i; k < nums.size(); k++){
                    nums[k] = nums[k+count_in];
                }
                
            }
        }

        for (int i = 0; i < count; i++){
            nums.pop_back();
        }
        return count;
    }
};

int main()
{

    vector<int> v = {3,2,2,3,2,3};


    Solution s;
    cout << "number of the target: " << s.removeElement(v, 2) << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<< *it << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}