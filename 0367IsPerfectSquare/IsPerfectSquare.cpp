#include <iostream>
#include <vector>

using namespace std;

void MyPrint(vector<int> &v);

class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 1;
        int right = num;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (mid * mid < num) {
                left = mid + 1;
            } else if (mid * mid > num) {
                right = mid - 1;
            } else {
                return true;
            }
        }
        return false;
    }
};


int main() {
    Solution s;

    cout << s.isPerfectSquare(10) << endl;

    return 0;
}


void MyPrint(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}