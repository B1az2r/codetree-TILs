#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];  // 배열 크기는 문제의 범위에 따라 조정 가능합니다.

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 반복적으로 최댓값의 위치를 찾고 출력
    while (n > 0) {
        int max_index = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[max_index]) {
                max_index = i;
            }
        }
        // 위치는 1부터 시작하므로 +1
        printf("%d ", max_index + 1);
        // 다음 반복을 위해 배열의 범위를 줄임
        n = max_index;
    }

    printf("\n");
    return 0;
}