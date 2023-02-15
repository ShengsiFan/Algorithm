#include <iostream>
#include <vector>

using namespace std;

void MyPrint(vector<int> &v);

class Solution {
public:
    bool isPerfectSquare(int num) {
        int x=1;
        while(num>0){

            num-=x;
            x+=2;
        }
        return num==0?true:false;
    }
};


int main() {
    Solution s;

    cout << s.isPerfectSquare(100) << endl;

    return 0;
}


void MyPrint(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}