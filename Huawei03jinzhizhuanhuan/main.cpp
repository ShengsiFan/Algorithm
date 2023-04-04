#include <iostream>
#include "string"

using namespace std;

int main() {
    string a;
    cin >> a;
    int num = 0, base = 1;
    for (int i = a.size() - 1; i >= 2; i--) {
        if (a[i] - '0' >= 17) {
            num += base * (a[i] - '0' - 7);
        } else {
            num += base * (a[i] - '0');
        }
        base *= 16;
    }
    cout << num;
    return 0;
}
// 64 位输出请用 printf("%lld")