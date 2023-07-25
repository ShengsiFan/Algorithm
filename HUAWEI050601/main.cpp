#include <iostream>
#include "string"
#include "stack"

using namespace std;

string floatAdd(string num1, string num2) {
    int m = (int) num1.size(), n = (int) num2.size();
    int N = 0;
    int next = 0;
    stack<char> resST;
    if (m > n) {
        N = m;
        for (int i = 0; i < m - n; i++) {
            num2.push_back('0');
        }
    } else {
        N = n;
        for (int i = 0; i < n - m; i++) {
            num1.push_back('0');
        }
    }
    for (int i = N - 1; i >= 0; i--) {
        if (num1[i] != '!' && num1[i] != '@' && num1[i] != '#') {

            int _num1 = num1[i] - '0';
            int _num2 = num2[i] - '0';
            if (_num1 + _num2 + next > 10) {
                next = 1;
                int _num = _num1 + _num2 + next - 10;
                resST.push(_num - '0');
            } else {
                next = 0;
                resST.push(_num1 + _num2 + next - '0');
            }
        } else if (num1[i] == '!' && num2[i] == '!') {
            resST.push(next - '0');
            next = 0;
        } else if ((num1[i] == '!' && num2[i] == '@') || (num1[i] == '@' && num2[i] == '!')) {
            resST.push(3 + next - '0');
            next = 1;
        } else if ((num1[i] == '!' && num2[i] == '#') || (num1[i] == '#' && num2[i] == '!')) {
            resST.push(4 + next - '0');
            next = 0;
        } else if (num1[i] == '@' && num2[i] == '@') {
            resST.push(7 - '0');
            next = 0;
        } else if ((num1[i] == '@' && num2[i] == '#') || (num1[i] == '#' && num2[i] == '@')) {
            resST.push(next - '0');
            next = 2;
        } else if (num1[i] == '#' && num2[i] == '#') {
            resST.push(5 - '0');
            next = 0;
        }
    }
    string res;
    while (!resST.empty()) {
        res.push_back(resST.top());
        resST.pop();
    }
    return res;
}


string floatAdd(string num1, string num2) {
    int m = (int) num1.size(), n = (int) num2.size();
    int N = 0;
    int next = 0;
    stack<char> resST;
    if (m > n) {
        N = m;
        for (int i = 0; i < m - n; i++) {
            num2.push_back('0');
        }
    } else {
        N = n;
        for (int i = 0; i < n - m; i++) {
            num1.push_back('0');
        }
    }
    for (int i = N - 1; i >= 0; i--) {
        if (num1[i] != '!' && num1[i] != '@' && num1[i] != '#') {

            int _num1 = num1[i] - '0';
            int _num2 = num2[i] - '0';
            if (_num1 + _num2 + next > 10) {
                next = 1;
                int _num = _num1 + _num2 + next - 10;
                resST.push(_num - '0');
            } else {
                next = 0;
                resST.push(_num1 + _num2 + next - '0');
            }
        } else if (num1[i] == '!' && num2[i] == '!') {
            resST.push(next - '0');
            next = 0;
        } else if ((num1[i] == '!' && num2[i] == '@') || (num1[i] == '@' && num2[i] == '!')) {
            resST.push(3 + next - '0');
            next = 1;
        } else if ((num1[i] == '!' && num2[i] == '#') || (num1[i] == '#' && num2[i] == '!')) {
            resST.push(4 + next - '0');
            next = 0;
        } else if (num1[i] == '@' && num2[i] == '@') {
            resST.push(7 - '0');
            next = 0;
        } else if ((num1[i] == '@' && num2[i] == '#') || (num1[i] == '#' && num2[i] == '@')) {
            resST.push(next - '0');
            next = 2;
        } else if (num1[i] == '#' && num2[i] == '#') {
            resST.push(5 - '0');
            next = 0;
        }
    }
    string res;
    while (!resST.empty()) {
        res.push_back(resST.top());
        resST.pop();
    }
    return res;
}

int main() {
    int charNum = 0;
    string inputString;

    getline(cin, inputString);    // 输入字符串
    int flag = 0;
    string numbers[4];  // 四段数
    int plusPos = -1, firstDotPos = -1, secondDotPos = -1;
    int cases = 0

    // 遍历一遍，判断加数类型
    for (int i = 0; i < inputString.size(); i++) {
        if (inputString[i] == '+') {
            flag++;
            plusPos = i;
            if (firstDotPos != -1) cases = 1;
            continue;
        } else if (inputString[i] == '.') {
            if (firstDotPos == -1 && plusPos == -1) {
                firstDotPos = i;
            } else if (firstDotPos == -1 && plusPos != -1) {
                secondDotPos = i;
                cases = 2;
            } else {
                secondDotPos = i;
                cases = 3;
            }
            continue;
        }
        numbers[flag].push_back(inputString[i]);
    }

    if (cases == 0) {
        int int1 = stoi(numbers[0]);
        int int2 = stoi(numbers[1]);
        cout << int1 + int2;
    } else if (cases == 1) {
        int int1 = stoi(numbers[0]);
        int int2 = stoi(numbers[2]);
        string intSum = to_string(int1 + int2);
        cout << intSum + numbers[1];
    }

    return 0;
}
