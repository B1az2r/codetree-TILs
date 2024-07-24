#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 함수: a진수 문자열을 10진수 정수로 변환
int convertToDecimal(string n, int a) {
    int decimal = 0;
    int length = n.size();
    for (int i = 0; i < length; i++) {
        decimal += (n[length - 1 - i] - '0') * pow(a, i);
    }
    return decimal;
}

// 함수: 10진수 정수를 b진수 문자열로 변환
string convertFromDecimal(int decimal, int b) {
    string result = "";
    while (decimal > 0) {
        result = char((decimal % b) + '0') + result;
        decimal /= b;
    }
    return result;
}

int main() {
    int a, b;
    string n;
    cin >> a >> b >> n;

    // 1단계: a진수 문자열 n을 10진수 정수로 변환
    int decimal = convertToDecimal(n, a);

    // 2단계: 10진수 정수를 b진수 문자열로 변환
    string result = convertFromDecimal(decimal, b);

    // 결과 출력
    cout << result << endl;

    return 0;
}