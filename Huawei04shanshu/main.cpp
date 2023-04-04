#include <iostream>
#include "queue"
using namespace std;

int main() {
    int n;
    int count = 0;
    int temp = 0;   // 存最新的那个数
    cin >> n;
    queue<int> que;
    for (int i = 0; i < n; i++) que.push(i);

    while (!que.empty()) {
        temp = que.front(); // 暂存队头
        que.pop();              // 弹出队头
        if (count == 0 || count == 1) {
            count++;
            que.push(temp); // 装回去
        } else if (count == 2) count = 0;
    }
    cout << temp;
    return 0;
}
// 64 位输出请用 printf("%lld")