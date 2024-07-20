#include <stdio.h>

// 최대공약수를 구하는 재귀 함수
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// 최소공배수를 구하는 함수
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

// n개의 수의 최소공배수를 구하는 재귀 함수
int lcmArray(int arr[], int n, int index) {
    // 마지막 두 수의 최소공배수를 반환
    if (index == n - 1) {
        return arr[index];
    }
    if (index == n - 2) {
        return lcm(arr[index], arr[index + 1]);
    }

    // 현재 수와 나머지 수들의 최소공배수를 구함
    return lcm(arr[index], lcmArray(arr, n, index + 1));
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = lcmArray(arr, n, 0);
    printf("%d\n", result);

    return 0;
}