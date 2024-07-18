#include <stdio.h>

int a[100];
int result(int start, int end);

int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);
    
    // 배열 a 입력
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // 범위 입력 및 결과 출력
    for (i = 0; i < m; i++) {
        int start, end;
        scanf("%d %d", &start, &end);
        printf("%d\n", result(start, end));
    }
    
    return 0;
}

int result(int start, int end) {
    int sum = 0;
    for (int i = start - 1; i <= end - 1; i++) {
        sum += a[i];
    }
    return sum;
}