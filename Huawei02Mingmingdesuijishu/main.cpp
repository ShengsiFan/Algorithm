#include <iostream>
#include <set>

using namespace std;

int main() {
    int a, n;
    bool hash[501] = {false};   // 为1-500创建hash表
    cin >> n;
    while (n--) { // 注意 while 处理多个 case
        cin >> a;
        hash[a] = true; // 哈希表填进来
    }
    for (int i = 1; i < 501; i++) {
        if (hash[i]) cout << i << endl;
    }
}
// 64 位输出请用 printf("%lld")