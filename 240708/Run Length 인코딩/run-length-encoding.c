#include <stdio.h>
#include <string.h>

// 숫자의 자리 수를 계산하는 함수
int digit_count(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    char arr[1000];
    scanf("%s", arr);

    int len = strlen(arr);
    int cnt = 0;
    int num = 1;
    int output_len = 0;
    char result[2000];  // 결과 문자열을 저장할 배열 (충분히 큰 크기로 설정)
    int index = 0;

    for (int i = 0; i < len; i++) {
        if (arr[i+1] == arr[i]) {
            cnt++;
        } else {
            num = cnt + 1;
            // 결과 문자열에 문자와 숫자를 추가
            index += sprintf(&result[index], "%c%d", arr[i], num);
            // 출력 길이 계산
            output_len += 1 + digit_count(num);
            cnt = 0;
        }
    }

    // 첫 번째 줄에 길이를 출력
    printf("%d\n", output_len);
    // 두 번째 줄에 결과 문자열을 출력
    printf("%s\n", result);

    return 0;
}