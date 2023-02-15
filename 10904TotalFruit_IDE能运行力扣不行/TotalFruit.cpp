#include <iostream>
#include <vector>

using namespace std;

void MyPrint(vector<int> &v);

class Solution {
public:
    int totalFruit(vector<int> &fruits) {
        if (fruits.size() < 2) {
            return fruits.size();
        }
        int fastFruit = fruits[1];
        int slowFruit = fruits[0];
        int slow = 0;
        int result = 2;

        for (int fast = 1; fast < fruits.size(); fast++) {
            if (fruits[fast] != fastFruit && fruits[fast] != slowFruit) {
                slow = fast - 1;
                slowFruit = fruits[slow];
                fastFruit = fruits[fast];

                while (fruits[slow] == slowFruit) {
                    slow--;
                }
                slow++;
            }
            if(fast - slow + 1 > result){
                result = fast- slow + 1;
                resultArr.clear();
                for (int i = 0; i < result ; ++i) {
                    resultArr.push_back(fruits[slow+i]);
                }
            }
        }

        return result;
    }
    vector<int> resultArr;
};

int main() {
    vector<int> vTest = {3,3,3,1,2,1,1,2,3,3,4};

    Solution s;
    cout << s.totalFruit(vTest) << endl;
    MyPrint(s.resultArr);

    return 0;
}


void MyPrint(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}