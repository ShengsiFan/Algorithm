#include <iostream>
#include "unordered_set"

using namespace std;

class Solution {
public:
    int sumSquareEachPos(int n) {
        int sum = 0;
        while (n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> temp;
        while (temp.find(n) == temp.end()) {
            temp.insert(n);
            n = sumSquareEachPos(n);
            if (n == 1) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution s;
    cout << s.isHappy(7);
    return 0;
}
