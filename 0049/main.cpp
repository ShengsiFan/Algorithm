#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        vector<vector<string>> res; // 结果
        unordered_map<string, int> hashMap; // 储存数据用的，key是排序后的字符串，int数据代表一种字母异构体的编号，方便push给结果
        int index = 0;  // 计数现在有几种字母异构体了，也就是新增的字母异构体的种类应该给他几号
        for (auto str : strs) {  // 遍历strs里的字符串
            auto temp = str;    // 存一下，下面会对str排序，不存弄丢了
            sort(str.begin(), str.end());   // 排序之后再找现有的异构体里面有没有这个

            if (hashMap.count(str)) {
                res[hashMap[str]].push_back(temp);  // str对应的索引值是hashMap[str]，在res里str异构体的数组后把temp(此时str已经被改了，只能用temp)push进去
            } else {
                vector<string> newStr;  // 新建一个字符串数组放新的一种异构体
                newStr.push_back(temp); // 把str(temp)存进去作为第一个元素
                res.push_back(newStr);  // 把新数组push进res
                hashMap[str] = index++; // 哈希表里也要加入新的异构体，并把索引增加1
            }
        }
        return res;
    }
};

int main() {

    return 0;
}
