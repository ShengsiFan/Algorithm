#include <iostream>
#include "vector"

using namespace std;

int main() {
    int numStudent, numOrder;
    while (cin >> numStudent >> numOrder) {
        vector<int> data(numStudent + 1, 0);

        // 输入原始数据
        for (int i = 1; i <= numStudent; i++) {
            cin >> data[i];
        }
        // 处理命令
        while (numOrder--) {
            char order;
            int first, second;
            cin >> order >> first >> second;
            if (order == 'Q') {
                if (first > second) {
                    swap(first, second);
                }
                int max = data[first];
                for (int i = first; i <= second; i++) {
                    max = data[i] > max ? data[i] : max;
                }
                cout << max << endl;
            } else if (order == 'U') data[first] = second;
        }

    }
    return 0;
}
// 64 位输出请用 printf("%lld")