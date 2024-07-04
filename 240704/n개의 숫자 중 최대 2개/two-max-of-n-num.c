#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];  // 배열 크기는 문제의 범위에 따라 조정 가능합니다.

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 버블 정렬을 사용하여 내림차순 정렬
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] < arr[j + 1]) {
                // 두 숫자를 교환
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 첫 번째와 두 번째 숫자 출력
    printf("%d %d\n", arr[0], arr[1]);

    return 0;
}