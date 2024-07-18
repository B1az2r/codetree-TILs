#include <stdio.h>
int a[100];
void result(int *arr, int cnt); // 반환값을 void로 수정

int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int b[100] = {0}; // 범위 배열 초기화

    // 배열 a 입력
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 범위 입력
    for (j = 0; j < m * 2; j += 2) {
        scanf("%d %d", &b[j], &b[j + 1]);
    }

    result(b, m * 2); // 범위의 수를 전달
    return 0;
}

void result(int *arr, int cnt) {
    int res = 0, j, k;

    for (j = 0; j < cnt; j += 2) {
        for (k = arr[j]; k <= arr[j + 1]; k++) {
            if (k > 0 && k <= 100) { // 유효한 인덱스 범위 내에서 접근
                res += a[k - 1];
            }
        }
        printf("%d\n", res);
        res = 0;
    }
}