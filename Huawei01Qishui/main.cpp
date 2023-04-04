/*
 * 某商店规定：三个空汽水瓶可以换一瓶汽水，允许向老板借空汽水瓶（但是必须要归还）。
 * 小张手上有n个空汽水瓶，她想知道自己最多可以喝到多少瓶汽水。
 */
#include <iostream>

using namespace std;

int Drinks(int n) {
    int count = n;  // 喝的饮料数量
    int bottle = n; // 瓶子数量
    while (bottle != 0 && bottle != 1) {    // 不剩空瓶子或者剩一个都不能换，结束
        if (bottle == 2) {  // 剩两个瓶子，借一个就结束了
            count++;
            break;
        }
        int exchange = bottle / 3;  // 空瓶子换饮料
        count += exchange;  // 把饮料喝了
        bottle = (bottle % 3) + exchange;   // 现在的空瓶子有多少个
    }
    return count;
}


int main() {
    int a;
//    while (cin >> a) { // 注意 while 处理多个 case
//        cout << s.Drinks(a) << endl;
//    }


    return 0;
}