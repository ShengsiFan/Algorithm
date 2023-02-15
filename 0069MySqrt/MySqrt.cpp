#include <iostream>
#include <vector>

using namespace std;

void MyPrint(vector<int> &v);

class Solution {
public:
    int mySqrt(int x) {
        int left = 1;
        int right = x;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (mid * mid < x) {
                left = mid + 1;
            } else if (mid * mid > x) {
                right = mid - 1;
            } else {
                return mid;
            }
        }
        return right;
    }
};


int main() {

    Solution s;
    cout << s.mySqrt(2147395599) << endl;

    return 0;
}


void MyPrint(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}