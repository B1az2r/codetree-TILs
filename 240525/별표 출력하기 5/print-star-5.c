#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // n부터 1까지 반복
    for (int i = n; i > 0; i--) {
        // 각 줄에 i개의 별 그룹을 출력
        for (int j = 0; j < i; j++) {
            // i개의 별 출력
            for (int k = 0; k < i; k++) {
                printf("*");
            }
            // 그룹 사이에 공백 추가
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}